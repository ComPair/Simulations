void PlotGRB170817A_Lightcurve_w_GBM();

void PlotGRB170817A_Lightcurve_w_GBM(){

	TFile * f = new TFile("GRB170817A.inc9.id1_w_Background_lightcurve.root");
	TCanvas * C = (TCanvas*)f->Get("TimeOptimized");
	TH1D * lightcurve = (TH1D*)C->GetPrimitive("TimeOptimized");

	lightcurve->Sumw2();

	TCanvas * c_new = new TCanvas("c_new", "c_new", 100, 100, 500, 500);
	c_new->SetBottomMargin(0.15);
	c_new->SetLeftMargin(0.15);
	lightcurve->SetTitle("");
	lightcurve->GetXaxis()->SetTitle("Time (sec)");
	lightcurve->GetXaxis()->SetTitleOffset(1.2);
	lightcurve->GetXaxis()->SetTitleSize(0.05);
	lightcurve->GetXaxis()->SetLabelSize(0.04);
	lightcurve->GetYaxis()->SetTitle("Count Rate (cts/s)");
	lightcurve->GetYaxis()->SetTitleOffset(1.4);
	lightcurve->GetYaxis()->SetLabelSize(0.04);
	lightcurve->GetYaxis()->SetTitleSize(0.05);
	lightcurve->GetYaxis()->SetNdivisions(505);
	lightcurve->SetFillStyle(0);
	lightcurve->SetLineColor(kRed);
	lightcurve->SetLineWidth(2);
	lightcurve->GetYaxis()->SetRangeUser(-1, 10);
	lightcurve->GetXaxis()->SetRangeUser(0, 2.9);

	//Rebin
	double bin_width = lightcurve->GetBinWidth(0);
	cout<<"Bin Width AMEGO "<<bin_width<<endl;	

	lightcurve->Scale(bin_width);
	lightcurve->Rebin(2);
	cout<<"new bin width AMEGO "<<lightcurve->GetBinWidth(0)<<endl;
	lightcurve->Scale(1/lightcurve->GetBinWidth(0));

	lightcurve->Draw("HIST E1 X0");


	TLegend * leg = new TLegend(0.15, 0.8, 0.6, 0.9);
	leg->AddEntry(lightcurve, "AMEGO-X simulated light curve", "le");
	leg->Draw();

};
