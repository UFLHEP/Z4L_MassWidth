{
//=========Macro generated from canvas: ccc/
//=========  (Mon Jul 15 20:29:51 2013) by ROOT version5.34/03
   TCanvas *ccc = new TCanvas("ccc", "",0,0,600,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   ccc->Range(83.125,-1.875,95.625,10.625);
   ccc->SetFillColor(0);
   ccc->SetBorderMode(0);
   ccc->SetBorderSize(2);
   ccc->SetLeftMargin(0.15);
   ccc->SetRightMargin(0.05);
   ccc->SetTopMargin(0.05);
   ccc->SetBottomMargin(0.15);
   ccc->SetFrameFillStyle(0);
   ccc->SetFrameBorderMode(0);
   ccc->SetFrameFillStyle(0);
   ccc->SetFrameBorderMode(0);
   
   TH2F *hframe = new TH2F("hframe","",100,85,95,100,0,10);
   hframe->SetLineStyle(0);
   hframe->SetMarkerStyle(20);
   hframe->GetXaxis()->SetTitle(" m_{Z} (GeV)");
   hframe->GetXaxis()->SetNdivisions(505);
   hframe->GetXaxis()->SetLabelFont(42);
   hframe->GetXaxis()->SetLabelOffset(0.007);
   hframe->GetXaxis()->SetLabelSize(0.045);
   hframe->GetXaxis()->SetTitleSize(0.05);
   hframe->GetXaxis()->SetTitleOffset(1.15);
   hframe->GetXaxis()->SetTitleFont(42);
   hframe->GetYaxis()->SetTitle(" -2#Delta ln L");
   hframe->GetYaxis()->SetLabelFont(42);
   hframe->GetYaxis()->SetLabelOffset(0.007);
   hframe->GetYaxis()->SetLabelSize(0.045);
   hframe->GetYaxis()->SetTitleSize(0.05);
   hframe->GetYaxis()->SetTitleOffset(1.4);
   hframe->GetYaxis()->SetTitleFont(42);
   hframe->GetZaxis()->SetLabelFont(42);
   hframe->GetZaxis()->SetLabelOffset(0.007);
   hframe->GetZaxis()->SetLabelSize(0.045);
   hframe->GetZaxis()->SetTitleSize(0.05);
   hframe->GetZaxis()->SetTitleFont(42);
   hframe->Draw("");
   
   TGraph *graph = new TGraph(211);
   graph->SetName("Graph");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);
   graph->SetLineWidth(4);
   graph->SetMarkerStyle(20);
   graph->SetPoint(0,88.01999664,24.17581367);
   graph->SetPoint(1,88.05999756,23.87920761);
   graph->SetPoint(2,88.09999847,23.58337593);
   graph->SetPoint(3,88.13999939,23.28834534);
   graph->SetPoint(4,88.18000031,22.99414253);
   graph->SetPoint(5,88.22000122,22.70079803);
   graph->SetPoint(6,88.26000214,22.40833855);
   graph->SetPoint(7,88.30000305,22.11679268);
   graph->SetPoint(8,88.33999634,21.82618904);
   graph->SetPoint(9,88.37999725,21.53655434);
   graph->SetPoint(10,88.41999817,21.24791718);
   graph->SetPoint(11,88.45999908,20.96030426);
   graph->SetPoint(12,88.5,20.6737442);
   graph->SetPoint(13,88.54000092,20.3882618);
   graph->SetPoint(14,88.58000183,20.10388756);
   graph->SetPoint(15,88.62000275,19.82064438);
   graph->SetPoint(16,88.66000366,19.53856277);
   graph->SetPoint(17,88.69999695,19.25766563);
   graph->SetPoint(18,88.73999786,18.97797966);
   graph->SetPoint(19,88.77999878,18.69953346);
   graph->SetPoint(20,88.81999969,18.42235184);
   graph->SetPoint(21,88.81999969,18.42235184);
   graph->SetPoint(22,88.86000061,18.14645958);
   graph->SetPoint(23,88.90000153,17.87188148);
   graph->SetPoint(24,88.94000244,17.59864616);
   graph->SetPoint(25,88.98000336,17.3267765);
   graph->SetPoint(26,89.01999664,17.05629921);
   graph->SetPoint(27,89.05999756,16.78723907);
   graph->SetPoint(28,89.09999847,16.51961899);
   graph->SetPoint(29,89.13999939,16.25346756);
   graph->SetPoint(30,89.18000031,15.98880577);
   graph->SetPoint(31,89.22000122,15.72565937);
   graph->SetPoint(32,89.26000214,15.46405411);
   graph->SetPoint(33,89.30000305,15.20401192);
   graph->SetPoint(34,89.33999634,14.94555759);
   graph->SetPoint(35,89.37999725,14.68871498);
   graph->SetPoint(36,89.41999817,14.43350792);
   graph->SetPoint(37,89.45999908,14.1799593);
   graph->SetPoint(38,89.5,13.92809296);
   graph->SetPoint(39,89.54000092,13.67793083);
   graph->SetPoint(40,89.58000183,13.42949772);
   graph->SetPoint(41,89.62000275,13.1828146);
   graph->SetPoint(42,89.62000275,13.1828146);
   graph->SetPoint(43,89.66000366,12.93790436);
   graph->SetPoint(44,89.69999695,12.69478893);
   graph->SetPoint(45,89.73999786,12.45349026);
   graph->SetPoint(46,89.77999878,12.21403122);
   graph->SetPoint(47,89.81999969,11.9764328);
   graph->SetPoint(48,89.86000061,11.74071598);
   graph->SetPoint(49,89.90000153,11.50690174);
   graph->SetPoint(50,89.94000244,11.27501011);
   graph->SetPoint(51,89.98000336,11.04506397);
   graph->SetPoint(52,90.01999664,10.81708145);
   graph->SetPoint(53,90.05999756,10.59108353);
   graph->SetPoint(54,90.09999847,10.36709023);
   graph->SetPoint(55,90.13999939,10.14511967);
   graph->SetPoint(56,90.18000031,9.925192833);
   graph->SetPoint(57,90.22000122,9.707327843);
   graph->SetPoint(58,90.26000214,9.49154377);
   graph->SetPoint(59,90.30000305,9.27785778);
   graph->SetPoint(60,90.33999634,9.066288948);
   graph->SetPoint(61,90.37999725,8.856854439);
   graph->SetPoint(62,90.41999817,8.649573326);
   graph->SetPoint(63,90.41999817,8.649573326);
   graph->SetPoint(64,90.45999908,8.444460869);
   graph->SetPoint(65,90.5,8.241534233);
   graph->SetPoint(66,90.54000092,8.040810585);
   graph->SetPoint(67,90.58000183,7.84230566);
   graph->SetPoint(68,90.62000275,7.646035671);
   graph->SetPoint(69,90.66000366,7.452015877);
   graph->SetPoint(70,90.69999695,7.260261536);
   graph->SetPoint(71,90.73999786,7.07078743);
   graph->SetPoint(72,90.77999878,6.883607864);
   graph->SetPoint(73,90.81999969,6.698737621);
   graph->SetPoint(74,90.86000061,6.516190529);
   graph->SetPoint(75,90.90000153,6.335978985);
   graph->SetPoint(76,90.94000244,6.158116817);
   graph->SetPoint(77,90.98000336,5.982616901);
   graph->SetPoint(78,91.01999664,5.809491634);
   graph->SetPoint(79,91.05999756,5.638751984);
   graph->SetPoint(80,91.09999847,5.470410824);
   graph->SetPoint(81,91.13999939,5.304479122);
   graph->SetPoint(82,91.18000031,5.140967369);
   graph->SetPoint(83,91.22000122,4.979886055);
   graph->SetPoint(84,91.22000122,4.979886055);
   graph->SetPoint(85,91.26000214,4.821246147);
   graph->SetPoint(86,91.30000305,4.665056705);
   graph->SetPoint(87,91.33999634,4.511327267);
   graph->SetPoint(88,91.37999725,4.360067368);
   graph->SetPoint(89,91.41999817,4.211285114);
   graph->SetPoint(90,91.45999908,4.064989567);
   graph->SetPoint(91,91.5,3.921188593);
   graph->SetPoint(92,91.54000092,3.77989006);
   graph->SetPoint(93,91.58000183,3.641101122);
   graph->SetPoint(94,91.62000275,3.504829168);
   graph->SetPoint(95,91.66000366,3.371080875);
   graph->SetPoint(96,91.69999695,3.239862919);
   graph->SetPoint(97,91.73999786,3.111181259);
   graph->SetPoint(98,91.77999878,2.985042334);
   graph->SetPoint(99,91.81999969,2.861451626);
   graph->SetPoint(100,91.86000061,2.740414619);
   graph->SetPoint(101,91.90000153,2.62193656);
   graph->SetPoint(102,91.94000244,2.506022453);
   graph->SetPoint(103,91.98000336,2.392677069);
   graph->SetPoint(104,92.01999664,2.281905413);
   graph->SetPoint(105,92.01999664,2.281905413);
   graph->SetPoint(106,92.05999756,2.173711538);
   graph->SetPoint(107,92.09999847,2.068099499);
   graph->SetPoint(108,92.13999939,1.965073943);
   graph->SetPoint(109,92.18000031,1.864638567);
   graph->SetPoint(110,92.22000122,1.766797066);
   graph->SetPoint(111,92.26000214,1.671553373);
   graph->SetPoint(112,92.30000305,1.578910828);
   graph->SetPoint(113,92.33999634,1.488873124);
   graph->SetPoint(114,92.37999725,1.401443481);
   graph->SetPoint(115,92.41999817,1.316625237);
   graph->SetPoint(116,92.45999908,1.234421849);
   graph->SetPoint(117,92.5,1.154836297);
   graph->SetPoint(118,92.54000092,1.077871799);
   graph->SetPoint(119,92.58000183,1.003531575);
   graph->SetPoint(120,92.62000275,0.9318185449);
   graph->SetPoint(121,92.66000366,0.8627359867);
   graph->SetPoint(122,92.69999695,0.796286881);
   graph->SetPoint(123,92.73999786,0.7324743271);
   graph->SetPoint(124,92.77999878,0.6713014841);
   graph->SetPoint(125,92.81999969,0.6127713919);
   graph->SetPoint(126,92.81999969,0.6127713919);
   graph->SetPoint(127,92.86000061,0.556887269);
   graph->SetPoint(128,92.90000153,0.5036522746);
   graph->SetPoint(129,92.94000244,0.4530695975);
   graph->SetPoint(130,92.98000336,0.4051425755);
   graph->SetPoint(131,93.01999664,0.3598744869);
   graph->SetPoint(132,93.05999756,0.3172687292);
   graph->SetPoint(133,93.09999847,0.2773286998);
   graph->SetPoint(134,93.13999939,0.2400579304);
   graph->SetPoint(135,93.18000031,0.2054599077);
   graph->SetPoint(136,93.22000122,0.1735383123);
   graph->SetPoint(137,93.26000214,0.1442967504);
   graph->SetPoint(138,93.30000305,0.1177390069);
   graph->SetPoint(139,93.33999634,0.09386885911);
   graph->SetPoint(140,93.37999725,0.07269018143);
   graph->SetPoint(141,93.41999817,0.05420689285);
   graph->SetPoint(142,93.45999908,0.03842297941);
   graph->SetPoint(143,93.5,0.02534246817);
   graph->SetPoint(144,93.54000092,0.01496945601);
   graph->SetPoint(145,93.58000183,0.007308077533);
   graph->SetPoint(146,93.62000275,0.002362518338);
   graph->SetPoint(147,93.62000275,0.002362518338);
   graph->SetPoint(148,93.66000366,0.0001370045647);
   graph->SetPoint(149,93.6727066,0);
   graph->SetPoint(150,93.6727066,0);
   graph->SetPoint(151,93.6727066,0);
   graph->SetPoint(152,93.6727066,0);
   graph->SetPoint(153,93.6727066,0);
   graph->SetPoint(154,93.6727066,0);
   graph->SetPoint(155,93.6727066,0);
   graph->SetPoint(156,93.90000153,0.04414568096);
   graph->SetPoint(157,93.94000244,0.06108137593);
   graph->SetPoint(158,93.98000336,0.08077188581);
   graph->SetPoint(159,94.01999664,0.1032215655);
   graph->SetPoint(160,94.05999756,0.1284348369);
   graph->SetPoint(161,94.09999847,0.1564160585);
   graph->SetPoint(162,94.13999939,0.1871695817);
   graph->SetPoint(163,94.18000031,0.2206996977);
   graph->SetPoint(164,94.22000122,0.2570107281);
   graph->SetPoint(165,94.26000214,0.2961069047);
   graph->SetPoint(166,94.30000305,0.3379923999);
   graph->SetPoint(167,94.33999634,0.3826714158);
   graph->SetPoint(168,94.37999725,0.4301479757);
   graph->SetPoint(169,94.41999817,0.4804261029);
   graph->SetPoint(170,94.41999817,0.4804261029);
   graph->SetPoint(171,94.45999908,0.5335097313);
   graph->SetPoint(172,94.5,0.589402616);
   graph->SetPoint(173,94.54000092,0.6481084824);
   graph->SetPoint(174,94.58000183,0.7096309662);
   graph->SetPoint(175,94.62000275,0.7739735246);
   graph->SetPoint(176,94.66000366,0.8411393762);
   graph->SetPoint(177,94.69999695,0.9111317396);
   graph->SetPoint(178,94.73999786,0.9839535356);
   graph->SetPoint(179,94.77999878,1.059607625);
   graph->SetPoint(180,94.81999969,1.138096452);
   graph->SetPoint(181,94.86000061,1.21942234);
   graph->SetPoint(182,94.90000153,1.303587556);
   graph->SetPoint(183,94.94000244,1.390593767);
   graph->SetPoint(184,94.98000336,1.480442762);
   graph->SetPoint(185,95.01999664,1.573135614);
   graph->SetPoint(186,95.05999756,1.668673396);
   graph->SetPoint(187,95.09999847,1.767056823);
   graph->SetPoint(188,95.13999939,1.868286133);
   graph->SetPoint(189,95.18000031,1.972361326);
   graph->SetPoint(190,95.22000122,2.079282045);
   graph->SetPoint(191,95.22000122,2.079282045);
   graph->SetPoint(192,95.26000214,2.189047575);
   graph->SetPoint(193,95.30000305,2.301656485);
   graph->SetPoint(194,95.33999634,2.417107344);
   graph->SetPoint(195,95.37999725,2.535398245);
   graph->SetPoint(196,95.41999817,2.656526327);
   graph->SetPoint(197,95.45999908,2.780489206);
   graph->SetPoint(198,95.5,2.907283306);
   graph->SetPoint(199,95.54000092,3.036904335);
   graph->SetPoint(200,95.58000183,3.169348717);
   graph->SetPoint(201,95.62000275,3.304610968);
   graph->SetPoint(202,95.66000366,3.442685843);
   graph->SetPoint(203,95.69999695,3.583567619);
   graph->SetPoint(204,95.73999786,3.727249861);
   graph->SetPoint(205,95.77999878,3.873725414);
   graph->SetPoint(206,95.81999969,4.022986889);
   graph->SetPoint(207,95.86000061,4.175026417);
   graph->SetPoint(208,95.90000153,4.329834938);
   graph->SetPoint(209,95.94000244,4.487403393);
   graph->SetPoint(210,95.98000336,4.647722244);
   
   TH1F *Graph_Graph1 = new TH1F("Graph_Graph1","Graph",211,87.224,96.776);
   Graph_Graph1->SetMinimum(0);
   Graph_Graph1->SetMaximum(26.5934);
   Graph_Graph1->SetDirectory(0);
   Graph_Graph1->SetStats(0);
   Graph_Graph1->SetLineStyle(0);
   Graph_Graph1->SetMarkerStyle(20);
   Graph_Graph1->GetXaxis()->SetLabelFont(42);
   Graph_Graph1->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph1->GetXaxis()->SetLabelSize(0.045);
   Graph_Graph1->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph1->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph1->GetXaxis()->SetTitleFont(42);
   Graph_Graph1->GetYaxis()->SetLabelFont(42);
   Graph_Graph1->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph1->GetYaxis()->SetLabelSize(0.045);
   Graph_Graph1->GetYaxis()->SetTitleSize(0.055);
   Graph_Graph1->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph1->GetYaxis()->SetTitleFont(42);
   Graph_Graph1->GetZaxis()->SetLabelFont(42);
   Graph_Graph1->GetZaxis()->SetLabelOffset(0.01);
   Graph_Graph1->GetZaxis()->SetLabelSize(0.045);
   Graph_Graph1->GetZaxis()->SetTitleSize(0.055);
   Graph_Graph1->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph1);
   
   graph->Draw("lcx");
   
   TPaveText *pt = new TPaveText(0.1577181,0.9662937,0.9580537,0.9947552,"brNDC");
   pt->SetBorderSize(0);
   pt->SetFillStyle(0);
   pt->SetTextAlign(12);
   pt->SetTextFont(42);
   pt->SetTextSize(0.03);
   TText *text = pt->AddText(0.01,0.5,"CMS preliminary");
   text = pt->AddText(0.3,0.6,"#sqrt{s} = 7 TeV, L = 5.1 fb^{-1}  #sqrt{s} = 8 TeV, L = 19.6 fb^{-1}");
   pt->Draw();
   
   pt = new TPaveText(0.12,0.2,0.4,0.4,"brNDC");
   pt->SetBorderSize(0);
   pt->SetFillStyle(0);
   pt->SetTextAlign(12);
   pt->SetTextFont(42);
   pt->SetTextSize(0.04);
   text = pt->AddText(0.2,0.2,"M_{Z} = 93.67 + 1.08 - 1.09");
   pt->Draw();
   ccc->Modified();
   ccc->cd();
   ccc->SetSelected(ccc);
}
