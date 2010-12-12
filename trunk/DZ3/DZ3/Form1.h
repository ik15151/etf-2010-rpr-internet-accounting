#pragma once
#include "About.h"
#include "Pretraga.h"
#include "UnosKorisnika.h"
#include "RacunNaplata.h"
#include "RacunPrint.h"

#include "KorisnikOsoba.h"
#include "KorisnikFirma.h"
#include "Paket.h"
#include "Racun.h"
#include "RacunPrint.h"


namespace DZ3 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	///
	/// WARNING: If you change the name of this class, you will need to change the
	///          'Resource File Name' property for the managed resource compiler tool
	///          associated with all .resx files this class depends on.  Otherwise,
	///          the designers will not be able to interact properly with localized
	///          resources associated with this form.
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			korisnici = gcnew ArrayList ();
			racuni = gcnew ArrayList ();
			paketi = gcnew ArrayList ();

			paketi->Add (gcnew Paket ("Economic", "7 GB", "1250/128 kbps", 15));
			paketi->Add (gcnew Paket ("Standard", "18 GB", "2048/256 kbps", 25));
			paketi->Add (gcnew Paket ("Flat", "Neogranièeno", "3072/1024 kbps", 65));
		}

	private:
		ArrayList ^korisnici;
		ArrayList ^paketi;
		ArrayList ^racuni;

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}

	private: 
		void Form1_GotFocus(Object sender, EventArgs e) {

			MessageBox::Show("You are in the Control.GotFocus event.");

		}

	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	protected: 
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::ToolStripMenuItem^  korisnikToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  noviKorisnikToolStripMenuItem;



	private: System::Windows::Forms::ToolStripMenuItem^  pretragaToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  pomoæToolStripMenuItem;

	private: System::Windows::Forms::ToolStripMenuItem^  izlazToolStripMenuItem;

	private: System::Windows::Forms::ToolStripMenuItem^  pomoæToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^  uVeziSaSabilyToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  štampajToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  naplataToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  januarToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  februarToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  martToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  aprilToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  majToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  juniToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  juliToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  augustToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  septembarToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  oktobarToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  novembarToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  decembarToolStripMenuItem;



	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->korisnikToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->noviKorisnikToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->pretragaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->izlazToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->pomoæToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->štampajToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->januarToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->februarToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->martToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->aprilToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->majToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->juniToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->juliToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->augustToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->septembarToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->oktobarToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->novembarToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->decembarToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->naplataToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->pomoæToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->uVeziSaSabilyToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->menuStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {this->korisnikToolStripMenuItem, 
				this->pomoæToolStripMenuItem, this->pomoæToolStripMenuItem1});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(362, 24);
			this->menuStrip1->TabIndex = 1;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// korisnikToolStripMenuItem
			// 
			this->korisnikToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {this->noviKorisnikToolStripMenuItem, 
				this->pretragaToolStripMenuItem, this->izlazToolStripMenuItem});
			this->korisnikToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"korisnikToolStripMenuItem.Image")));
			this->korisnikToolStripMenuItem->Name = L"korisnikToolStripMenuItem";
			this->korisnikToolStripMenuItem->Size = System::Drawing::Size(77, 20);
			this->korisnikToolStripMenuItem->Text = L"Korisnik";
			// 
			// noviKorisnikToolStripMenuItem
			// 
			this->noviKorisnikToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"noviKorisnikToolStripMenuItem.Image")));
			this->noviKorisnikToolStripMenuItem->Name = L"noviKorisnikToolStripMenuItem";
			this->noviKorisnikToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::N));
			this->noviKorisnikToolStripMenuItem->Size = System::Drawing::Size(195, 22);
			this->noviKorisnikToolStripMenuItem->Text = L"Novi korisnik...";
			this->noviKorisnikToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::noviKorisnikToolStripMenuItem_Click);
			// 
			// pretragaToolStripMenuItem
			// 
			this->pretragaToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pretragaToolStripMenuItem.Image")));
			this->pretragaToolStripMenuItem->Name = L"pretragaToolStripMenuItem";
			this->pretragaToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::F));
			this->pretragaToolStripMenuItem->Size = System::Drawing::Size(195, 22);
			this->pretragaToolStripMenuItem->Text = L"Pretraga...";
			this->pretragaToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::pretragaToolStripMenuItem_Click);
			// 
			// izlazToolStripMenuItem
			// 
			this->izlazToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"izlazToolStripMenuItem.Image")));
			this->izlazToolStripMenuItem->Name = L"izlazToolStripMenuItem";
			this->izlazToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::Q));
			this->izlazToolStripMenuItem->Size = System::Drawing::Size(195, 22);
			this->izlazToolStripMenuItem->Text = L"Izlaz";
			this->izlazToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::izlazToolStripMenuItem_Click_1);
			// 
			// pomoæToolStripMenuItem
			// 
			this->pomoæToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {this->štampajToolStripMenuItem, 
				this->naplataToolStripMenuItem});
			this->pomoæToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pomoæToolStripMenuItem.Image")));
			this->pomoæToolStripMenuItem->Name = L"pomoæToolStripMenuItem";
			this->pomoæToolStripMenuItem->Size = System::Drawing::Size(68, 20);
			this->pomoæToolStripMenuItem->Text = L"Raèun";
			// 
			// štampajToolStripMenuItem
			// 
			this->štampajToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(12) {this->januarToolStripMenuItem, 
				this->februarToolStripMenuItem, this->martToolStripMenuItem, this->aprilToolStripMenuItem, this->majToolStripMenuItem, this->juniToolStripMenuItem, 
				this->juliToolStripMenuItem, this->augustToolStripMenuItem, this->septembarToolStripMenuItem, this->oktobarToolStripMenuItem, 
				this->novembarToolStripMenuItem, this->decembarToolStripMenuItem});
			this->štampajToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"štampajToolStripMenuItem.Image")));
			this->štampajToolStripMenuItem->Name = L"štampajToolStripMenuItem";
			this->štampajToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->štampajToolStripMenuItem->Text = L"Izdavanje";
			// 
			// januarToolStripMenuItem
			// 
			this->januarToolStripMenuItem->Name = L"januarToolStripMenuItem";
			this->januarToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->januarToolStripMenuItem->Text = L"Januar";
			this->januarToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::januarToolStripMenuItem_Click);
			// 
			// februarToolStripMenuItem
			// 
			this->februarToolStripMenuItem->Name = L"februarToolStripMenuItem";
			this->februarToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->februarToolStripMenuItem->Text = L"Februar";
			this->februarToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::februarToolStripMenuItem_Click);
			// 
			// martToolStripMenuItem
			// 
			this->martToolStripMenuItem->Name = L"martToolStripMenuItem";
			this->martToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->martToolStripMenuItem->Text = L"Mart";
			this->martToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::martToolStripMenuItem_Click);
			// 
			// aprilToolStripMenuItem
			// 
			this->aprilToolStripMenuItem->Name = L"aprilToolStripMenuItem";
			this->aprilToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->aprilToolStripMenuItem->Text = L"April";
			this->aprilToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::aprilToolStripMenuItem_Click);
			// 
			// majToolStripMenuItem
			// 
			this->majToolStripMenuItem->Name = L"majToolStripMenuItem";
			this->majToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->majToolStripMenuItem->Text = L"Maj";
			this->majToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::majToolStripMenuItem_Click);
			// 
			// juniToolStripMenuItem
			// 
			this->juniToolStripMenuItem->Name = L"juniToolStripMenuItem";
			this->juniToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->juniToolStripMenuItem->Text = L"Juni";
			this->juniToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::juniToolStripMenuItem_Click);
			// 
			// juliToolStripMenuItem
			// 
			this->juliToolStripMenuItem->Name = L"juliToolStripMenuItem";
			this->juliToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->juliToolStripMenuItem->Text = L"Juli";
			this->juliToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::juliToolStripMenuItem_Click);
			// 
			// augustToolStripMenuItem
			// 
			this->augustToolStripMenuItem->Name = L"augustToolStripMenuItem";
			this->augustToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->augustToolStripMenuItem->Text = L"August";
			this->augustToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::augustToolStripMenuItem_Click);
			// 
			// septembarToolStripMenuItem
			// 
			this->septembarToolStripMenuItem->Name = L"septembarToolStripMenuItem";
			this->septembarToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->septembarToolStripMenuItem->Text = L"Septembar";
			this->septembarToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::septembarToolStripMenuItem_Click);
			// 
			// oktobarToolStripMenuItem
			// 
			this->oktobarToolStripMenuItem->Name = L"oktobarToolStripMenuItem";
			this->oktobarToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->oktobarToolStripMenuItem->Text = L"Oktobar";
			this->oktobarToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::oktobarToolStripMenuItem_Click);
			// 
			// novembarToolStripMenuItem
			// 
			this->novembarToolStripMenuItem->Name = L"novembarToolStripMenuItem";
			this->novembarToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->novembarToolStripMenuItem->Text = L"Novembar";
			this->novembarToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::novembarToolStripMenuItem_Click);
			// 
			// decembarToolStripMenuItem
			// 
			this->decembarToolStripMenuItem->Name = L"decembarToolStripMenuItem";
			this->decembarToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->decembarToolStripMenuItem->Text = L"Decembar";
			this->decembarToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::decembarToolStripMenuItem_Click);
			// 
			// naplataToolStripMenuItem
			// 
			this->naplataToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"naplataToolStripMenuItem.Image")));
			this->naplataToolStripMenuItem->Name = L"naplataToolStripMenuItem";
			this->naplataToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->naplataToolStripMenuItem->Text = L"Naplata...";
			this->naplataToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::naplataToolStripMenuItem_Click);
			// 
			// pomoæToolStripMenuItem1
			// 
			this->pomoæToolStripMenuItem1->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) {this->uVeziSaSabilyToolStripMenuItem});
			this->pomoæToolStripMenuItem1->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pomoæToolStripMenuItem1.Image")));
			this->pomoæToolStripMenuItem1->Name = L"pomoæToolStripMenuItem1";
			this->pomoæToolStripMenuItem1->Size = System::Drawing::Size(73, 20);
			this->pomoæToolStripMenuItem1->Text = L"Pomoæ";
			// 
			// uVeziSaSabilyToolStripMenuItem
			// 
			this->uVeziSaSabilyToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"uVeziSaSabilyToolStripMenuItem.Image")));
			this->uVeziSaSabilyToolStripMenuItem->Name = L"uVeziSaSabilyToolStripMenuItem";
			this->uVeziSaSabilyToolStripMenuItem->Size = System::Drawing::Size(153, 22);
			this->uVeziSaSabilyToolStripMenuItem->Text = L"U vezi sa Sabily";
			this->uVeziSaSabilyToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::uVeziSaSabilyToolStripMenuItem_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pictureBox1->Location = System::Drawing::Point(0, 24);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(362, 249);
			this->pictureBox1->TabIndex = 2;
			this->pictureBox1->TabStop = false;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(362, 273);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->MaximizeBox = false;
			this->Name = L"Form1";
			this->Text = L"Sabily";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void izlazToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
private: System::Void uVeziSaSabilyToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 About ^a = gcnew About ();
			 a->ShowDialog ();			 
		 }
private: System::Void izlazToolStripMenuItem_Click_1(System::Object^  sender, System::EventArgs^  e) {
			 Application::Exit ();
		 }


private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
			
		 }


private: System::Void pretragaToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {

			 Pretraga ^p = gcnew Pretraga (korisnici, paketi);
			 p->Show ();
		 }
private: System::Void noviKorisnikToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 UnosKorisnika ^uk = gcnew UnosKorisnika (korisnici, paketi);
			 uk->Show ();
		 }
private: System::Void naplataToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 RacunNaplata ^rn = gcnew RacunNaplata (korisnici, racuni);
			 rn->Show ();
		 }
private:
		void IzdavanjeRacunaZaMjesec (String ^mjesec)
		{
			for each (Korisnik ^k in korisnici)
			{
				if (k->Suspenzija () == false && k->Mirovanje () == false)
				{					
					for each (Paket ^p in paketi)
						if (k->Naziv_paketa () == p->Naziv_paketa ())
						{
							Racun ^r = gcnew Racun (k->Username (), mjesec, false);
							racuni->Add (r);
							RacunPrint ^rp = gcnew RacunPrint (k, r, p);
							rp->ShowDialog ();
						}
				}					
			}

		}

private: System::Void januarToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			IzdavanjeRacunaZaMjesec ("Januar");
		 }
private: System::Void februarToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			IzdavanjeRacunaZaMjesec ("Februar");
		 }
private: System::Void martToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 IzdavanjeRacunaZaMjesec ("Mart");
		 }
private: System::Void aprilToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 IzdavanjeRacunaZaMjesec ("April");
		 }
private: System::Void majToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 IzdavanjeRacunaZaMjesec ("Maj");
		 }
private: System::Void juniToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 IzdavanjeRacunaZaMjesec ("Juni");
		 }
private: System::Void juliToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 IzdavanjeRacunaZaMjesec ("Juli");
		 }
private: System::Void augustToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 IzdavanjeRacunaZaMjesec ("August");
		 }
private: System::Void septembarToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 IzdavanjeRacunaZaMjesec ("Septembar");
		 }
private: System::Void oktobarToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 IzdavanjeRacunaZaMjesec ("Oktobar");
		 }
private: System::Void novembarToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 IzdavanjeRacunaZaMjesec ("Novembar");
		 }
private: System::Void decembarToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 IzdavanjeRacunaZaMjesec ("Decembar");
		 }
};
}

