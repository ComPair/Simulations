void PlotSN2014J_Spectra();

void PlotSN2014J_Spectra(){

	TFile * f = new TFile("SpectrumFiles_R5/SN2014J_Core_Day80_1Ms.inc1.id1.spectrum_armspdcut.root");
	TCanvas * C = (TCanvas*)f->Get("c1");
	TH1D * hcore = (TH1D*)C->GetPrimitive("EnergySpectrum");

	TFile * f2 = new TFile("SpectrumFiles_R5/SN2014J_Edge_Day80_1Ms.inc1.id1.spectrum_armspdcut.root");
	TCanvas * C2 = (TCanvas*)f2->Get("c1");
	TH1D * hedge = (TH1D*)C2->GetPrimitive("EnergySpectrum");

	TFile * f3 = new  TFile("SpectrumFiles_R5/SN2014J_Core_Day80_1Ms.inc1.id1.bkgspectrum_armspdcut.root");
	TCanvas * C3 = (TCanvas*)f3->Get("c1_n6");
	TH1D * hbkg = (TH1D*)C3->GetPrimitive("EnergySpectrum");

	TCanvas * ccore = new TCanvas("ccore", "ccore", 100, 100, 300, 300);
	ccore->SetBottomMargin(0.15);
	ccore->SetLeftMargin(0.15);

	hbkg->Scale(277);
	hbkg->SetFillStyle(0);
	hbkg->SetLineColor(1);

	for (int i = 0; i < hbkg->GetNbinsX(); i++) {
		hbkg->SetBinError(i, sqrt(hbkg->GetBinContent(i)));
		hcore->SetBinError(i, sqrt(hcore->GetBinContent(i) + pow(hbkg->GetBinError(i),2)));
		hedge->SetBinError(i, sqrt(hedge->GetBinContent(i) + pow(hbkg->GetBinError(i),2)));
	}


	TH1D * hcore_mod = (TH1D*)hcore->Clone();
	TH1D * hedge_mod = (TH1D*)hedge->Clone();
	TRandom3 * gRandom = new TRandom3();
	//skew the spectrum based on the errors
	for (int i = 0; i < hcore->GetNbinsX(); i++) {
		double skew = gRandom->Gaus(0, hcore->GetBinError(i));
		hcore_mod->SetBinContent(i, hcore->GetBinContent(i)+skew);
		skew = gRandom->Gaus(0, hedge->GetBinError(i));
		hedge_mod->SetBinContent(i, hedge->GetBinContent(i)+skew);
	}
	
	//convert to cts/s
	hcore_mod->Scale(1./1e6);
	hcore_mod->Scale(10000);

	hedge_mod->Scale(1./1e6);
	hedge_mod->Scale(10000);


	//convert to /cm2
//	hcore_mod->Scale(1./282);

	hcore_mod->Scale(hcore_mod->GetBinWidth(1));
	hcore_mod->Rebin(3);
	hcore_mod->Scale(1/hcore_mod->GetBinWidth(1));
		
	hedge_mod->Scale(hedge_mod->GetBinWidth(1));
	hedge_mod->Rebin(3);
	hedge_mod->Scale(1/hedge_mod->GetBinWidth(1));
	


	hcore_mod->SetFillStyle(0);
	hcore_mod->SetLineColor(kBlue+1);
	hcore_mod->GetYaxis()->SetRangeUser(0.01, 18);
	hcore_mod->GetXaxis()->SetRangeUser(200, 1500);
	hcore_mod->SetTitle("");
	hcore_mod->GetYaxis()->SetTitle("Count Rate (10^{-4} cts/s/keV)");
	hcore_mod->GetXaxis()->SetTitle("Energy (keV)");
	hcore_mod->GetXaxis()->SetTitleSize(0.07);
	hcore_mod->GetYaxis()->SetTitleSize(0.07);
	hcore_mod->GetXaxis()->SetLabelSize(0.06);
	hcore_mod->GetYaxis()->SetLabelSize(0.06);
	hcore_mod->GetXaxis()->SetTitleOffset(1.0);
	hcore_mod->GetYaxis()->SetTitleOffset(1.0);
	hcore_mod->GetYaxis()->SetNdivisions(505);
	hcore_mod->GetXaxis()->SetNdivisions(505);
	//ccore->SetLogy();
	//ccore->SetLogx();

	hedge_mod->SetFillStyle(0);
	hedge_mod->SetLineColor(kRed);


	cout<<"Core Model Integral: "<<hcore->Integral(700,900)<<endl;
	hcore_mod->Draw("HIST E0");
//	hedge_mod->Draw("SAME");

	ccore->Update();

};
