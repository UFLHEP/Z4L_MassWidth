#!/usr/bin/python
#-----------------------------------------------
# Latest update: 2012.08.30
# by Matt Snowball
#-----------------------------------------------
import sys, os, pwd, commands
import optparse, shlex, re
import math
from ROOT import *
import ROOT
from array import array

#define function for parsing options
def parseOptions():

    usage = ('usage: %prog [options] datasetList\n'
             + '%prog -h for help')
    parser = optparse.OptionParser(usage)
    parser.add_option('-b', action='store_true', dest='noX', default=True ,help='no X11 windows')
    parser.add_option('-c', '--chan',   dest='channel',       type='string',    default='4mu',     help='Channel to fit')
    
    # store options and arguments as global variables
    global opt, args
    (opt, args) = parser.parse_args()


def fit():

    global opt, args
    parseOptions()

    ROOT.gROOT.ProcessLine(".x tdrstyle.cc")
    f = open("fits/ZXFit_"+opt.channel+".txt", "w")
    
    histname = ''
    histname1 = ''
    histname2 = ''
    if opt.channel == '4e': histname = 'h4e'
    if opt.channel == '4mu': histname = 'h4mu'
    if opt.channel == '2e2mu':
        histname1 = 'h2e2mu'
        histname2 = 'h2mu2e'

    filename = 'fakes7TeV.root'
    file7 = ROOT.TFile(filename)

    if opt.channel != '2e2mu':
        hist7 = file7.Get(histname)
        theYield = hist7.Integral()
    else:
        hist7_1 = file7.Get(histname1)
        hist7_2 = file7.Get(histname2)
        hist7 = hist7_1.Clone()
        hist7.Add(hist7_2)
        theYield = hist7.Integral()

    f.write("######################################\n")
    f.write("Yield "+opt.channel+": "+str(theYield)+"\n")
    f.write("######################################\n")


    filename = 'fakes8TeV.root'
    file8 = ROOT.TFile(filename)

    if opt.channel != '2e2mu':
        hist8 = file8.Get(histname)
        theYield = hist8.Integral()
    else:
        hist8_1 = file8.Get(histname1)
        hist8_2 = file8.Get(histname2)
        hist8 = hist8_1.Clone()
        hist8.Add(hist8_2)
        theYield = hist8.Integral()
    
    hist = hist7.Clone()
    hist.Add(hist8)

    f.write("######################################\n")
    f.write("Yield "+opt.channel+": "+str(theYield)+"\n")
    f.write("######################################\n")
    f.close()

    xHigh = 200
    xLow = 50

    print "######################################"
    print "["+str(xLow)+","+str(xHigh)+"]"
    print "Yield "+opt.channel+": "+str(theYield)
    print "######################################"
    
    mass = ROOT.RooRealVar("mass","mass",50,200)
    dataHist = ROOT.RooDataHist("dataHist", "dataHist", ROOT.RooArgList(mass), hist)

    binsize = 2 #GeV
    nBins = (xHigh-xLow)/binsize

    mean = ROOT.RooRealVar("mean","mean",115,100,250)
    sigma = ROOT.RooRealVar("sigma","sigma",15,1,100)
    norm = ROOT.RooRealVar("norm","norm",3,0,10)
    pol1 = ROOT.RooRealVar("pol1","pol1",3,0,10)
    pol2 = ROOT.RooRealVar("pol2","pol2",1,0,20)


    p0 = ROOT.RooRealVar("p0","p0",1,0,10)
    p1 = ROOT.RooRealVar("p1","p1",1,0,10)
    p2 = ROOT.RooRealVar("p2","p2",1,0,10)
    p3 = ROOT.RooRealVar("p3","p3",1,0,10)
    p4 = ROOT.RooRealVar("p4","p4",1,0,10)

    #myargs = ROOT.RooArgSet(p0,p1,p2,p3,p4)
    #myargs = ROOT.RooArgSet(p0,p1,p2,norm,pol1,pol2)
    #myargs = ROOT.RooArgSet(mean,sigma,norm,pol1,pol2)
    myargs = ROOT.RooArgSet(mean,sigma)
    
    #func = ROOT.RooGenericPdf("func","func","(TMath::Landau(@0,@1,@2))*@3*(1.+ TMath::Exp(@4+@5*@0))",RooArgList(mass,mean,sigma,norm,pol1,pol2))
    #func = ROOT.RooGenericPdf("func","func","((@1+@0*@2+@0*@3)*@4*(1.+ TMath::Exp(@5+@6*@0))",RooArgList(mass,p0,p1,p2,norm,pol1,pol2))

    #func = ROOT.RooPolynomial("func","func",mass,RooArgList(p0,p1,p2,p3,p4))

    func = ROOT.RooLandau("func","func",mass,mean,sigma)
    
    fit = func.fitTo( dataHist, ROOT.RooFit.Save(True),ROOT.RooFit.SumW2Error(True) )
    fit.Print("v")


    frameM4l = mass.frame(ROOT.RooFit.Title("Invariant Mass of 4 Leptons"),ROOT.RooFit.Range(xLow,xHigh),ROOT.RooFit.Bins(nBins)) 
    dataHist.plotOn(frameM4l, ROOT.RooFit.MarkerStyle(8), ROOT.RooFit.MarkerColor(kBlack), ROOT.RooFit.FillColor(kWhite)) 
    func.plotOn(frameM4l, ROOT.RooFit.LineColor(kRed)) 
    
    func.paramOn(frameM4l,ROOT.RooFit.Layout(0.48,0.17,0.88), ROOT.RooFit.Parameters(myargs))


    frameM4l.SetMinimum(0)
    if opt.channel == '4e': frameM4l.GetXaxis().SetTitle("m_{4e} (GeV)")
    if opt.channel == '4mu': frameM4l.GetXaxis().SetTitle("m_{4#mu} (GeV)")
    if opt.channel == '2e2mu': frameM4l.GetXaxis().SetTitle("m_{2e2#mu} (GeV)")
    frameM4l.GetYaxis().SetTitle("N Events Expected")
    #frameM4l.GetXaxis().SetTitle("m_{4l} [GeV]")

    CP = ROOT.TLatex()
    CP.SetNDC(True)
    CP.SetTextSize(0.035)
    CP.SetTextAlign(31)
    CP.SetTextFont(42)
    CP.SetTextAlign(11)
    #gStyle->SetPadTopMargin(0.135);
    gStyle.SetOptTitle(0)
    
    
    c = ROOT.TCanvas("c","c",700,700)
    c.cd()
    frameM4l.SetFillColor(kWhite)
    frameM4l.Draw()
    #CP->DrawLatex(0.15,0.88,Form(" CMS Preliminary                     #sqrt{s} = %.0f TeV",sqrts));
    #CP->DrawLatex(0.145,0.88,Form(" CMS                                        #sqrt{s} = 7 TeV, L = %.2f fb^{-1}",5.02));
    c.Update()
    c.SaveAs("fits/ZXFit_"+opt.channel+".png")
    c.SaveAs("fits/ZXFit_"+opt.channel+".eps")
    c.SaveAs("fits/ZXFit_"+opt.channel+".C")
    
    
    

if __name__ == "__main__":
    fit()


