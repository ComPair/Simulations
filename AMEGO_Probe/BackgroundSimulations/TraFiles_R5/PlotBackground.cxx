//To plot the background components where each spectrum was saved as a .root file in mimrec.

void PlotBackground();


void PlotBackground(){

	//import the spectra
	TFile *f = new TFile("HadronicBackground.R5.spectrum.root");
	TCanvas * C = (TCanvas*)f->Get("c1");
	TH1D * h_had = (TH1D*)C->GetPrimitive("EnergySpectrum");

	f = new TFile("LeptonicBackground.R5.spectrum.root");
	C = (TCanvas*)f->Get("c1");
	TH1D * h_lep = (TH1D*)C->GetPrimitive("EnergySpectrum");

	f = new TFile("PhotonicBackground.R5.spectrum.root");
	C = (TCanvas*)f->Get("c1");
	TH1D * h_pho = (TH1D*)C->GetPrimitive("EnergySpectrum");

	f = new TFile("TrappedHadronicBackground.R5.spectrum.root");
	C = (TCanvas*)f->Get("c1");
	TH1D * h_thad = (TH1D*)C->GetPrimitive("EnergySpectrum");

	f = new TFile("TrappedLeptonicBackground.R5.spectrum.root");
	C = (TCanvas*)f->Get("c1");
	TH1D * h_tlep = (TH1D*)C->GetPrimitive("EnergySpectrum");

	f = new TFile("HadronicBackgroundDecay.R5.spectrum.root");
	C = (TCanvas*)f->Get("c1");
	TH1D * h_had_decay = (TH1D*)C->GetPrimitive("EnergySpectrum");

	f = new TFile("TrappedHadronicBackgroundDecay.R5.spectrum.root");
	C = (TCanvas*)f->Get("c1");
	TH1D * h_thad_decay = (TH1D*)C->GetPrimitive("EnergySpectrum");


	//Make the canvas
	TCanvas * C_tot = new TCanvas("C_tot","C_tot", 700, 500);
	C_tot->SetLeftMargin(0.15);
	C_tot->SetBottomMargin(0.15);


	//Set the histogram properties for the hadronic component and plot
	h_had->SetFillStyle(0);
	h_had->SetLineColor(kRed);
	h_had->SetLineWidth(2);
	h_had->SetTitle("");
	h_had->GetYaxis()->SetTitle("Flux (#gamma/keV/s)");
	h_had->GetXaxis()->SetRangeUser(100, 1e6);
	h_had->GetYaxis()->SetRangeUser(1e-6, 2.);
	h_had->GetYaxis()->SetLimits(1e-6, 2.);
	h_had->GetYaxis()->SetTitleSize(0.06);
	h_had->GetYaxis()->SetTitleOffset(1.0);
	h_had->GetYaxis()->SetLabelSize(0.05);
	h_had->GetXaxis()->SetTitleSize(0.06);
	h_had->GetXaxis()->SetLabelSize(0.05);
	h_had->GetXaxis()->SetTitleOffset(1.1);
	//Simulations were for 3600 seconds, so divide by time
	h_had->Scale(1./3600);
	//Multiply by 1000 to convert to MeV
	//h_had->Scale(1000.);
	h_had->GetYaxis()->SetRangeUser(2e-6, 10);
	h_had->Draw("hist");


	//Plot the rest of the components
	h_lep->SetFillStyle(0);
	h_lep->SetLineColor(kGreen+1);
	h_lep->SetLineWidth(2);
	//Simulations were for 3600 seconds, so divide by time
	h_lep->Scale(1./3600);
	//Multiply be 1000 to convert to MeV
	//h_lep->Scale(1000.);
	h_lep->Draw("hist same");

	h_pho->SetFillStyle(0);
	h_pho->SetLineColor(kMagenta);
	h_pho->SetLineWidth(2);
	//Simulations were for 3600 seconds, so divide by time
	h_pho->Scale(1./3600);
	//Multiply by 1000 to convert to MeV
	//h_pho->Scale(1000.);
	h_pho->Draw("hist same");

	h_thad->SetFillStyle(0);
	h_thad->SetLineColor(kBlue);
	h_thad->SetLineWidth(2);
	//Simulations were for 3600 seconds, so divide by time
	h_thad->Scale(1./3600);
	//Multiply by 1000 to convert to MeV
	//h_thad->Scale(1000.);
	h_thad->Draw("hist same");

	h_tlep->SetFillStyle(0);
	h_tlep->SetLineColor(kOrange);
	h_tlep->SetLineWidth(2);
	//Simulations were for 3600 seconds, so divide by time
	h_tlep->Scale(1./3600);
	//Multiply by 1000 to convert to MeV
	//h_tlep->Scale(1000.);
	h_tlep->Draw("hist same");

        h_had_decay->SetFillStyle(0);
        h_had_decay->SetLineColor(kRed+1);
	h_had_decay->SetLineStyle(2);
        h_had_decay->SetLineWidth(2);
	//Simualtions were for 3600 seconds, so divide by time
        h_had_decay->Scale(1./3600);
	//Multiply by 1000 to convert to MeV
        //h_pho->Scale(1000.);
        h_had_decay->Draw("hist same");

	h_thad_decay->SetFillStyle(0);
	h_thad_decay->SetLineColor(kBlue+1);
	h_thad_decay->SetLineStyle(2);
	h_thad_decay->SetLineWidth(2);
	//Simulations were for 3600 seconds, so divide by time
	h_thad_decay->Scale(1./3600);
	//Multiply by 1000 to convert to MeV
	//h_thad_decay->Scale(1000.);
	h_thad_decay->Draw("hist same");


	//Sum all components to find total background flux
	TH1D * h_tot = (TH1D*)h_had->Clone("h_tot");
	h_tot->Add(h_lep);
	h_tot->Add(h_pho);
	h_tot->Add(h_thad);
	h_tot->Add(h_tlep);
	h_tot->Add(h_had_decay);
	h_tot->Add(h_thad_decay);
	h_tot->SetLineColor(kBlack);
	h_tot->SetLineWidth(2);
	h_tot->Draw("hist same");


	//Set to log scale
	C_tot->SetLogx();
	C_tot->SetLogy();
	gPad->RedrawAxis();


	//Draw legend
	TLegend * leg = new TLegend(0.6, 0.5, 0.95, 0.95);
	leg->AddEntry(h_had, "Hadrons", "l");
	leg->AddEntry(h_had_decay, "Hadron Activation", "l");
	leg->AddEntry(h_thad, "Trapped Hadrons", "l");
	leg->AddEntry(h_thad_decay, "Trapped Hadron Activation", "l");
	leg->AddEntry(h_lep, "Leptons", "l");
	leg->AddEntry(h_tlep, "Trapped Leptons", "l");
	leg->AddEntry(h_pho, "Photons", "l");
	leg->AddEntry(h_tot, "Total", "l");
	leg->Draw();


};

