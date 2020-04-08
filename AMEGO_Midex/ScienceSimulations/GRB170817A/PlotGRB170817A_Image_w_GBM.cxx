void PlotGRB170817A_Image_w_GBM();

void PlotGRB170817A_Image_w_GBM(){

	TFile * f = new TFile("GRB170817A.inc9.id1.image.root");
	TCanvas * C = (TCanvas*)f->Get("Image___iteration__10___12");
	TH2D * image = (TH2D*)C->GetPrimitive("Image___iteration__10___12ImageSpheric12");
	

	TCanvas * c_new = new TCanvas("c_new", "c_new", 100, 100, 500, 500);
	c_new->SetBottomMargin(0.15);
	c_new->SetLeftMargin(0.15);
	image->SetTitle("");
	image->GetXaxis()->SetTitle("Phi (deg)");
	image->GetXaxis()->CenterTitle();
	image->GetXaxis()->SetTitleOffset(1.4);
	image->GetXaxis()->SetTitleSize(0.05);
	image->GetXaxis()->SetLabelSize(0.04);
	cout<<image->GetXaxis()->GetLabelFont()<<endl;
	image->GetYaxis()->SetTitle("Theta (deg)");
	image->GetYaxis()->CenterTitle();
	image->GetYaxis()->SetTitleOffset(1.4);
	image->GetYaxis()->SetTitleSize(0.05);
//	image->GetYaxis()->SetLabelSize(0.04);
	TGaxis *A1 = new TGaxis(-10,80,-10,100,-10,10, 507,"+=");
	A1->SetName("A1");
	A1->SetLabelFont(42);
	image->Draw("COL");
	A1->Draw();
	

	TEllipse * gbm = new TEllipse(10.3, 84, 13.4, 9.4, 0, 360, 290);
	gbm->SetLineColor(kAzure+8);
	gbm->SetFillStyle(0);
	gbm->SetLineWidth(5);
	gbm->Draw("SAME");

	TEllipse *LIGOVirgo_90 = new TEllipse(1.85,93.8, 1.35, 10, 0, 360, 153.4);
	LIGOVirgo_90->SetLineColor(kGreen);
	LIGOVirgo_90->SetFillStyle(0);
	LIGOVirgo_90->SetLineWidth(4);
	LIGOVirgo_90->Draw("SAME");

	TEllipse *LIGOVirgo_50 = new TEllipse(1.85, 93.8, 0.76, 5.5, 0, 360, 153.4);
	LIGOVirgo_50->SetLineColor(kGreen);
	LIGOVirgo_50->SetFillStyle(0);
	LIGOVirgo_50->SetLineWidth(4);
	LIGOVirgo_50->Draw("SAME");

};
