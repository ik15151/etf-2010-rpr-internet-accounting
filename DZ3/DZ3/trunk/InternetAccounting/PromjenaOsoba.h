#pragma once

#include "KorisnikOsoba.h"
#include "Paket.h"

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace InternetAccounting {

	/// <summary>
	/// Summary for PromjenaOsoba
	///
	/// WARNING: If you change the name of this class, you will need to change the
	///          'Resource File Name' property for the managed resource compiler tool
	///          associated with all .resx files this class depends on.  Otherwise,
	///          the designers will not be able to interact properly with localized
	///          resources associated with this form.
	/// </summary>
	public ref class PromjenaOsoba : public System::Windows::Forms::Form
	{
	public:
		PromjenaOsoba(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

		PromjenaOsoba(KorisnikOsoba ^k, ArrayList ^p)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			korisnik = k;	
			paketi = p;

		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~PromjenaOsoba()
		{
			if (components)
			{
				delete components;
			}
		}

	private:
		KorisnikOsoba ^korisnik;
		ArrayList ^paketi;

	private: System::Windows::Forms::StatusStrip^  statusStrip1;
	protected: 
	private: System::Windows::Forms::ToolStripStatusLabel^  toolStripStatusLabel1;
	private: System::Windows::Forms::Label^  lbTelefon;
	private: System::Windows::Forms::Label^  lbAdresa;
	private: System::Windows::Forms::GroupBox^  groupBox4;
	private: System::Windows::Forms::RadioButton^  p_mirovanje;
	private: System::Windows::Forms::RadioButton^  p_aktivan;
	private: System::Windows::Forms::MaskedTextBox^  maskedTxtTelefon;
	private: System::Windows::Forms::TextBox^  txtAdresa;
	private: System::Windows::Forms::Button^  Azuriranje;
	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::ComboBox^  cmbBoxPaket;
	private: System::Windows::Forms::Label^  lbPaket;
	private: System::Windows::Forms::Label^  lbUsername;
	private: System::Windows::Forms::TextBox^  txtUsername;
	private: System::Windows::Forms::Label^  lbPassword;
	private: System::Windows::Forms::TextBox^  txtPassword;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::ErrorProvider^  errorProvider1;
	private: System::Windows::Forms::GroupBox^  groupbox3;
	private: System::Windows::Forms::TextBox^  c_broj_licne_karte;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::TextBox^  c_prezime;
	private: System::Windows::Forms::TextBox^  c_ime;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::GroupBox^  groupBox5;
	private: System::Windows::Forms::CheckBox^  chBoxModem;


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
			this->statusStrip1 = (gcnew System::Windows::Forms::StatusStrip());
			this->toolStripStatusLabel1 = (gcnew System::Windows::Forms::ToolStripStatusLabel());
			this->lbTelefon = (gcnew System::Windows::Forms::Label());
			this->lbAdresa = (gcnew System::Windows::Forms::Label());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->p_mirovanje = (gcnew System::Windows::Forms::RadioButton());
			this->p_aktivan = (gcnew System::Windows::Forms::RadioButton());
			this->maskedTxtTelefon = (gcnew System::Windows::Forms::MaskedTextBox());
			this->txtAdresa = (gcnew System::Windows::Forms::TextBox());
			this->Azuriranje = (gcnew System::Windows::Forms::Button());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->cmbBoxPaket = (gcnew System::Windows::Forms::ComboBox());
			this->lbPaket = (gcnew System::Windows::Forms::Label());
			this->lbUsername = (gcnew System::Windows::Forms::Label());
			this->txtUsername = (gcnew System::Windows::Forms::TextBox());
			this->lbPassword = (gcnew System::Windows::Forms::Label());
			this->txtPassword = (gcnew System::Windows::Forms::TextBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->errorProvider1 = (gcnew System::Windows::Forms::ErrorProvider(this->components));
			this->groupbox3 = (gcnew System::Windows::Forms::GroupBox());
			this->c_broj_licne_karte = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->c_prezime = (gcnew System::Windows::Forms::TextBox());
			this->c_ime = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->groupBox5 = (gcnew System::Windows::Forms::GroupBox());
			this->chBoxModem = (gcnew System::Windows::Forms::CheckBox());
			this->statusStrip1->SuspendLayout();
			this->groupBox4->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->errorProvider1))->BeginInit();
			this->groupbox3->SuspendLayout();
			this->groupBox5->SuspendLayout();
			this->SuspendLayout();
			// 
			// statusStrip1
			// 
			this->statusStrip1->BackColor = System::Drawing::SystemColors::Window;
			this->statusStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) {this->toolStripStatusLabel1});
			this->statusStrip1->Location = System::Drawing::Point(0, 473);
			this->statusStrip1->Name = L"statusStrip1";
			this->statusStrip1->Size = System::Drawing::Size(318, 22);
			this->statusStrip1->TabIndex = 126;
			this->statusStrip1->Text = L"statusStrip1";
			// 
			// toolStripStatusLabel1
			// 
			this->toolStripStatusLabel1->ForeColor = System::Drawing::Color::Red;
			this->toolStripStatusLabel1->Name = L"toolStripStatusLabel1";
			this->toolStripStatusLabel1->Size = System::Drawing::Size(0, 17);
			// 
			// lbTelefon
			// 
			this->lbTelefon->AutoSize = true;
			this->lbTelefon->Location = System::Drawing::Point(15, 54);
			this->lbTelefon->Name = L"lbTelefon";
			this->lbTelefon->Size = System::Drawing::Size(46, 13);
			this->lbTelefon->TabIndex = 17;
			this->lbTelefon->Text = L"Telefon:";
			// 
			// lbAdresa
			// 
			this->lbAdresa->AutoSize = true;
			this->lbAdresa->Location = System::Drawing::Point(15, 27);
			this->lbAdresa->Name = L"lbAdresa";
			this->lbAdresa->Size = System::Drawing::Size(43, 13);
			this->lbAdresa->TabIndex = 15;
			this->lbAdresa->Text = L"Adresa:";
			// 
			// groupBox4
			// 
			this->groupBox4->Controls->Add(this->p_mirovanje);
			this->groupBox4->Controls->Add(this->p_aktivan);
			this->groupBox4->Location = System::Drawing::Point(12, 375);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(122, 82);
			this->groupBox4->TabIndex = 125;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"Stanje ra�una";
			// 
			// p_mirovanje
			// 
			this->p_mirovanje->AutoSize = true;
			this->p_mirovanje->Location = System::Drawing::Point(23, 23);
			this->p_mirovanje->Name = L"p_mirovanje";
			this->p_mirovanje->Size = System::Drawing::Size(71, 17);
			this->p_mirovanje->TabIndex = 5;
			this->p_mirovanje->TabStop = true;
			this->p_mirovanje->Text = L"Mirovanje";
			this->p_mirovanje->UseVisualStyleBackColor = true;
			// 
			// p_aktivan
			// 
			this->p_aktivan->AutoSize = true;
			this->p_aktivan->Location = System::Drawing::Point(23, 49);
			this->p_aktivan->Name = L"p_aktivan";
			this->p_aktivan->Size = System::Drawing::Size(61, 17);
			this->p_aktivan->TabIndex = 6;
			this->p_aktivan->TabStop = true;
			this->p_aktivan->Text = L"Aktivan";
			this->p_aktivan->UseVisualStyleBackColor = true;
			// 
			// maskedTxtTelefon
			// 
			this->maskedTxtTelefon->Location = System::Drawing::Point(111, 47);
			this->maskedTxtTelefon->Mask = L"000000000";
			this->maskedTxtTelefon->Name = L"maskedTxtTelefon";
			this->maskedTxtTelefon->Size = System::Drawing::Size(61, 20);
			this->maskedTxtTelefon->TabIndex = 2;
			this->maskedTxtTelefon->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// txtAdresa
			// 
			this->txtAdresa->Location = System::Drawing::Point(111, 20);
			this->txtAdresa->Name = L"txtAdresa";
			this->txtAdresa->Size = System::Drawing::Size(152, 20);
			this->txtAdresa->TabIndex = 0;
			// 
			// Azuriranje
			// 
			this->Azuriranje->AutoSize = true;
			this->Azuriranje->Location = System::Drawing::Point(239, 434);
			this->Azuriranje->Name = L"Azuriranje";
			this->Azuriranje->Size = System::Drawing::Size(63, 23);
			this->Azuriranje->TabIndex = 124;
			this->Azuriranje->Text = L"A�uriranje";
			this->Azuriranje->UseVisualStyleBackColor = true;
			this->Azuriranje->Click += gcnew System::EventHandler(this, &PromjenaOsoba::Azuriranje_Click);
			// 
			// groupBox2
			// 
			this->groupBox2->BackColor = System::Drawing::Color::Transparent;
			this->groupBox2->Controls->Add(this->cmbBoxPaket);
			this->groupBox2->Controls->Add(this->lbPaket);
			this->groupBox2->Controls->Add(this->lbUsername);
			this->groupBox2->Controls->Add(this->txtUsername);
			this->groupBox2->Controls->Add(this->lbPassword);
			this->groupBox2->Controls->Add(this->txtPassword);
			this->groupBox2->Location = System::Drawing::Point(12, 206);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(290, 104);
			this->groupBox2->TabIndex = 123;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Pristupni podaci";
			// 
			// cmbBoxPaket
			// 
			this->cmbBoxPaket->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->cmbBoxPaket->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->cmbBoxPaket->FormattingEnabled = true;
			this->cmbBoxPaket->Location = System::Drawing::Point(110, 71);
			this->cmbBoxPaket->Name = L"cmbBoxPaket";
			this->cmbBoxPaket->Size = System::Drawing::Size(152, 21);
			this->cmbBoxPaket->TabIndex = 22;
			// 
			// lbPaket
			// 
			this->lbPaket->AutoSize = true;
			this->lbPaket->Location = System::Drawing::Point(15, 79);
			this->lbPaket->Name = L"lbPaket";
			this->lbPaket->Size = System::Drawing::Size(38, 13);
			this->lbPaket->TabIndex = 21;
			this->lbPaket->Text = L"Paket:";
			// 
			// lbUsername
			// 
			this->lbUsername->AutoSize = true;
			this->lbUsername->Location = System::Drawing::Point(15, 26);
			this->lbUsername->Name = L"lbUsername";
			this->lbUsername->Size = System::Drawing::Size(58, 13);
			this->lbUsername->TabIndex = 20;
			this->lbUsername->Text = L"Username:";
			// 
			// txtUsername
			// 
			this->txtUsername->Location = System::Drawing::Point(110, 19);
			this->txtUsername->Name = L"txtUsername";
			this->txtUsername->Size = System::Drawing::Size(153, 20);
			this->txtUsername->TabIndex = 4;
			// 
			// lbPassword
			// 
			this->lbPassword->AutoSize = true;
			this->lbPassword->Location = System::Drawing::Point(15, 52);
			this->lbPassword->Name = L"lbPassword";
			this->lbPassword->Size = System::Drawing::Size(56, 13);
			this->lbPassword->TabIndex = 14;
			this->lbPassword->Text = L"Password:";
			// 
			// txtPassword
			// 
			this->txtPassword->Location = System::Drawing::Point(110, 45);
			this->txtPassword->Name = L"txtPassword";
			this->txtPassword->PasswordChar = '*';
			this->txtPassword->Size = System::Drawing::Size(153, 20);
			this->txtPassword->TabIndex = 5;
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::Color::Transparent;
			this->groupBox1->Controls->Add(this->maskedTxtTelefon);
			this->groupBox1->Controls->Add(this->txtAdresa);
			this->groupBox1->Controls->Add(this->lbTelefon);
			this->groupBox1->Controls->Add(this->lbAdresa);
			this->groupBox1->Location = System::Drawing::Point(12, 121);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(290, 79);
			this->groupBox1->TabIndex = 122;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Kontaktni podaci";
			// 
			// errorProvider1
			// 
			this->errorProvider1->ContainerControl = this;
			// 
			// groupbox3
			// 
			this->groupbox3->Controls->Add(this->c_broj_licne_karte);
			this->groupbox3->Controls->Add(this->label8);
			this->groupbox3->Controls->Add(this->c_prezime);
			this->groupbox3->Controls->Add(this->c_ime);
			this->groupbox3->Controls->Add(this->label3);
			this->groupbox3->Controls->Add(this->label2);
			this->groupbox3->Location = System::Drawing::Point(14, 12);
			this->groupbox3->Name = L"groupbox3";
			this->groupbox3->Size = System::Drawing::Size(288, 105);
			this->groupbox3->TabIndex = 127;
			this->groupbox3->TabStop = false;
			this->groupbox3->Text = L"Osnovni podaci";
			// 
			// c_broj_licne_karte
			// 
			this->c_broj_licne_karte->Location = System::Drawing::Point(111, 73);
			this->c_broj_licne_karte->Name = L"c_broj_licne_karte";
			this->c_broj_licne_karte->Size = System::Drawing::Size(151, 20);
			this->c_broj_licne_karte->TabIndex = 16;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(18, 80);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(80, 13);
			this->label8->TabIndex = 19;
			this->label8->Text = L"Broj li�ne karte:";
			// 
			// c_prezime
			// 
			this->c_prezime->Location = System::Drawing::Point(111, 47);
			this->c_prezime->Name = L"c_prezime";
			this->c_prezime->Size = System::Drawing::Size(151, 20);
			this->c_prezime->TabIndex = 15;
			// 
			// c_ime
			// 
			this->c_ime->Location = System::Drawing::Point(110, 21);
			this->c_ime->Name = L"c_ime";
			this->c_ime->Size = System::Drawing::Size(151, 20);
			this->c_ime->TabIndex = 14;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(18, 54);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(47, 13);
			this->label3->TabIndex = 18;
			this->label3->Text = L"Prezime:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(18, 28);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(27, 13);
			this->label2->TabIndex = 17;
			this->label2->Text = L"Ime:";
			// 
			// groupBox5
			// 
			this->groupBox5->BackColor = System::Drawing::Color::Transparent;
			this->groupBox5->Controls->Add(this->chBoxModem);
			this->groupBox5->Location = System::Drawing::Point(14, 316);
			this->groupBox5->Name = L"groupBox5";
			this->groupBox5->Size = System::Drawing::Size(290, 46);
			this->groupBox5->TabIndex = 104;
			this->groupBox5->TabStop = false;
			this->groupBox5->Text = L"Najam opreme";
			// 
			// chBoxModem
			// 
			this->chBoxModem->AutoSize = true;
			this->chBoxModem->Location = System::Drawing::Point(111, 19);
			this->chBoxModem->Name = L"chBoxModem";
			this->chBoxModem->Size = System::Drawing::Size(61, 17);
			this->chBoxModem->TabIndex = 6;
			this->chBoxModem->Text = L"Modem";
			this->chBoxModem->UseVisualStyleBackColor = true;
			// 
			// PromjenaOsoba
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(318, 495);
			this->Controls->Add(this->groupBox5);
			this->Controls->Add(this->groupbox3);
			this->Controls->Add(this->statusStrip1);
			this->Controls->Add(this->groupBox4);
			this->Controls->Add(this->Azuriranje);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Name = L"PromjenaOsoba";
			this->Text = L"PromjenaOsoba";
			this->Load += gcnew System::EventHandler(this, &PromjenaOsoba::PromjenaOsoba_Load);
			this->statusStrip1->ResumeLayout(false);
			this->statusStrip1->PerformLayout();
			this->groupBox4->ResumeLayout(false);
			this->groupBox4->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->errorProvider1))->EndInit();
			this->groupbox3->ResumeLayout(false);
			this->groupbox3->PerformLayout();
			this->groupBox5->ResumeLayout(false);
			this->groupBox5->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		public:
			void setModemDisabled ()
			{
				chBoxModem->Checked = false;
				chBoxModem->Enabled = false;
			}

	private: System::Void PromjenaOsoba_Load(System::Object^  sender, System::EventArgs^  e) {
				 for each (Paket ^p in paketi)
					 cmbBoxPaket->Items->Add (p->Naziv_paketa ());

				 c_ime->Text = korisnik->Ime ();
				 c_prezime->Text = korisnik->Prezime ();
				 c_broj_licne_karte->Text = korisnik->Broj_licne_karte ();				 				 
				 cmbBoxPaket->SelectedItem = korisnik->Naziv_paketa ();

				 txtAdresa->Text = korisnik->Adresa ();
				 maskedTxtTelefon->Text = korisnik->Telefon ();
				 txtUsername->Text = korisnik->Username ();
				 txtPassword->Text = korisnik->Password ();
				 
				 chBoxModem->Checked = korisnik->Modem();

				 if (korisnik->Suspenzija () == true)
				 {
					 p_mirovanje->Checked = false;
					 p_aktivan->Checked = false;
					 p_mirovanje->Enabled = false;
					 p_aktivan->Enabled = false;
					 korisnik->Modem(false);
					 setModemDisabled();
				 }
				 else if (korisnik->Mirovanje () == true)
					 p_mirovanje->Checked = true;
				 else
					 p_aktivan->Checked = true;
			 }
private: System::Void Azuriranje_Click(System::Object^  sender, System::EventArgs^  e) {

			 try
			 {
				 if (p_mirovanje->Checked == true && chBoxModem->Checked == true)
				 {
					 errorProvider1->SetError (p_mirovanje, "Ako se ra�un stavlja na mirovanje, mora se vratiti modem.");
					 errorProvider1->SetError(chBoxModem, "Ako je modem kod korisnika, ra�un se ne smije staviti na mirovanje.");
					 throw gcnew Exception ("Ne mo�e se zamrznuti ra�un prije vra�anja modema.");
				 }

				 korisnik->Ime (c_ime->Text);
				 korisnik->Prezime (c_prezime->Text);
				 korisnik->Broj_licne_karte (c_broj_licne_karte->Text);
				 korisnik->Naziv_paketa (cmbBoxPaket->SelectedItem->ToString ());

				 korisnik->Adresa (txtAdresa->Text);
				 korisnik->Telefon (maskedTxtTelefon->Text);
				 korisnik->Username (txtUsername->Text);
				 korisnik->Password (txtPassword->Text);
				 korisnik->Naziv_paketa (cmbBoxPaket->SelectedItem->ToString ());

				 korisnik->Modem (chBoxModem->Checked);

				 if (p_mirovanje->Checked)
					 korisnik->Mirovanje (true);
				 else if (p_aktivan->Checked)
					 korisnik->Mirovanje (false);

				 Close ();
			 }
			 catch (...)
			 {
				 // Treba napraviti bolji/e izuzetke
				 toolStripStatusLabel1->Text = "Gre�ka u a�uriranju. Podaci nisu spa�eni.";
			 }
		 }
};
}
