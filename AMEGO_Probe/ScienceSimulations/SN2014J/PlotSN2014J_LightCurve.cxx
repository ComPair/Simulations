void PlotSN2014J_LightCurve();

void PlotSN2014J_LightCurve(){

	TFile * f = new TFile("SpectrumFiles_R5/SN2014J_Core_Day5.inc1.id1.spectrum.root");
	TCanvas * C = (TCanvas*)f->Get("c1");
	TH1D * core5 = (TH1D*)C->GetPrimitive("EnergySpectrum");

	f = new TFile("SpectrumFiles_R5/SN2014J_Core_Day10.inc1.id1.spectrum.root");
	C = (TCanvas*)f->Get("c1");
	TH1D * core10 = (TH1D*)C->GetPrimitive("EnergySpectrum");

	f = new TFile("SpectrumFiles_R5/SN2014J_Core_Day15.inc1.id1.spectrum.root");
	C = (TCanvas*)f->Get("c1");
	TH1D * core15 = (TH1D*)C->GetPrimitive("EnergySpectrum");

	f = new TFile("SpectrumFiles_R5/SN2014J_Core_Day20.inc1.id1.spectrum.root");
	C = (TCanvas*)f->Get("c1");
	TH1D * core20 = (TH1D*)C->GetPrimitive("EnergySpectrum");

	f = new TFile("SpectrumFiles_R5/SN2014J_Core_Day30.inc1.id1.spectrum.root");
	C = (TCanvas*)f->Get("c1");
	TH1D * core30 = (TH1D*)C->GetPrimitive("EnergySpectrum");

	f = new TFile("SpectrumFiles_R5/SN2014J_Core_Day40.inc1.id1.spectrum.root");
	C = (TCanvas*)f->Get("c1");
	TH1D * core40 = (TH1D*)C->GetPrimitive("EnergySpectrum");

	f = new TFile("SpectrumFiles_R5/SN2014J_Core_Day50.inc1.id1.spectrum.root");
	C = (TCanvas*)f->Get("c1");
	TH1D * core50 = (TH1D*)C->GetPrimitive("EnergySpectrum");

	f = new TFile("SpectrumFiles_R5/SN2014J_Core_Day60.inc1.id1.spectrum.root");
	C = (TCanvas*)f->Get("c1");
	TH1D * core60 = (TH1D*)C->GetPrimitive("EnergySpectrum");

	f = new TFile("SpectrumFiles_R5/SN2014J_Core_Day70.inc1.id1.spectrum.root");
	C = (TCanvas*)f->Get("c1");
	TH1D * core70 = (TH1D*)C->GetPrimitive("EnergySpectrum");

	f = new TFile("SpectrumFiles_R5/SN2014J_Core_Day80.inc1.id1.spectrum.root");
	C = (TCanvas*)f->Get("c1");
	TH1D * core80 = (TH1D*)C->GetPrimitive("EnergySpectrum");

	f = new TFile("SpectrumFiles_R5/SN2014J_Core_Day90.inc1.id1.spectrum.root");
	C = (TCanvas*)f->Get("c1");
	TH1D * core90 = (TH1D*)C->GetPrimitive("EnergySpectrum");

	f = new TFile("SpectrumFiles_R5/SN2014J_Core_Day100.inc1.id1.spectrum.root");
	C = (TCanvas*)f->Get("c1");
	TH1D * core100 = (TH1D*)C->GetPrimitive("EnergySpectrum");

	f = new TFile("SpectrumFiles_R5/SN2014J_Core_Day125.inc1.id1.spectrum.root");
	C = (TCanvas*)f->Get("c1");
	TH1D * core125 = (TH1D*)C->GetPrimitive("EnergySpectrum");

	f = new TFile("SpectrumFiles_R5/SN2014J_Core_Day150.inc1.id1.spectrum.root");
	C = (TCanvas*)f->Get("c1");
	TH1D * core150 = (TH1D*)C->GetPrimitive("EnergySpectrum");

	f = new TFile("SpectrumFiles_R5/SN2014J_Core_Day175.inc1.id1.spectrum.root");
	C = (TCanvas*)f->Get("c1");
	TH1D * core175 = (TH1D*)C->GetPrimitive("EnergySpectrum");

	f = new TFile("SpectrumFiles_R5/SN2014J_Core_Day200.inc1.id1.spectrum.root");
	C = (TCanvas*)f->Get("c1");
	TH1D * core200 = (TH1D*)C->GetPrimitive("EnergySpectrum");

	f = new TFile("SpectrumFiles_R5/SN2014J_Core_Day250.inc1.id1.spectrum.root");
	C = (TCanvas*)f->Get("c1");
	TH1D * core250 = (TH1D*)C->GetPrimitive("EnergySpectrum");

	f = new TFile("SpectrumFiles_R5/SN2014J_Core_Day300.inc1.id1.spectrum.root");
	C = (TCanvas*)f->Get("c1");
	TH1D * core300 = (TH1D*)C->GetPrimitive("EnergySpectrum");

	f = new TFile("SpectrumFiles_R5/SN2014J_Core_Day350.inc1.id1.spectrum.root");
	C = (TCanvas*)f->Get("c1");
	TH1D * core350 = (TH1D*)C->GetPrimitive("EnergySpectrum");

	f = new TFile("SpectrumFiles_R5/SN2014J_Core_Day400.inc1.id1.spectrum.root");
	C = (TCanvas*)f->Get("c1");
	TH1D * core400 = (TH1D*)C->GetPrimitive("EnergySpectrum");




	//Edge Model
	f = new TFile("SpectrumFiles_R5/SN2014J_Edge_Day5.inc1.id1.spectrum.root");
	C = (TCanvas*)f->Get("c1");
	TH1D * edge5 = (TH1D*)C->GetPrimitive("EnergySpectrum");

	f = new TFile("SpectrumFiles_R5/SN2014J_Edge_Day10.inc1.id1.spectrum.root");
	C = (TCanvas*)f->Get("c1");
	TH1D * edge10 = (TH1D*)C->GetPrimitive("EnergySpectrum");

	f = new TFile("SpectrumFiles_R5/SN2014J_Edge_Day15.inc1.id1.spectrum.root");
	C = (TCanvas*)f->Get("c1");
	TH1D * edge15 = (TH1D*)C->GetPrimitive("EnergySpectrum");

	f = new TFile("SpectrumFiles_R5/SN2014J_Edge_Day20.inc1.id1.spectrum.root");
	C = (TCanvas*)f->Get("c1");
	TH1D * edge20 = (TH1D*)C->GetPrimitive("EnergySpectrum");

	f = new TFile("SpectrumFiles_R5/SN2014J_Edge_Day30.inc1.id1.spectrum.root");
	C = (TCanvas*)f->Get("c1");
	TH1D * edge30 = (TH1D*)C->GetPrimitive("EnergySpectrum");

	f = new TFile("SpectrumFiles_R5/SN2014J_Edge_Day40.inc1.id1.spectrum.root");
	C = (TCanvas*)f->Get("c1");
	TH1D * edge40 = (TH1D*)C->GetPrimitive("EnergySpectrum");

	f = new TFile("SpectrumFiles_R5/SN2014J_Edge_Day50.inc1.id1.spectrum.root");
	C = (TCanvas*)f->Get("c1");
	TH1D * edge50 = (TH1D*)C->GetPrimitive("EnergySpectrum");

	f = new TFile("SpectrumFiles_R5/SN2014J_Edge_Day60.inc1.id1.spectrum.root");
	C = (TCanvas*)f->Get("c1");
	TH1D * edge60 = (TH1D*)C->GetPrimitive("EnergySpectrum");

	f = new TFile("SpectrumFiles_R5/SN2014J_Edge_Day70.inc1.id1.spectrum.root");
	C = (TCanvas*)f->Get("c1");
	TH1D * edge70 = (TH1D*)C->GetPrimitive("EnergySpectrum");

	f = new TFile("SpectrumFiles_R5/SN2014J_Edge_Day80.inc1.id1.spectrum.root");
	C = (TCanvas*)f->Get("c1");
	TH1D * edge80 = (TH1D*)C->GetPrimitive("EnergySpectrum");

	f = new TFile("SpectrumFiles_R5/SN2014J_Edge_Day90.inc1.id1.spectrum.root");
	C = (TCanvas*)f->Get("c1");
	TH1D * edge90 = (TH1D*)C->GetPrimitive("EnergySpectrum");

	f = new TFile("SpectrumFiles_R5/SN2014J_Edge_Day100.inc1.id1.spectrum.root");
	C = (TCanvas*)f->Get("c1");
	TH1D * edge100 = (TH1D*)C->GetPrimitive("EnergySpectrum");

	f = new TFile("SpectrumFiles_R5/SN2014J_Edge_Day125.inc1.id1.spectrum.root");
	C = (TCanvas*)f->Get("c1");
	TH1D * edge125 = (TH1D*)C->GetPrimitive("EnergySpectrum");

	f = new TFile("SpectrumFiles_R5/SN2014J_Edge_Day150.inc1.id1.spectrum.root");
	C = (TCanvas*)f->Get("c1");
	TH1D * edge150 = (TH1D*)C->GetPrimitive("EnergySpectrum");

	f = new TFile("SpectrumFiles_R5/SN2014J_Edge_Day175.inc1.id1.spectrum.root");
	C = (TCanvas*)f->Get("c1");
	TH1D * edge175 = (TH1D*)C->GetPrimitive("EnergySpectrum");

	f = new TFile("SpectrumFiles_R5/SN2014J_Edge_Day200.inc1.id1.spectrum.root");
	C = (TCanvas*)f->Get("c1");
	TH1D * edge200 = (TH1D*)C->GetPrimitive("EnergySpectrum");

	f = new TFile("SpectrumFiles_R5/SN2014J_Edge_Day250.inc1.id1.spectrum.root");
	C = (TCanvas*)f->Get("c1");
	TH1D * edge250 = (TH1D*)C->GetPrimitive("EnergySpectrum");

	f = new TFile("SpectrumFiles_R5/SN2014J_Edge_Day300.inc1.id1.spectrum.root");
	C = (TCanvas*)f->Get("c1");
	TH1D * edge300 = (TH1D*)C->GetPrimitive("EnergySpectrum");

	f = new TFile("SpectrumFiles_R5/SN2014J_Edge_Day350.inc1.id1.spectrum.root");
	C = (TCanvas*)f->Get("c1");
	TH1D * edge350 = (TH1D*)C->GetPrimitive("EnergySpectrum");

	f = new TFile("SpectrumFiles_R5/SN2014J_Edge_Day400.inc1.id1.spectrum.root");
	C = (TCanvas*)f->Get("c1");
	TH1D * edge400 = (TH1D*)C->GetPrimitive("EnergySpectrum");




	//Background!
	f = new TFile("SpectrumFiles_R5/SN2014J_bkgspectrum_armspdcut.root");
	C = (TCanvas*)f->Get("c1_n6");
	TH1D * bkg = (TH1D*)C->GetPrimitive("EnergySpectrum");
	bkg->Sumw2();




	//Add background to each observation, and then subtract background to get the correct error bars on the line...
	bkg->Scale(24);

/*
	//Concert to 5 days full observations
	bkg->Scale(5);
	core5->Scale(5);
	core10->Scale(5);
	core15->Scale(5);
	core20->Scale(5);
	core30->Scale(5);
	core40->Scale(5);
	core50->Scale(5);
	core60->Scale(5);
	core70->Scale(5);
	core80->Scale(5);
	core90->Scale(5);
	core100->Scale(5);
	core125->Scale(5);
	core150->Scale(5);
	core175->Scale(5);
	core200->Scale(5);
	core250->Scale(5);
	core300->Scale(5);
	core350->Scale(5);
	core400->Scale(5);
	
	edge5->Scale(5);
	edge10->Scale(5);
	edge15->Scale(5);
	edge20->Scale(5);
	edge30->Scale(5);
	edge40->Scale(5);
	edge50->Scale(5);
	edge60->Scale(5);
	edge70->Scale(5);
	edge80->Scale(5);	
	edge90->Scale(5);
	edge100->Scale(5);
	edge125->Scale(5);
	edge150->Scale(5);
	edge175->Scale(5);
	edge200->Scale(5);
	edge250->Scale(5);
	edge300->Scale(5);
	edge350->Scale(5);
	edge400->Scale(5);	
*/

	for (int i = 0; i < bkg->GetNbinsX(); i++) {
		bkg->SetBinError(i, sqrt(bkg->GetBinContent(i)));
		core5->SetBinError(i, sqrt(core5->GetBinContent(i)));
		core10->SetBinError(i, sqrt(core10->GetBinContent(i)));
		core15->SetBinError(i, sqrt(core15->GetBinContent(i)));
		core20->SetBinError(i, sqrt(core20->GetBinContent(i)));
		core30->SetBinError(i, sqrt(core30->GetBinContent(i)));
		core40->SetBinError(i, sqrt(core40->GetBinContent(i)));
		core50->SetBinError(i, sqrt(core50->GetBinContent(i)));
		core60->SetBinError(i, sqrt(core60->GetBinContent(i)));
		core70->SetBinError(i, sqrt(core70->GetBinContent(i)));
		core80->SetBinError(i, sqrt(core80->GetBinContent(i)));
		core90->SetBinError(i, sqrt(core90->GetBinContent(i)));
		core100->SetBinError(i, sqrt(core100->GetBinContent(i)));
		core125->SetBinError(i, sqrt(core125->GetBinContent(i)));
		core150->SetBinError(i, sqrt(core150->GetBinContent(i)));
		core175->SetBinError(i, sqrt(core175->GetBinContent(i)));
		core200->SetBinError(i, sqrt(core200->GetBinContent(i)));
		core250->SetBinError(i, sqrt(core250->GetBinContent(i)));
		core300->SetBinError(i, sqrt(core300->GetBinContent(i)));
		core350->SetBinError(i, sqrt(core350->GetBinContent(i)));
		core400->SetBinError(i, sqrt(core400->GetBinContent(i)));
	
		edge5->SetBinError(i, sqrt(edge5->GetBinContent(i)));
		edge10->SetBinError(i, sqrt(edge10->GetBinContent(i)));
		edge15->SetBinError(i, sqrt(edge15->GetBinContent(i)));
		edge20->SetBinError(i, sqrt(edge20->GetBinContent(i) + pow(bkg->GetBinError(i),2)));
		edge30->SetBinError(i, sqrt(edge30->GetBinContent(i)));
		edge40->SetBinError(i, sqrt(edge40->GetBinContent(i)));
		edge50->SetBinError(i, sqrt(edge50->GetBinContent(i)));
		edge60->SetBinError(i, sqrt(edge60->GetBinContent(i)));
		edge70->SetBinError(i, sqrt(edge70->GetBinContent(i)));
		edge80->SetBinError(i, sqrt(edge80->GetBinContent(i)));
		edge90->SetBinError(i, sqrt(edge90->GetBinContent(i)));
		edge100->SetBinError(i, sqrt(edge100->GetBinContent(i)));
		edge125->SetBinError(i, sqrt(edge125->GetBinContent(i)));
		edge150->SetBinError(i, sqrt(edge150->GetBinContent(i) + pow(bkg->GetBinError(i),2)));
		edge175->SetBinError(i, sqrt(edge175->GetBinContent(i)));
		edge200->SetBinError(i, sqrt(edge200->GetBinContent(i)));
		edge250->SetBinError(i, sqrt(edge250->GetBinContent(i)));
		edge300->SetBinError(i, sqrt(edge300->GetBinContent(i)));
		edge350->SetBinError(i, sqrt(edge350->GetBinContent(i)));
		edge400->SetBinError(i, sqrt(edge400->GetBinContent(i)));
	
	}



//	TF1 * gaussfit = new TF1("gaussfit","gaus",800, 900);
//	gaussfit->SetParameters(50, 847, 20);
//	core50->Fit("gaussfit","R");
	double corelineflux5 = core5->Integral(core5->FindBin(700),core5->FindBin(900));
//	corelineflux5 -= core5->Integral(core5->FindBin(900),core5->FindBin(1100));
	double corelineflux5_err = sqrt(bkg->Integral(bkg->FindBin(700),bkg->FindBin(900)));
	double corelineflux10 = core10->Integral(core10->FindBin(700),core10->FindBin(900));
//	corelineflux10 -= core10->Integral(core10->FindBin(900),core10->FindBin(1100));
	double corelineflux10_err = sqrt(bkg->Integral(bkg->FindBin(700),bkg->FindBin(900)));
	double corelineflux15 = core15->Integral(core15->FindBin(700),core15->FindBin(900));
//	corelineflux15 -= core15->Integral(core15->FindBin(900),core15->FindBin(1100));
	double corelineflux15_err = sqrt(bkg->Integral(bkg->FindBin(700),bkg->FindBin(900)));
	double corelineflux20 = core20->Integral(core20->FindBin(700),core20->FindBin(900));
//	corelineflux20 -= core20->Integral(core20->FindBin(900),core20->FindBin(1100));
	double corelineflux20_err = sqrt(bkg->Integral(bkg->FindBin(700),bkg->FindBin(900)));
	double corelineflux30 = core30->Integral(core30->FindBin(780),core30->FindBin(900));
//	corelineflux30 -= core30->Integral(core30->FindBin(900),core30->FindBin(1020));
	double corelineflux30_err = sqrt(bkg->Integral(bkg->FindBin(780),bkg->FindBin(900)));
	double corelineflux40 = core40->Integral(core40->FindBin(800),core40->FindBin(900));
//	corelineflux40 -= core40->Integral(core40->FindBin(900),core40->FindBin(1000));
	double corelineflux40_err = sqrt(bkg->Integral(bkg->FindBin(800),bkg->FindBin(900)));
	double corelineflux50 = core50->Integral(core50->FindBin(800),core50->FindBin(900));
//	corelineflux50 -= core50->Integral(core50->FindBin(900),core50->FindBin(1000));
	double corelineflux50_err = sqrt(bkg->Integral(bkg->FindBin(800),bkg->FindBin(900)));
	double corelineflux60 = core60->Integral(core60->FindBin(800),core60->FindBin(900));
//	corelineflux60 -= core60->Integral(core60->FindBin(900),core60->FindBin(1000));
	double corelineflux60_err = sqrt(bkg->Integral(bkg->FindBin(800),bkg->FindBin(900)));
	double corelineflux70 = core70->Integral(core70->FindBin(800),core70->FindBin(900));
//	corelineflux70 -= core70->Integral(core70->FindBin(900),core70->FindBin(1000));
	double corelineflux70_err = sqrt(bkg->Integral(bkg->FindBin(800),bkg->FindBin(900)));
	double corelineflux80 = core80->Integral(core80->FindBin(800),core80->FindBin(900));
//	corelineflux80 -= core80->Integral(core80->FindBin(900),core80->FindBin(1000));
	double corelineflux80_err = sqrt(bkg->Integral(bkg->FindBin(800),bkg->FindBin(900)));
	double corelineflux90 = core90->Integral(core90->FindBin(800),core90->FindBin(900));
//	corelineflux90 -= core90->Integral(core90->FindBin(900),core90->FindBin(1000));
	double corelineflux90_err = sqrt(bkg->Integral(bkg->FindBin(800),bkg->FindBin(900)));
	double corelineflux100 = core100->Integral(core100->FindBin(800),core100->FindBin(900));
//	corelineflux100 -= core100->Integral(core100->FindBin(900),core100->FindBin(1000));
	double corelineflux100_err = sqrt(bkg->Integral(bkg->FindBin(800),bkg->FindBin(900)));
	double corelineflux125 = core125->Integral(core125->FindBin(800),core125->FindBin(900));
//	corelineflux125 -= core125->Integral(core125->FindBin(900),core125->FindBin(1000));
	double corelineflux125_err = sqrt(bkg->Integral(bkg->FindBin(800),bkg->FindBin(900)));
	double corelineflux150 = core150->Integral(core150->FindBin(800),core150->FindBin(900));
//	corelineflux150 -= core150->Integral(core150->FindBin(900),core150->FindBin(1000));
	double corelineflux150_err = sqrt(bkg->Integral(bkg->FindBin(800),bkg->FindBin(900)));
	double corelineflux175 = core175->Integral(core175->FindBin(800),core175->FindBin(900));
//	corelineflux175 -= core175->Integral(core175->FindBin(900),core175->FindBin(1000));
	double corelineflux175_err = sqrt(bkg->Integral(bkg->FindBin(800),bkg->FindBin(900)));
	double corelineflux200 = core200->Integral(core200->FindBin(800),core200->FindBin(900));
//	corelineflux200 -= core200->Integral(core200->FindBin(900),core200->FindBin(1000));
	double corelineflux200_err = sqrt(bkg->Integral(bkg->FindBin(800),bkg->FindBin(900)));
	double corelineflux250 = core250->Integral(core250->FindBin(800),core250->FindBin(900));
//	corelineflux250 -= core250->Integral(core250->FindBin(900),core250->FindBin(1000));
	double corelineflux250_err = sqrt(bkg->Integral(bkg->FindBin(800),bkg->FindBin(900)));
	double corelineflux300 = core300->Integral(core300->FindBin(800),core300->FindBin(900));
//	corelineflux300 -= core300->Integral(core300->FindBin(900),core300->FindBin(1000));
	double corelineflux300_err = sqrt(bkg->Integral(bkg->FindBin(800),bkg->FindBin(900)));
	double corelineflux350 = core350->Integral(core350->FindBin(800),core350->FindBin(900));
//	corelineflux350 -= core350->Integral(core350->FindBin(900),core350->FindBin(1000));
	double corelineflux350_err = sqrt(bkg->Integral(bkg->FindBin(800),bkg->FindBin(900)));
	double corelineflux400 = core400->Integral(core400->FindBin(800),core400->FindBin(900));
//	corelineflux400 -= core400->Integral(core400->FindBin(900),core400->FindBin(1000));
	double corelineflux400_err = sqrt(bkg->Integral(bkg->FindBin(800),bkg->FindBin(900)));


	double edgelineflux5 = edge5->Integral(edge5->FindBin(700),edge5->FindBin(900));
//	edgelineflux5 -= edge5->Integral(edge5->FindBin(900),edge5->FindBin(1100));
	double edgelineflux5_err = sqrt(bkg->Integral(bkg->FindBin(700),bkg->FindBin(900)));
	double edgelineflux10 = edge10->Integral(edge10->FindBin(700),edge10->FindBin(900));
//	edgelineflux10 -= edge10->Integral(edge10->FindBin(900),edge10->FindBin(1100));
	double edgelineflux10_err = sqrt(bkg->Integral(bkg->FindBin(700),bkg->FindBin(900)));
	double edgelineflux15 = edge15->Integral(edge15->FindBin(700),edge15->FindBin(900));
//	edgelineflux15 -= edge15->Integral(edge15->FindBin(900),edge15->FindBin(1100));
	double edgelineflux15_err = sqrt(bkg->Integral(bkg->FindBin(700),bkg->FindBin(900)));
	double edgelineflux20 = edge20->Integral(edge20->FindBin(700),edge20->FindBin(900));
//	edgelineflux20 -= edge20->Integral(edge20->FindBin(900),edge20->FindBin(1100));
	double edgelineflux20_err = sqrt(bkg->Integral(bkg->FindBin(700),bkg->FindBin(900)));
	double edgelineflux30 = edge30->Integral(edge30->FindBin(700),edge30->FindBin(900));
//	edgelineflux30 -= edge30->Integral(edge30->FindBin(900),edge30->FindBin(1100));
	double edgelineflux30_err = sqrt(bkg->Integral(bkg->FindBin(700),bkg->FindBin(900)));
	double edgelineflux40 = edge40->Integral(edge40->FindBin(700),edge40->FindBin(900));
//	edgelineflux40 -= edge40->Integral(edge40->FindBin(900),edge40->FindBin(1100));
	double edgelineflux40_err = sqrt(bkg->Integral(bkg->FindBin(700),bkg->FindBin(900)));
	double edgelineflux50 = edge50->Integral(edge50->FindBin(760),edge50->FindBin(900));
//	edgelineflux50 -= edge50->Integral(edge50->FindBin(900),edge50->FindBin(1040));
	double edgelineflux50_err = sqrt(bkg->Integral(bkg->FindBin(760),bkg->FindBin(900)));
	double edgelineflux60 = edge60->Integral(edge60->FindBin(800),edge60->FindBin(900));
//	edgelineflux60 -= edge60->Integral(edge60->FindBin(900),edge60->FindBin(1000));
	double edgelineflux60_err = sqrt(bkg->Integral(bkg->FindBin(800),bkg->FindBin(900)));
	double edgelineflux70 = edge70->Integral(edge70->FindBin(800),edge70->FindBin(900));
//	edgelineflux70 -= edge70->Integral(edge70->FindBin(900),edge70->FindBin(1000));
	double edgelineflux70_err = sqrt(bkg->Integral(bkg->FindBin(800),bkg->FindBin(900)));
	double edgelineflux80 = edge80->Integral(edge80->FindBin(800),edge80->FindBin(900));
//	edgelineflux80 -= edge80->Integral(edge80->FindBin(900),edge80->FindBin(1000));
	double edgelineflux80_err = sqrt(bkg->Integral(bkg->FindBin(800),bkg->FindBin(900)));
	double edgelineflux90 = edge90->Integral(edge90->FindBin(800),edge90->FindBin(900));
//	edgelineflux90 -= edge90->Integral(edge90->FindBin(900),edge90->FindBin(1000));
	double edgelineflux90_err = sqrt(bkg->Integral(bkg->FindBin(800),bkg->FindBin(900)));
	double edgelineflux100 = edge100->Integral(edge100->FindBin(800),edge100->FindBin(900));
//	edgelineflux100 -= edge100->Integral(edge100->FindBin(900),edge100->FindBin(1000));
	double edgelineflux100_err = sqrt(bkg->Integral(bkg->FindBin(800),bkg->FindBin(900)));
	double edgelineflux125 = edge125->Integral(edge125->FindBin(800),edge125->FindBin(900));
//	edgelineflux125 -= edge125->Integral(edge125->FindBin(900),edge125->FindBin(1000));
	double edgelineflux125_err = sqrt(bkg->Integral(bkg->FindBin(800),bkg->FindBin(900)));
	double edgelineflux150 = edge150->Integral(edge150->FindBin(800),edge150->FindBin(900));
//	edgelineflux150 -= edge150->Integral(edge150->FindBin(900),edge150->FindBin(1000));
	double edgelineflux150_err = sqrt(bkg->Integral(bkg->FindBin(800),bkg->FindBin(900)));
	double edgelineflux175 = edge175->Integral(edge175->FindBin(800),edge175->FindBin(900));
//	edgelineflux175 -= edge175->Integral(edge175->FindBin(900),edge175->FindBin(1000));
	double edgelineflux175_err = sqrt(bkg->Integral(bkg->FindBin(800),bkg->FindBin(900)));
	double edgelineflux200 = edge200->Integral(edge200->FindBin(800),edge200->FindBin(900));
//	edgelineflux200 -= edge200->Integral(edge200->FindBin(900),edge200->FindBin(1000));
	double edgelineflux200_err = sqrt(bkg->Integral(bkg->FindBin(800),bkg->FindBin(900)));
	double edgelineflux250 = edge250->Integral(edge250->FindBin(800),edge250->FindBin(900));
//	edgelineflux250 -= edge250->Integral(edge250->FindBin(900),edge250->FindBin(1000));
	double edgelineflux250_err = sqrt(bkg->Integral(bkg->FindBin(800),bkg->FindBin(900)));
	double edgelineflux300 = edge300->Integral(edge300->FindBin(800),edge300->FindBin(900));
//	edgelineflux300 -= edge300->Integral(edge300->FindBin(900),edge300->FindBin(1000));
	double edgelineflux300_err = sqrt(bkg->Integral(bkg->FindBin(800),bkg->FindBin(900)));
	double edgelineflux350 = edge350->Integral(edge350->FindBin(800),edge350->FindBin(900));
//	edgelineflux350 -= edge350->Integral(edge350->FindBin(900),edge350->FindBin(1000));
	double edgelineflux350_err = sqrt(bkg->Integral(bkg->FindBin(800),bkg->FindBin(900)));
	double edgelineflux400 = edge400->Integral(edge400->FindBin(800),edge400->FindBin(900));
//	edgelineflux400 -= edge400->Integral(edge400->FindBin(900),edge400->FindBin(1000));
	double edgelineflux400_err = sqrt(bkg->Integral(bkg->FindBin(800),bkg->FindBin(900)));



	//Multiply by bin width to get number of counts (b/c y  axis is cts/keV)
	corelineflux5 *= core5->GetBinWidth(1);
	corelineflux10 *= core10->GetBinWidth(1);
	corelineflux15 *= core15->GetBinWidth(1);
	corelineflux20 *= core20->GetBinWidth(1);
	corelineflux30 *= core30->GetBinWidth(1);
	corelineflux40 *= core40->GetBinWidth(1);
	corelineflux50 *= core50->GetBinWidth(1);
	corelineflux60 *= core60->GetBinWidth(1);
	corelineflux70 *= core70->GetBinWidth(1);
	corelineflux80 *= core80->GetBinWidth(1);
	corelineflux90 *= core90->GetBinWidth(1);
	corelineflux100 *= core100->GetBinWidth(1);
	corelineflux125 *= core125->GetBinWidth(1);
	corelineflux150 *= core150->GetBinWidth(1);
	corelineflux175 *= core175->GetBinWidth(1);
	corelineflux200 *= core200->GetBinWidth(1);
	corelineflux250 *= core250->GetBinWidth(1);
	corelineflux300 *= core300->GetBinWidth(1);
	corelineflux350 *= core350->GetBinWidth(1);
	corelineflux400 *= core400->GetBinWidth(1);

	edgelineflux5 *= edge5->GetBinWidth(1);
	edgelineflux10 *= edge10->GetBinWidth(1);
	edgelineflux15 *= edge15->GetBinWidth(1);
	edgelineflux20 *= edge20->GetBinWidth(1);
	edgelineflux30 *= edge30->GetBinWidth(1);
	edgelineflux40 *= edge40->GetBinWidth(1);
	edgelineflux50 *= edge50->GetBinWidth(1);
	edgelineflux60 *= edge60->GetBinWidth(1);
	edgelineflux70 *= edge70->GetBinWidth(1);
	edgelineflux80 *= edge80->GetBinWidth(1);
	edgelineflux90 *= edge90->GetBinWidth(1);
	edgelineflux100 *= edge100->GetBinWidth(1);
	edgelineflux125 *= edge125->GetBinWidth(1);
	edgelineflux150 *= edge150->GetBinWidth(1);
	edgelineflux175 *= edge175->GetBinWidth(1);
	edgelineflux200 *= edge200->GetBinWidth(1);
	edgelineflux250 *= edge250->GetBinWidth(1);
	edgelineflux300 *= edge300->GetBinWidth(1);
	edgelineflux350 *= edge350->GetBinWidth(1);
	edgelineflux400 *= edge400->GetBinWidth(1);




	//Convert to cts/s
//	double exposure = 5*24*60*60;
	double exposure  = 24*60*60;
	//effective  area = 282 cm2;
	exposure *= 282;
	//convert to 10^{-4} ph/cm2/s
	exposure /= 10000;
	TGraphErrors * gcore = new TGraphErrors();
	gcore->SetPoint(1,5,corelineflux5/exposure);
	gcore->SetPointError(1,2.5,corelineflux5_err/exposure);
	gcore->SetPoint(2,10,corelineflux10/exposure);
	gcore->SetPointError(2,2.5,corelineflux10_err/exposure);
	gcore->SetPoint(3,15,corelineflux15/exposure);
	gcore->SetPointError(3,2.5,corelineflux15_err/exposure);
	gcore->SetPoint(4,20,corelineflux20/exposure);
	gcore->SetPointError(4,2.5,corelineflux20_err/exposure);
	gcore->SetPoint(5,30,corelineflux30/exposure);
	gcore->SetPointError(5,2.5,corelineflux30_err/exposure);
	gcore->SetPoint(6,40,corelineflux40/exposure);
	gcore->SetPointError(6,2.5,corelineflux40_err/exposure);
	gcore->SetPoint(7,50,corelineflux50/exposure);
	gcore->SetPointError(7,2.5,corelineflux50_err/exposure);
	gcore->SetPoint(8,60,corelineflux60/exposure);
	gcore->SetPointError(8,2.5,corelineflux60_err/exposure);
	gcore->SetPoint(9,70,corelineflux70/exposure);
	gcore->SetPointError(9,2.5,corelineflux70_err/exposure);
	gcore->SetPoint(10,80,corelineflux80/exposure);
	gcore->SetPointError(10,2.5,corelineflux80_err/exposure);
	gcore->SetPoint(11,90,corelineflux90/exposure);
	gcore->SetPointError(11,2.5,corelineflux90_err/exposure);
	gcore->SetPoint(12,100,corelineflux100/exposure);
	gcore->SetPointError(12,2.5,corelineflux100_err/exposure);
	gcore->SetPoint(13,125,corelineflux125/exposure);
	gcore->SetPointError(13,2.5,corelineflux125_err/exposure);
	gcore->SetPoint(14,150,corelineflux150/exposure);
	gcore->SetPointError(14,2.5,corelineflux150_err/exposure);
	gcore->SetPoint(15,175,corelineflux175/exposure);
	gcore->SetPointError(15,2.5,corelineflux175_err/exposure);
	gcore->SetPoint(16,200,corelineflux200/exposure);
	gcore->SetPointError(16,2.5,corelineflux200_err/exposure);
	gcore->SetPoint(17,250,corelineflux250/exposure);
	gcore->SetPointError(17,2.5,corelineflux250_err/exposure);
	gcore->SetPoint(18,300,corelineflux300/exposure);
	gcore->SetPointError(18,2.5,corelineflux300_err/exposure);
	gcore->SetPoint(19,350,corelineflux350/exposure);
	gcore->SetPointError(19,2.5,corelineflux350_err/exposure);
	gcore->SetPoint(20,400,corelineflux400/exposure);
	gcore->SetPointError(20,2.5,corelineflux400_err/exposure);




	TGraphErrors * gedge = new TGraphErrors();
	gedge->SetPoint(1,5,edgelineflux5/exposure);
	gedge->SetPointError(1,2.5,edgelineflux5_err/exposure);
	gedge->SetPoint(2,10,edgelineflux10/exposure);
	gedge->SetPointError(2,2.5,edgelineflux10_err/exposure);
	gedge->SetPoint(3,15,edgelineflux15/exposure);
	gedge->SetPointError(3,2.5,edgelineflux15_err/exposure);
	gedge->SetPoint(4,20,edgelineflux20/exposure);
	gedge->SetPointError(4,2.5,edgelineflux20_err/exposure);
	gedge->SetPoint(5,30,edgelineflux30/exposure);
	gedge->SetPointError(5,2.5,edgelineflux30_err/exposure);
	gedge->SetPoint(6,40,edgelineflux40/exposure);
	gedge->SetPointError(6,2.5,edgelineflux40_err/exposure);
	gedge->SetPoint(7,50,edgelineflux50/exposure);
	gedge->SetPointError(7,2.5,edgelineflux50_err/exposure);
	gedge->SetPoint(8,60,edgelineflux60/exposure);
	gedge->SetPointError(8,2.5,edgelineflux60_err/exposure);
	gedge->SetPoint(9,70,edgelineflux70/exposure);
	gedge->SetPointError(9,2.5,edgelineflux70_err/exposure);
	gedge->SetPoint(10,80,edgelineflux80/exposure);
	gedge->SetPointError(10,2.5,edgelineflux80_err/exposure);
	gedge->SetPoint(11,90,edgelineflux90/exposure);
	gedge->SetPointError(11,2.5,edgelineflux90_err/exposure);
	gedge->SetPoint(12,100,edgelineflux100/exposure);
	gedge->SetPointError(12,2.5,edgelineflux100_err/exposure);
	gedge->SetPoint(13,125,edgelineflux125/exposure);
	gedge->SetPointError(13,2.5,edgelineflux125_err/exposure);
	gedge->SetPoint(14,150,edgelineflux150/exposure);
	gedge->SetPointError(14,2.5,edgelineflux150_err/exposure);
	gedge->SetPoint(15,175,edgelineflux175/exposure);
	gedge->SetPointError(15,2.5,edgelineflux175_err/exposure);
	gedge->SetPoint(16,200,edgelineflux200/exposure);
	gedge->SetPointError(16,2.5,edgelineflux200_err/exposure);
	gedge->SetPoint(17,250,edgelineflux250/exposure);
	gedge->SetPointError(17,2.5,edgelineflux250_err/exposure);
	gedge->SetPoint(18,300,edgelineflux300/exposure);
	gedge->SetPointError(18,2.5,edgelineflux300_err/exposure);
	gedge->SetPoint(19,350,edgelineflux350/exposure);
	gedge->SetPointError(19,2.5,edgelineflux350_err/exposure);
	gedge->SetPoint(20,400,edgelineflux400/exposure);
	gedge->SetPointError(20,2.5,edgelineflux400_err/exposure);



	TCanvas * ccore = new TCanvas("ccore", "ccore", 100, 100, 600, 400);
	ccore->SetBottomMargin(0.15);
	ccore->SetLeftMargin(0.15);

	gcore->SetLineColor(kBlue+1);
	gcore->GetYaxis()->SetRangeUser(0, 6.2);
	gcore->GetXaxis()->SetRangeUser(-10, 300);
	gcore->GetYaxis()->SetTitleSize(0.05);
	gcore->GetXaxis()->SetTitleSize(0.05);
	gcore->GetYaxis()->SetLabelSize(0.04);
	gcore->GetXaxis()->SetLabelSize(0.04);
	gcore->GetYaxis()->SetNdivisions(505);

	gcore->GetYaxis()->SetTitle("^{56}Co 847 keV line flux (10^{-4} ph/cm^{2}/s)");
	gcore->GetXaxis()->SetTitle("Time past explosion (days)");
	gcore->GetXaxis()->SetRangeUser(0,400);
	gcore->Draw("AP");
	

	gedge->SetLineColor(kRed+1);
	gedge->Draw("P SAME");




	//Add SPI Data
	TLine * SPI1x = new TLine(17, 2.35, 42, 2.35);
	SPI1x->SetLineColor(kGreen+2);
	SPI1x->Draw();
	TLine * SPI1y = new TLine(29.5, 1.2, 29.5, 3.5);
	SPI1y->SetLineColor(kGreen+2);
	SPI1y->Draw();

	TLine * SPI2x = new TLine(42, 2.75, 67, 2.75);
	SPI2x->SetLineColor(kGreen+2);
	SPI2x->Draw();
	TLine * SPI2y = new TLine(54.5, 1.6, 54.5, 3.9);
	SPI2y->SetLineColor(kGreen+2);
	SPI2y->Draw();

	TLine * SPI3x = new TLine(67, 3.65, 100, 3.65);
	SPI3x->SetLineColor(kGreen+2);
	SPI3x->Draw();
	TLine * SPI3y = new TLine(83, 2.43, 83, 4.88);
	SPI3y->SetLineColor(kGreen+2);
	SPI3y->Draw();
	
	TLine * SPI4x = new TLine(133, 1.88, 162, 1.88);
	SPI4x->SetLineColor(kGreen+2);
	SPI4x->Draw();
	TLine * SPI4y = new TLine(147.5, 0.72, 147.5, 3.08);
	SPI4y->SetLineColor(kGreen+2);
	SPI4y->Draw();
	

	TLatex *spilabel = new TLatex(100, 4,"#font[42]{SPI}");
	spilabel->SetTextColor(kGreen+2);
	spilabel->SetTextSize(0.05);
//	SPI_Sens->GetListOfFunctions()->Add(spilabel);
	spilabel->Draw();


	TLegend * leg = new TLegend(0.15, 0.77, 0.5, 0.9);
	leg->AddEntry(gcore, "^{56}Ni in core", "PEL");
	leg->AddEntry(gedge, "^{56}Ni on outer edge", "PEL");
	leg->Draw();


/*	TH1D * htot = (TH1D*)hcore->Clone();
	htot->Sumw2();
	htot->Add(hbkg);
	htot->SetLineColor(1);
	
	TH1D* hsub = (TH1D*)htot->Clone();
	hsub->Sumw2();
	hsub->Add(hbkg, -1);
	hsub->Rebin(2);
	hsub->SetLineColor(kRed);
	
	htot->GetYaxis()->SetRangeUser(80, 40000);
	htot->GetXaxis()->SetRangeUser(300, 4000);
	ccore->SetLogy();
	ccore->SetLogx();

	cout<<"Edge Model Integral: "<<hcore->Integral(700,900)<<endl;
	htot->Draw("HIST");
	hsub->Draw("SAME");
	//hcore20->Draw("SAME");
*/
};
