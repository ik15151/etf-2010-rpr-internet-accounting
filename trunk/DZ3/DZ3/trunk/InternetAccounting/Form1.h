#include "stdafx.h"
#pragma once

#include "RacunNaplata.h"
#include "RacunPrint.h"
#include "Racun.h"
#include "RacunPrint.h"
#include "About.h"
#include "Paket.h"
#include "Pretraga.h"
#include "UnosKorisnika.h"
#include "KorisnikOsoba.h"
#include "KorisnikFirma.h"
#include "XMLPregled.h"
#include "RacunPlain.h"


namespace InternetAccounting {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
	using namespace System::Runtime::Serialization::Formatters::Binary;
	using namespace System::Xml::Serialization;

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

			korisniciBinarno = "korisnici.txt";
			korisniciXML = "korisnici.xml";
			racuniBinarno = "racuni.txt";
			racuniXML = "racuni.xml";

		}

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
			ArrayList ^korisnici;
			ArrayList ^paketi;
			ArrayList ^racuni;
			String ^korisniciBinarno;
			String ^korisniciXML;
			String ^racuniBinarno;
			String ^racuniXML;

	private: System::Windows::Forms::ToolStripMenuItem^  augustToolStripMenuItem;
	protected: 
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::ToolStripMenuItem^  juliToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  septembarToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  juniToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  oktobarToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  pomoæToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^  uVeziSaSabilyToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  novembarToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  naplataToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  majToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  decembarToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  aprilToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  noviKorisnikToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  martToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  korisnikToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  pretragaToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  izlazToolStripMenuItem;
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  pomoæToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  štampajToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  januarToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  februarToolStripMenuItem;
	private: System::Windows::Forms::OpenFileDialog^  openFileDialog1;
	private: System::Windows::Forms::ToolStripMenuItem^  xMLPregledToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  spasiUDatotekuToolStripMenuItem;
	private: System::Windows::Forms::SaveFileDialog^  saveFileDialog1;

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
			this->augustToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->juliToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->septembarToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->juniToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->oktobarToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->pomoæToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->uVeziSaSabilyToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->novembarToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->naplataToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->majToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->decembarToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->aprilToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->noviKorisnikToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->martToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->korisnikToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->pretragaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->spasiUDatotekuToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->xMLPregledToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->izlazToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->pomoæToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->štampajToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->januarToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->februarToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// augustToolStripMenuItem
			// 
			this->augustToolStripMenuItem->Name = L"augustToolStripMenuItem";
			this->augustToolStripMenuItem->Size = System::Drawing::Size(131, 22);
			this->augustToolStripMenuItem->Text = L"August";
			this->augustToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::augustToolStripMenuItem_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureBox1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pictureBox1->Location = System::Drawing::Point(0, 24);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(290, 219);
			this->pictureBox1->TabIndex = 4;
			this->pictureBox1->TabStop = false;
			// 
			// juliToolStripMenuItem
			// 
			this->juliToolStripMenuItem->Name = L"juliToolStripMenuItem";
			this->juliToolStripMenuItem->Size = System::Drawing::Size(131, 22);
			this->juliToolStripMenuItem->Text = L"Juli";
			this->juliToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::juliToolStripMenuItem_Click);
			// 
			// septembarToolStripMenuItem
			// 
			this->septembarToolStripMenuItem->Name = L"septembarToolStripMenuItem";
			this->septembarToolStripMenuItem->Size = System::Drawing::Size(131, 22);
			this->septembarToolStripMenuItem->Text = L"Septembar";
			this->septembarToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::septembarToolStripMenuItem_Click);
			// 
			// juniToolStripMenuItem
			// 
			this->juniToolStripMenuItem->Name = L"juniToolStripMenuItem";
			this->juniToolStripMenuItem->Size = System::Drawing::Size(131, 22);
			this->juniToolStripMenuItem->Text = L"Juni";
			this->juniToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::juniToolStripMenuItem_Click);
			// 
			// oktobarToolStripMenuItem
			// 
			this->oktobarToolStripMenuItem->Name = L"oktobarToolStripMenuItem";
			this->oktobarToolStripMenuItem->Size = System::Drawing::Size(131, 22);
			this->oktobarToolStripMenuItem->Text = L"Oktobar";
			this->oktobarToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::oktobarToolStripMenuItem_Click);
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
			this->uVeziSaSabilyToolStripMenuItem->Size = System::Drawing::Size(190, 22);
			this->uVeziSaSabilyToolStripMenuItem->Text = L"O Internet accounting";
			this->uVeziSaSabilyToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::uVeziSaSabilyToolStripMenuItem_Click);
			// 
			// novembarToolStripMenuItem
			// 
			this->novembarToolStripMenuItem->Name = L"novembarToolStripMenuItem";
			this->novembarToolStripMenuItem->Size = System::Drawing::Size(131, 22);
			this->novembarToolStripMenuItem->Text = L"Novembar";
			this->novembarToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::novembarToolStripMenuItem_Click);
			// 
			// naplataToolStripMenuItem
			// 
			this->naplataToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"naplataToolStripMenuItem.Image")));
			this->naplataToolStripMenuItem->Name = L"naplataToolStripMenuItem";
			this->naplataToolStripMenuItem->Size = System::Drawing::Size(124, 22);
			this->naplataToolStripMenuItem->Text = L"Naplata...";
			this->naplataToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::naplataToolStripMenuItem_Click);
			// 
			// majToolStripMenuItem
			// 
			this->majToolStripMenuItem->Name = L"majToolStripMenuItem";
			this->majToolStripMenuItem->Size = System::Drawing::Size(131, 22);
			this->majToolStripMenuItem->Text = L"Maj";
			this->majToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::majToolStripMenuItem_Click);
			// 
			// decembarToolStripMenuItem
			// 
			this->decembarToolStripMenuItem->Name = L"decembarToolStripMenuItem";
			this->decembarToolStripMenuItem->Size = System::Drawing::Size(131, 22);
			this->decembarToolStripMenuItem->Text = L"Decembar";
			this->decembarToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::decembarToolStripMenuItem_Click);
			// 
			// aprilToolStripMenuItem
			// 
			this->aprilToolStripMenuItem->Name = L"aprilToolStripMenuItem";
			this->aprilToolStripMenuItem->Size = System::Drawing::Size(131, 22);
			this->aprilToolStripMenuItem->Text = L"April";
			this->aprilToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::aprilToolStripMenuItem_Click);
			// 
			// noviKorisnikToolStripMenuItem
			// 
			this->noviKorisnikToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"noviKorisnikToolStripMenuItem.Image")));
			this->noviKorisnikToolStripMenuItem->Name = L"noviKorisnikToolStripMenuItem";
			this->noviKorisnikToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::N));
			this->noviKorisnikToolStripMenuItem->Size = System::Drawing::Size(201, 22);
			this->noviKorisnikToolStripMenuItem->Text = L"Novi korisnik...";
			this->noviKorisnikToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::noviKorisnikToolStripMenuItem_Click);
			// 
			// martToolStripMenuItem
			// 
			this->martToolStripMenuItem->Name = L"martToolStripMenuItem";
			this->martToolStripMenuItem->Size = System::Drawing::Size(131, 22);
			this->martToolStripMenuItem->Text = L"Mart";
			this->martToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::martToolStripMenuItem_Click);
			// 
			// korisnikToolStripMenuItem
			// 
			this->korisnikToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {this->noviKorisnikToolStripMenuItem, 
				this->pretragaToolStripMenuItem, this->spasiUDatotekuToolStripMenuItem, this->xMLPregledToolStripMenuItem, this->izlazToolStripMenuItem});
			this->korisnikToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"korisnikToolStripMenuItem.Image")));
			this->korisnikToolStripMenuItem->Name = L"korisnikToolStripMenuItem";
			this->korisnikToolStripMenuItem->Size = System::Drawing::Size(77, 20);
			this->korisnikToolStripMenuItem->Text = L"Korisnik";
			// 
			// pretragaToolStripMenuItem
			// 
			this->pretragaToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pretragaToolStripMenuItem.Image")));
			this->pretragaToolStripMenuItem->Name = L"pretragaToolStripMenuItem";
			this->pretragaToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::F));
			this->pretragaToolStripMenuItem->Size = System::Drawing::Size(201, 22);
			this->pretragaToolStripMenuItem->Text = L"Pretraga...";
			this->pretragaToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::pretragaToolStripMenuItem_Click);
			// 
			// spasiUDatotekuToolStripMenuItem
			// 
			this->spasiUDatotekuToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"spasiUDatotekuToolStripMenuItem.Image")));
			this->spasiUDatotekuToolStripMenuItem->Name = L"spasiUDatotekuToolStripMenuItem";
			this->spasiUDatotekuToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::S));
			this->spasiUDatotekuToolStripMenuItem->Size = System::Drawing::Size(210, 22);
			this->spasiUDatotekuToolStripMenuItem->Text = L"Spasi u datoteku...";
			this->spasiUDatotekuToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::spasiUDatotekuToolStripMenuItem_Click);
			// 
			// xMLPregledToolStripMenuItem
			// 
			this->xMLPregledToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"xMLPregledToolStripMenuItem.Image")));
			this->xMLPregledToolStripMenuItem->Name = L"xMLPregledToolStripMenuItem";
			this->xMLPregledToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::X));
			this->xMLPregledToolStripMenuItem->Size = System::Drawing::Size(210, 22);
			this->xMLPregledToolStripMenuItem->Text = L"XML pregled";
			this->xMLPregledToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::xMLPregledToolStripMenuItem_Click);
			// 
			// izlazToolStripMenuItem
			// 
			this->izlazToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"izlazToolStripMenuItem.Image")));
			this->izlazToolStripMenuItem->Name = L"izlazToolStripMenuItem";
			this->izlazToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::Q));
			this->izlazToolStripMenuItem->Size = System::Drawing::Size(201, 22);
			this->izlazToolStripMenuItem->Text = L"Izlaz";
			this->izlazToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::izlazToolStripMenuItem_Click);
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {this->korisnikToolStripMenuItem, 
				this->pomoæToolStripMenuItem, this->pomoæToolStripMenuItem1});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(290, 24);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
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
			this->štampajToolStripMenuItem->Size = System::Drawing::Size(124, 22);
			this->štampajToolStripMenuItem->Text = L"Izdavanje";
			// 
			// januarToolStripMenuItem
			// 
			this->januarToolStripMenuItem->Name = L"januarToolStripMenuItem";
			this->januarToolStripMenuItem->Size = System::Drawing::Size(131, 22);
			this->januarToolStripMenuItem->Text = L"Januar";
			this->januarToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::januarToolStripMenuItem_Click);
			// 
			// februarToolStripMenuItem
			// 
			this->februarToolStripMenuItem->Name = L"februarToolStripMenuItem";
			this->februarToolStripMenuItem->Size = System::Drawing::Size(131, 22);
			this->februarToolStripMenuItem->Text = L"Februar";
			this->februarToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::februarToolStripMenuItem_Click);
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(290, 243);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->menuStrip1);
			this->MaximizeBox = false;
			this->Name = L"Form1";
			this->Text = L"Internet accounting";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &Form1::Form1_FormClosing);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void noviKorisnikToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {

				 UnosKorisnika ^uk = gcnew UnosKorisnika (korisnici, paketi);
				 uk->Show ();
			 }
private: System::Void uVeziSaSabilyToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 About ^a = gcnew About ();
			 a->ShowDialog ();
		 }
private: System::Void izlazToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 Close ();
		 }
private: System::Void pretragaToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 Pretraga ^p = gcnew Pretraga (korisnici, paketi);
			 p->Show ();
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
private: System::Void naplataToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {

			 RacunNaplata ^rn = gcnew RacunNaplata (korisnici, racuni);
			 rn->Show ();
		 }
 

private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
			 
			 try
			 {
				 
				 if (File::Exists (korisniciBinarno))
				 {
					
					 FileStream ^fstrm = gcnew FileStream (korisniciBinarno, FileMode::Open);
					 BinaryFormatter ^bf = gcnew BinaryFormatter ();			 

					 korisnici = dynamic_cast <ArrayList ^> (bf->Deserialize (fstrm));
							 
					 fstrm->Close ();
				 }

			 }
			 catch (Exception ^i)
			 {
				 
				 MessageBox::Show ("Nisu ucitani podaci iz datoteke o korisnicima.");

			 }

			 

			 try
			 {
				 //System::Windows::Forms::DialogResult d = openFileDialog1->ShowDialog ();
				 //if (d == System::Windows::Forms::DialogResult::OK) 
				//	 datoteka = openFileDialog1->FileName; 
				
				 if (File::Exists (racuniBinarno))
				 {
					 ArrayList ^racuniplain = gcnew ArrayList();
									
					 FileStream ^fstrm = gcnew FileStream (racuniBinarno, FileMode::Open);
					 BinaryFormatter ^bf = gcnew BinaryFormatter ();			 

					 racuniplain = dynamic_cast <ArrayList ^> (bf->Deserialize (fstrm));
							 
					 fstrm->Close ();
					 for each (RacunPlain ^r in racuniplain) 
					 {
						 racuni->Add (gcnew Racun (r->_izdat, r->_username, r->_mjesec, r->_placeno));
						 //((Racun ^) racuni [racuni->Count - 1])->Id_racuna (r->_id_racuna);

					 }

				 }

			 }
			 catch (Exception ^i)
			 {
				 // ovo bih mogla i zanemariti
				 MessageBox::Show ("Nisu ucitani podaci iz datoteke o racunima. " + i->Message);

			 }
			 
		
		 }



private: System::Void Form1_FormClosing(System::Object^  sender, System::Windows::Forms::FormClosingEventArgs^  e) {
			 try
			 {
				 FileStream ^fs = gcnew FileStream (korisniciBinarno, FileMode::Create);
				 BinaryFormatter ^bf = gcnew BinaryFormatter ();

				 bf->Serialize (fs, korisnici);
				 fs->Close ();
			 }
			 catch (...)
			 {
				 MessageBox::Show ("Greska pri upisivanju podataka o korisnicima u datoteku.");
			 }

			 
			 try
			 {
				 ArrayList ^racuniplain = gcnew ArrayList();
				 for each (Racun ^r in racuni) 
					 racuniplain->Add (gcnew RacunPlain (r->getVrijeme (), r->Username (), r->Mjesec (), r->Placeno ()));
				 // Treba se odraditi i da (de)serijalizira i id_racuna, a ne dozvoljava preko konstruktora staticke atribute

				 FileStream ^fs = gcnew FileStream (racuniBinarno, FileMode::Create);
				 BinaryFormatter ^bf = gcnew BinaryFormatter ();

				 bf->Serialize (fs, racuniplain);
				 fs->Close ();
			 }
			 catch (...)
			 {
				 MessageBox::Show ("Greska pri upisivanju podataka o racunima u datoteku.");
			 }
			 
			 

			 try
			 {
				 
				 // Moramo naznaciti sve nestandarde tipove koji su koristeni prilikom serijalizacije
				 // U nasem slucaju ArrayLista sadrzi klasu KorisnikOsoba, KorisnikFirma	
				 array <Type ^> ^dodatniTipovi = gcnew array <Type^> (2);
				 dodatniTipovi [0] = KorisnikOsoba::typeid;
				 dodatniTipovi [1] = KorisnikFirma::typeid;
				 

				 // Serijaliziramo ArrayListu knjiga u XML datoteku
				 XmlSerializer ^x = gcnew XmlSerializer (ArrayList::typeid, dodatniTipovi);
				 Stream ^writer = gcnew FileStream(korisniciXML, FileMode::Create);
				 x->Serialize(writer, korisnici);

				 writer->Close();
				 
			 }
			 catch (Exception ^i)
			 {
				 MessageBox::Show ("Greska pri XML serijalizaciji korisnika." + i->Message);
			 }

			 /*

			 try
			 {
				 
				 // Moramo naznaciti sve nestandarde tipove koji su koristeni prilikom serijalizacije
				 // U nasem slucaju ArrayLista sadrzi klasu KorisnikOsoba, KorisnikFirma	
				 array <Type ^> ^dodatniTipovi = gcnew array <Type^> (1);
				 dodatniTipovi [0] = Racun::typeid;
				 			 

				 // Serijaliziramo ArrayListu knjiga u XML datoteku
				 XmlSerializer ^x = gcnew XmlSerializer (ArrayList::typeid, dodatniTipovi);
				 Stream ^writer = gcnew FileStream(racuniXML, FileMode::Create);
				 x->Serialize(writer, racuni);

				 writer->Close();
				 
			 }
			 catch (Exception ^i)
			 {
				 MessageBox::Show ("Greska pri XML serijalizaciji racuna." + i->Message);
			 }

			 */

			  
			 /*
			 try
			 {
		
				 ArrayList ^racuniplain = gcnew ArrayList();

				 // Kopiramo sve racune iz racuni u jednostavnu klasu RacunPlain pogodnu za serijalizaciju
				 for each (Racun ^r in racuni) 
					 racuniplain->Add (gcnew RacunPlain (r->getVrijeme (), r->Username (), r->Mjesec (), r->Placeno (), r->Id_racuna ()));

			
				 // Moramo naznaciti sve ne standarde tipove koji su koristeni prilikom serijalizacije
				 // U nasem slucaju ArrayLista sadrzi klasu PlainKnjiga
				 array<Type^>^dodatniTipovi = gcnew array<Type^>(1);
				 dodatniTipovi[0] = RacunPlain::typeid;

				 // Serijaliziramo ArrayListu knjiga u XML datoteku
				 XmlSerializer ^x = gcnew XmlSerializer(ArrayList::typeid, dodatniTipovi);
				 Stream ^writer = gcnew FileStream(racuniXML, FileMode::Create);
				 x->Serialize(writer, racuniplain);

				 writer->Close();			 
			 }
			 catch (Exception ^e)
			 {
				 MessageBox::Show ("Greska pri serijalizaciji racuna. " + e->Message);
			 }
			 */
	 
			 

		 }
private: System::Void xMLPregledToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 try
			 {
				 
				 // Moramo naznaciti sve nestandarde tipove koji su koristeni prilikom serijalizacije
				 // U nasem slucaju ArrayLista sadrzi klasu KorisnikOsoba, KorisnikFirma	
				 array <Type ^> ^dodatniTipovi = gcnew array <Type^> (2);
				 dodatniTipovi [0] = KorisnikOsoba::typeid;
				 dodatniTipovi [1] = KorisnikFirma::typeid;
				 

				 // Serijaliziramo ArrayListu knjiga u XML datoteku
				 XmlSerializer ^x = gcnew XmlSerializer (ArrayList::typeid, dodatniTipovi);
				 Stream ^writer = gcnew FileStream(korisniciXML, FileMode::Create);
				 x->Serialize(writer, korisnici);

				 writer->Close();
				 
			 }
			 catch (Exception ^i)
			 {
				 MessageBox::Show ("Greska pri XML serijalizaciji korisnika." + i->Message);
			 }

			 XMLPregled ^xp = gcnew XMLPregled ();
			 xp->ShowDialog ();
		 }
private: System::Void spasiUDatotekuToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			  try
			 {
				 String ^naziv_datoteke;
				 System::Windows::Forms::DialogResult d = saveFileDialog1->ShowDialog ();
				 if (d == System::Windows::Forms::DialogResult::OK) 
					 naziv_datoteke = saveFileDialog1->FileName;
			
				 FileStream ^fs = gcnew FileStream (naziv_datoteke, FileMode::Create);
				 BinaryFormatter ^bf = gcnew BinaryFormatter ();

				 bf->Serialize (fs, korisnici);
				 fs->Close ();
			 }
			 catch (...)
			 {
				 MessageBox::Show ("Greska pri upisivanju podataka o korisnicima u datoteku.");
			 }

			 try
			 {
				 ArrayList ^racuniplain = gcnew ArrayList();
				 for each (Racun ^r in racuni) 
					 racuniplain->Add (gcnew RacunPlain (r->getVrijeme (), r->Username (), r->Mjesec (), r->Placeno ()));
				 // Treba se odraditi i da (de)serijalizira i id_racuna, a ne dozvoljava preko konstruktora staticke atribute

				 FileStream ^fs = gcnew FileStream ("racuni2.txt", FileMode::Create);
				 BinaryFormatter ^bf = gcnew BinaryFormatter ();

				 bf->Serialize (fs, racuniplain);
				 fs->Close ();
			 }
			 catch (...)
			 {
				 MessageBox::Show ("Greska pri upisivanju podataka o racunima u datoteku.");
			 }

		 }
};
}

