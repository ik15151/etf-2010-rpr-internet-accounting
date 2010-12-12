#pragma once
#include "Korisnik.h"
#include "KorisnikOsoba.h"
#include "KorisnikFirma.h"
#include "Paket.h"


using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;



namespace DZ3 {

	/// <summary>
	/// Summary for UnosKorisnika
	///
	/// WARNING: If you change the name of this class, you will need to change the
	///          'Resource File Name' property for the managed resource compiler tool
	///          associated with all .resx files this class depends on.  Otherwise,
	///          the designers will not be able to interact properly with localized
	///          resources associated with this form.
	/// </summary>
	public ref class UnosKorisnika : public System::Windows::Forms::Form
	{
	public:
		UnosKorisnika(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

		UnosKorisnika(ArrayList ^k, ArrayList ^p)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			korisnici = k;
			paketi = p;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~UnosKorisnika()
		{
			if (components)
			{
				delete components;
			}
		}

	private:
		ArrayList ^korisnici;
		ArrayList ^paketi;

	protected: 

	private: System::Windows::Forms::Button^  button5;

	private: System::Windows::Forms::Button^  Unesi;
	private: System::Windows::Forms::TabControl^  tabControl2;
	private: System::Windows::Forms::TabPage^  tabPage1;
	private: System::Windows::Forms::TextBox^  c_broj_licne_karte;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::TextBox^  c_prezime;
	private: System::Windows::Forms::TextBox^  c_ime;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TabPage^  tabPage2;
	private: System::Windows::Forms::Label^  label9;

	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  c_naziv_firme;
	private: System::Windows::Forms::StatusStrip^  statusStrip1;


	private: System::Windows::Forms::ErrorProvider^  errorProvider1;

	private: System::Windows::Forms::MaskedTextBox^  c_PDV_broj;
	private: System::Windows::Forms::ComboBox^  cmbBoxPaket;
	private: System::Windows::Forms::Label^  lbPaket;

	private: System::Windows::Forms::GroupBox^  groupBox1;

	private: System::Windows::Forms::ToolStripStatusLabel^  toolStripStatusLabel1;
	private: KontrolaUnos::KontrolaUnosKorisnika^  kontrolaUnosKorisnika1;













	private: System::ComponentModel::IContainer^  components;




	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->Unesi = (gcnew System::Windows::Forms::Button());
			this->tabControl2 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->c_broj_licne_karte = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->c_prezime = (gcnew System::Windows::Forms::TextBox());
			this->c_ime = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->c_PDV_broj = (gcnew System::Windows::Forms::MaskedTextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->c_naziv_firme = (gcnew System::Windows::Forms::TextBox());
			this->statusStrip1 = (gcnew System::Windows::Forms::StatusStrip());
			this->toolStripStatusLabel1 = (gcnew System::Windows::Forms::ToolStripStatusLabel());
			this->errorProvider1 = (gcnew System::Windows::Forms::ErrorProvider(this->components));
			this->cmbBoxPaket = (gcnew System::Windows::Forms::ComboBox());
			this->lbPaket = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->kontrolaUnosKorisnika1 = (gcnew KontrolaUnos::KontrolaUnosKorisnika());
			this->tabControl2->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			this->statusStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->errorProvider1))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// button5
			// 
			this->button5->AutoSize = true;
			this->button5->Location = System::Drawing::Point(226, 440);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(75, 23);
			this->button5->TabIndex = 1;
			this->button5->Text = L"Izlaz";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &UnosKorisnika::button5_Click);
			// 
			// Unesi
			// 
			this->Unesi->AutoSize = true;
			this->Unesi->Location = System::Drawing::Point(145, 440);
			this->Unesi->Name = L"Unesi";
			this->Unesi->Size = System::Drawing::Size(75, 23);
			this->Unesi->TabIndex = 0;
			this->Unesi->Text = L"Unos";
			this->Unesi->UseVisualStyleBackColor = true;
			this->Unesi->Click += gcnew System::EventHandler(this, &UnosKorisnika::Unesi_Click);
			// 
			// tabControl2
			// 
			this->tabControl2->Controls->Add(this->tabPage1);
			this->tabControl2->Controls->Add(this->tabPage2);
			this->tabControl2->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->tabControl2->HotTrack = true;
			this->tabControl2->Location = System::Drawing::Point(12, 12);
			this->tabControl2->Name = L"tabControl2";
			this->tabControl2->SelectedIndex = 0;
			this->tabControl2->Size = System::Drawing::Size(289, 128);
			this->tabControl2->TabIndex = 1;
			// 
			// tabPage1
			// 
			this->tabPage1->BackColor = System::Drawing::SystemColors::Control;
			this->tabPage1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->tabPage1->Controls->Add(this->c_broj_licne_karte);
			this->tabPage1->Controls->Add(this->label8);
			this->tabPage1->Controls->Add(this->c_prezime);
			this->tabPage1->Controls->Add(this->c_ime);
			this->tabPage1->Controls->Add(this->label3);
			this->tabPage1->Controls->Add(this->label2);
			this->tabPage1->Location = System::Drawing::Point(4, 22);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(281, 102);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Osoba";
			// 
			// c_broj_licne_karte
			// 
			this->c_broj_licne_karte->Location = System::Drawing::Point(107, 65);
			this->c_broj_licne_karte->Name = L"c_broj_licne_karte";
			this->c_broj_licne_karte->Size = System::Drawing::Size(152, 20);
			this->c_broj_licne_karte->TabIndex = 3;
			this->c_broj_licne_karte->Validating += gcnew System::ComponentModel::CancelEventHandler(this, &UnosKorisnika::c_broj_licne_karte_Validating);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(11, 72);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(80, 13);
			this->label8->TabIndex = 13;
			this->label8->Text = L"Broj liène karte:";
			// 
			// c_prezime
			// 
			this->c_prezime->Location = System::Drawing::Point(107, 39);
			this->c_prezime->Name = L"c_prezime";
			this->c_prezime->Size = System::Drawing::Size(152, 20);
			this->c_prezime->TabIndex = 2;
			this->c_prezime->Validating += gcnew System::ComponentModel::CancelEventHandler(this, &UnosKorisnika::c_prezime_Validating);
			// 
			// c_ime
			// 
			this->c_ime->Location = System::Drawing::Point(107, 13);
			this->c_ime->Name = L"c_ime";
			this->c_ime->Size = System::Drawing::Size(152, 20);
			this->c_ime->TabIndex = 1;
			this->c_ime->Validating += gcnew System::ComponentModel::CancelEventHandler(this, &UnosKorisnika::c_ime_Validating);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(11, 46);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(47, 13);
			this->label3->TabIndex = 10;
			this->label3->Text = L"Prezime:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(15, 20);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(27, 13);
			this->label2->TabIndex = 0;
			this->label2->Text = L"Ime:";
			// 
			// tabPage2
			// 
			this->tabPage2->BackColor = System::Drawing::SystemColors::Control;
			this->tabPage2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->tabPage2->Controls->Add(this->c_PDV_broj);
			this->tabPage2->Controls->Add(this->label9);
			this->tabPage2->Controls->Add(this->label1);
			this->tabPage2->Controls->Add(this->c_naziv_firme);
			this->tabPage2->Location = System::Drawing::Point(4, 22);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(281, 102);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Firma";
			// 
			// c_PDV_broj
			// 
			this->c_PDV_broj->Location = System::Drawing::Point(107, 60);
			this->c_PDV_broj->Mask = L"000000000000";
			this->c_PDV_broj->Name = L"c_PDV_broj";
			this->c_PDV_broj->Size = System::Drawing::Size(80, 20);
			this->c_PDV_broj->TabIndex = 11;
			this->c_PDV_broj->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->c_PDV_broj->Validating += gcnew System::ComponentModel::CancelEventHandler(this, &UnosKorisnika::c_PDV_broj_Validating);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(17, 60);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(52, 13);
			this->label9->TabIndex = 10;
			this->label9->Text = L"PDV broj:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(15, 34);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(37, 13);
			this->label1->TabIndex = 8;
			this->label1->Text = L"Naziv:";
			// 
			// c_naziv_firme
			// 
			this->c_naziv_firme->Location = System::Drawing::Point(107, 27);
			this->c_naziv_firme->Name = L"c_naziv_firme";
			this->c_naziv_firme->Size = System::Drawing::Size(152, 20);
			this->c_naziv_firme->TabIndex = 0;
			this->c_naziv_firme->Validating += gcnew System::ComponentModel::CancelEventHandler(this, &UnosKorisnika::c_naziv_firme_Validating);
			// 
			// statusStrip1
			// 
			this->statusStrip1->BackColor = System::Drawing::SystemColors::Window;
			this->statusStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) {this->toolStripStatusLabel1});
			this->statusStrip1->Location = System::Drawing::Point(0, 474);
			this->statusStrip1->Name = L"statusStrip1";
			this->statusStrip1->Size = System::Drawing::Size(314, 22);
			this->statusStrip1->TabIndex = 100;
			this->statusStrip1->Text = L"statusStrip1";
			// 
			// toolStripStatusLabel1
			// 
			this->toolStripStatusLabel1->BackColor = System::Drawing::SystemColors::Control;
			this->toolStripStatusLabel1->ForeColor = System::Drawing::Color::Red;
			this->toolStripStatusLabel1->Name = L"toolStripStatusLabel1";
			this->toolStripStatusLabel1->Size = System::Drawing::Size(0, 17);
			// 
			// errorProvider1
			// 
			this->errorProvider1->ContainerControl = this;
			// 
			// cmbBoxPaket
			// 
			this->cmbBoxPaket->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->cmbBoxPaket->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->cmbBoxPaket->FormattingEnabled = true;
			this->cmbBoxPaket->Location = System::Drawing::Point(111, 19);
			this->cmbBoxPaket->Name = L"cmbBoxPaket";
			this->cmbBoxPaket->Size = System::Drawing::Size(152, 21);
			this->cmbBoxPaket->TabIndex = 15;
			this->cmbBoxPaket->Validating += gcnew System::ComponentModel::CancelEventHandler(this, &UnosKorisnika::cmbBoxPaket_Validating);
			// 
			// lbPaket
			// 
			this->lbPaket->AutoSize = true;
			this->lbPaket->Location = System::Drawing::Point(15, 27);
			this->lbPaket->Name = L"lbPaket";
			this->lbPaket->Size = System::Drawing::Size(38, 13);
			this->lbPaket->TabIndex = 14;
			this->lbPaket->Text = L"Paket:";
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->cmbBoxPaket);
			this->groupBox1->Controls->Add(this->lbPaket);
			this->groupBox1->Location = System::Drawing::Point(12, 147);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(289, 52);
			this->groupBox1->TabIndex = 102;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Internet paket";
			// 
			// kontrolaUnosKorisnika1
			// 
			this->kontrolaUnosKorisnika1->BackColor = System::Drawing::SystemColors::Control;
			this->kontrolaUnosKorisnika1->Location = System::Drawing::Point(0, 205);
			this->kontrolaUnosKorisnika1->Name = L"kontrolaUnosKorisnika1";
			this->kontrolaUnosKorisnika1->Size = System::Drawing::Size(314, 229);
			this->kontrolaUnosKorisnika1->TabIndex = 103;
			// 
			// UnosKorisnika
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoValidate = System::Windows::Forms::AutoValidate::EnablePreventFocusChange;
			this->BackColor = System::Drawing::SystemColors::Control;
			this->ClientSize = System::Drawing::Size(314, 496);
			this->Controls->Add(this->kontrolaUnosKorisnika1);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->statusStrip1);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->Unesi);
			this->Controls->Add(this->tabControl2);
			this->MaximizeBox = false;
			this->Name = L"UnosKorisnika";
			this->Text = L"Unos novog korisnika";
			this->Load += gcnew System::EventHandler(this, &UnosKorisnika::UnosKorisnika_Load);
			this->tabControl2->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			this->statusStrip1->ResumeLayout(false);
			this->statusStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->errorProvider1))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

private:
	void PostaviIme ()
	{
		// ne smiju biti brojevi u imenu
		 if (c_ime->Text->Length < 3)
		 {
			 c_ime->Focus ();
			 toolStripStatusLabel1->Text = "Ime ne smije sadržavati manje od 3 slova.";
			 errorProvider1->SetError (c_ime, "Ime ne smije sadržavati manje od 3 slova.");				
		 }
		 else
		 {
			errorProvider1->Clear ();
			toolStripStatusLabel1->Text = "";
		 }
	}

private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
			Close ();
 }

private: System::Void Unesi_Click(System::Object^  sender, System::EventArgs^  e) {

		try
		{
			CancelEventArgs ^cea;

			 if (tabControl2->SelectedIndex == 0)
			 {
				 PostaviIme ();
				 if (!errorProvider1->GetError (c_ime))
					 throw errorProvider1->GetError (c_ime);
			 }
			 if (tabControl2->SelectedIndex == 1)
			 {
				 // naziv, PDV
			 }
				
			// treba i paket
			 String ^naziv_paketa = cmbBoxPaket->SelectedItem->ToString ();


			 kontrolaUnosKorisnika1->setAdresa ();
			 kontrolaUnosKorisnika1->setTelefon ();
			 kontrolaUnosKorisnika1->setUsername ();
			 
			 for each (Korisnik ^k in korisnici)
				if (kontrolaUnosKorisnika1->getUsername () == k->Username ())
					throw "Username veæ zauzet.";
			
			 kontrolaUnosKorisnika1->setPassword ();			 

			 
		     // Ako je sve uredu:

			 if (tabControl2->SelectedIndex == 0)
			 {
				
				KorisnikOsoba ^ko = gcnew KorisnikOsoba (kontrolaUnosKorisnika1->getUsername (), naziv_paketa, kontrolaUnosKorisnika1->getAdresa (), kontrolaUnosKorisnika1->getPassword (), kontrolaUnosKorisnika1->getTelefon (), kontrolaUnosKorisnika1->getModem (), c_ime->Text, c_prezime->Text, c_broj_licne_karte->Text);
				korisnici->Add (ko);

				kontrolaUnosKorisnika1->Resetuj ();
				c_ime->Clear (); 
				c_prezime->Clear (); 
				c_broj_licne_karte->Clear ();
				cmbBoxPaket->SelectedIndex = -1;
			 }
			 if (tabControl2->SelectedIndex == 1)
			 {
				 KorisnikFirma ^kf = gcnew KorisnikFirma (kontrolaUnosKorisnika1->getUsername (), naziv_paketa, kontrolaUnosKorisnika1->getAdresa (), kontrolaUnosKorisnika1->getPassword (), kontrolaUnosKorisnika1->getTelefon (), kontrolaUnosKorisnika1->getModem (), c_naziv_firme->Text, c_PDV_broj->Text);
				korisnici->Add (kf);

				kontrolaUnosKorisnika1->Resetuj ();
				c_naziv_firme->Clear (); 
				c_PDV_broj->Clear (); 
				cmbBoxPaket->SelectedIndex = -1;
			 }
		}
		catch (Exception ^e) // ovdje bih mogla My exception da uhvatim dio o username
		 {
			 toolStripStatusLabel1->Text = e->ToString ();
			 MessageBox::Show ("Greška pri unosu. Podaci o korisniku nisu spašeni.", "Greška", MessageBoxButtons::OKCancel, MessageBoxIcon::Error);
		 } 

}

private: System::Void c_ime_Validating(System::Object^  sender, System::ComponentModel::CancelEventArgs^  e) {
		 
			PostaviIme ();

}
private: System::Void c_prezime_Validating(System::Object^  sender, System::ComponentModel::CancelEventArgs^  e) {
			// ne smiju biti brojevi u prezimenu
			 if (c_prezime->Text->Length < 3)
			 {
				 c_prezime->Focus ();
				 toolStripStatusLabel1->Text = "Prezime ne smije sadržavati manje od 3 slova.";
				 errorProvider1->SetError (c_prezime, "Prezime ne smije sadržavati manje od 3 slova.");				
			 }			
			else
			 {
				errorProvider1->Clear ();
				toolStripStatusLabel1->Text = "";
			 }		
			

 }
private: System::Void c_broj_licne_karte_Validating(System::Object^  sender, System::ComponentModel::CancelEventArgs^  e) {
			 if (c_broj_licne_karte->Text->Length < 9)
			 {
				 c_broj_licne_karte->Focus ();
				 toolStripStatusLabel1->Text = "Broj liène karte ne smije sadržavati manje od 9 znakova.";
				 errorProvider1->SetError (c_broj_licne_karte, "Broj liène karte ne smije sadržavati manje od 9 znakova.");	
			 }
			else if (c_broj_licne_karte->Text->Length > 9)
			 {
				 c_broj_licne_karte->Focus ();
				 toolStripStatusLabel1->Text = "Broj liène karte ne smije sadržavati više od 9 znakova.";
				 errorProvider1->SetError (c_broj_licne_karte, "Broj liène karte ne smije sadržavati više od 9 znakova.");	
			 }
			else if (c_broj_licne_karte->Text->Length == 9)
			 {
				 wchar_t prvo = c_broj_licne_karte->Text [0];
				 wchar_t drugo = c_broj_licne_karte->Text [1];
				 wchar_t sesto = c_broj_licne_karte->Text [5];
				 wchar_t sedmo = c_broj_licne_karte->Text [6];
				 wchar_t osmo = c_broj_licne_karte->Text [7];
				 wchar_t deveto = c_broj_licne_karte->Text [8];		
				
				 if ((prvo < '0' || drugo < '0' || sesto < '0' || sedmo < '0' || osmo < '0' || deveto < '0')  || (prvo > '9' || drugo > '9' || sesto > '9' || sedmo > '9' || osmo > '9' || deveto > '9') )
				 {
					c_broj_licne_karte->Focus ();
					toolStripStatusLabel1->Text = "Format broja liène karte: 2 slova + 3 slova + 4 broja.";
					errorProvider1->SetError (c_broj_licne_karte, "Format broja liène karte: 2 slova + 3 slova + 4 broja.");
				 }
				  // Mora se ispitati da li su 3., 4., i 5. slova!
				 else 
				 {
					errorProvider1->Clear ();
					toolStripStatusLabel1->Text = "";
				 }
			 }
			
			 			 

		 }
private: System::Void c_naziv_firme_Validating(System::Object^  sender, System::ComponentModel::CancelEventArgs^  e) {
 
			 //ovdje se mora ispitati da ne bude brojeva u nazivu
			 if (c_naziv_firme->Text->Length < 3)
			 {
				toolStripStatusLabel1->Text = "Naziv firme ne može imati manje od tri slova.";
				errorProvider1->SetError (c_naziv_firme, "Naziv firme ne može imati manje od tri slova.");
				c_naziv_firme->Focus ();
			 }
			 else 
			 {
				errorProvider1->Clear ();
				toolStripStatusLabel1->Text = "";
			 }
}
private: System::Void c_PDV_broj_Validating(System::Object^  sender, System::ComponentModel::CancelEventArgs^  e) {
			 if (c_PDV_broj->Text->Length < 12)
			 {
				c_PDV_broj->Focus ();
				toolStripStatusLabel1->Text = "PDV broj mora imati 12 cifara.";
				errorProvider1->SetError (c_PDV_broj, "PDV broj mora imati 12 cifara.");
			 }
			 else 
			 {
				errorProvider1->Clear ();
				toolStripStatusLabel1->Text = "";
			 }
		 }

private: System::Void cmbBoxPaket_Validating(System::Object^  sender, System::ComponentModel::CancelEventArgs^  e) {
			 if (cmbBoxPaket->SelectedIndex == -1)
			 {
				 cmbBoxPaket->Focus ();
				 toolStripStatusLabel1->Text = "Morate odabrati vrstu paketa.";
				 errorProvider1->SetError (cmbBoxPaket, "Morate odabrati vrstu paketa.");				 
			 }
			 else
			 {
				errorProvider1->Clear ();
				toolStripStatusLabel1->Text = "";
			 }
}

private: System::Void UnosKorisnika_Load(System::Object^  sender, System::EventArgs^  e) {
			 for each (Paket ^p in paketi)
				cmbBoxPaket->Items->Add (p->Naziv_paketa ());
		 }


private: System::Void kontrolaUnosKorisnika1_MouseMove_2(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
			
			 toolStripStatusLabel1->Text = kontrolaUnosKorisnika1->getGreskaAdresa ();
			/*
			
			if (kontrolaUnosKorisnika1->getGreskaAdresa ()->Empty)
			{
				toolStripStatusLabel1->Text = kontrolaUnosKorisnika1->getGreskaTelefon ();			
				return;
			}
			else if (kontrolaUnosKorisnika1->getGreskaTelefon ()->Empty)
			{
				toolStripStatusLabel1->Text = kontrolaUnosKorisnika1->getGreskaUsername ();
				return;
			}
			else if (kontrolaUnosKorisnika1->getGreskaUsername ()->Empty)
			{
				toolStripStatusLabel1->Text = kontrolaUnosKorisnika1->getGreskaPassword ();
				return;
			}
			 toolStripStatusLabel1->Text = kontrolaUnosKorisnika1->getGreskaUsername ();
			 */

		 }


};
}
