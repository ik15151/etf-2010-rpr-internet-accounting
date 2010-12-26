#pragma once

#include "Korisnik.h"
#include "KorisnikOsoba.h"
#include "KorisnikFirma.h"
#include "Paket.h"
#include "IzuzetakOsoba.h"
#include "IzuzetakFirma.h"

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace InternetAccounting {

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

	protected: 

	private:
		ArrayList ^korisnici;
		ArrayList ^paketi;


	private: System::Windows::Forms::TabControl^  tabControl2;
	private: System::Windows::Forms::TabPage^  tabPage1;
	private: System::Windows::Forms::TextBox^  c_broj_licne_karte;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::TextBox^  c_prezime;
	private: System::Windows::Forms::TextBox^  c_ime;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TabPage^  tabPage2;
	private: System::Windows::Forms::MaskedTextBox^  c_PDV_broj;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  c_naziv_firme;

	private: System::Windows::Forms::StatusStrip^  statusStrip1;
	private: System::Windows::Forms::ToolStripStatusLabel^  toolStripStatusLabel1;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  Unesi;
	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::ComboBox^  cmbBoxPaket;
	private: System::Windows::Forms::Label^  lbPaket;
	private: System::Windows::Forms::Label^  lbUsername;
	private: System::Windows::Forms::TextBox^  txtUsername;
	private: System::Windows::Forms::Label^  lbPassword;
	private: System::Windows::Forms::TextBox^  txtPassword;
	private: System::Windows::Forms::GroupBox^  groupBox3;
	private: System::Windows::Forms::MaskedTextBox^  maskedTxtTelefon;
	private: System::Windows::Forms::TextBox^  txtAdresa;
	private: System::Windows::Forms::Label^  lbTelefon;
	private: System::Windows::Forms::Label^  lbAdresa;
	private: System::Windows::Forms::ErrorProvider^  errorProvider1;
	private: System::Windows::Forms::GroupBox^  groupBox1;
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
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->Unesi = (gcnew System::Windows::Forms::Button());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->cmbBoxPaket = (gcnew System::Windows::Forms::ComboBox());
			this->lbPaket = (gcnew System::Windows::Forms::Label());
			this->lbUsername = (gcnew System::Windows::Forms::Label());
			this->txtUsername = (gcnew System::Windows::Forms::TextBox());
			this->lbPassword = (gcnew System::Windows::Forms::Label());
			this->txtPassword = (gcnew System::Windows::Forms::TextBox());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->maskedTxtTelefon = (gcnew System::Windows::Forms::MaskedTextBox());
			this->txtAdresa = (gcnew System::Windows::Forms::TextBox());
			this->lbTelefon = (gcnew System::Windows::Forms::Label());
			this->lbAdresa = (gcnew System::Windows::Forms::Label());
			this->errorProvider1 = (gcnew System::Windows::Forms::ErrorProvider(this->components));
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->chBoxModem = (gcnew System::Windows::Forms::CheckBox());
			this->tabControl2->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			this->statusStrip1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->errorProvider1))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
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
			this->tabControl2->TabIndex = 0;
			this->tabControl2->SelectedIndexChanged += gcnew System::EventHandler(this, &UnosKorisnika::tabControl2_SelectedIndexChanged);
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
			this->c_broj_licne_karte->TabIndex = 2;
			this->c_broj_licne_karte->Validating += gcnew System::ComponentModel::CancelEventHandler(this, &UnosKorisnika::c_broj_licne_karte_Validating);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(11, 72);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(80, 13);
			this->label8->TabIndex = 5;
			this->label8->Text = L"Broj liène karte:";
			// 
			// c_prezime
			// 
			this->c_prezime->Location = System::Drawing::Point(107, 39);
			this->c_prezime->Name = L"c_prezime";
			this->c_prezime->Size = System::Drawing::Size(152, 20);
			this->c_prezime->TabIndex = 1;
			this->c_prezime->Validating += gcnew System::ComponentModel::CancelEventHandler(this, &UnosKorisnika::c_prezime_Validating);
			// 
			// c_ime
			// 
			this->c_ime->Location = System::Drawing::Point(107, 13);
			this->c_ime->Name = L"c_ime";
			this->c_ime->Size = System::Drawing::Size(152, 20);
			this->c_ime->TabIndex = 0;
			this->c_ime->Validating += gcnew System::ComponentModel::CancelEventHandler(this, &UnosKorisnika::c_ime_Validating);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(11, 46);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(47, 13);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Prezime:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(11, 20);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(27, 13);
			this->label2->TabIndex = 3;
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
			this->c_PDV_broj->TabIndex = 1;
			this->c_PDV_broj->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->c_PDV_broj->Validating += gcnew System::ComponentModel::CancelEventHandler(this, &UnosKorisnika::c_PDV_broj_Validating);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(17, 60);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(52, 13);
			this->label9->TabIndex = 3;
			this->label9->Text = L"PDV broj:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(15, 34);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(37, 13);
			this->label1->TabIndex = 2;
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
			this->statusStrip1->Location = System::Drawing::Point(0, 441);
			this->statusStrip1->Name = L"statusStrip1";
			this->statusStrip1->Size = System::Drawing::Size(312, 22);
			this->statusStrip1->TabIndex = 6;
			this->statusStrip1->Text = L"statusStrip1";
			// 
			// toolStripStatusLabel1
			// 
			this->toolStripStatusLabel1->BackColor = System::Drawing::SystemColors::Control;
			this->toolStripStatusLabel1->ForeColor = System::Drawing::Color::Red;
			this->toolStripStatusLabel1->Name = L"toolStripStatusLabel1";
			this->toolStripStatusLabel1->Size = System::Drawing::Size(0, 17);
			// 
			// button5
			// 
			this->button5->AutoSize = true;
			this->button5->Location = System::Drawing::Point(226, 403);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(75, 23);
			this->button5->TabIndex = 5;
			this->button5->Text = L"Izlaz";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &UnosKorisnika::button5_Click);
			// 
			// Unesi
			// 
			this->Unesi->AutoSize = true;
			this->Unesi->Location = System::Drawing::Point(145, 403);
			this->Unesi->Name = L"Unesi";
			this->Unesi->Size = System::Drawing::Size(75, 23);
			this->Unesi->TabIndex = 4;
			this->Unesi->Text = L"Unos";
			this->Unesi->UseVisualStyleBackColor = true;
			this->Unesi->Click += gcnew System::EventHandler(this, &UnosKorisnika::Unesi_Click);
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
			this->groupBox2->Location = System::Drawing::Point(12, 231);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(290, 104);
			this->groupBox2->TabIndex = 2;
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
			this->cmbBoxPaket->TabIndex = 2;
			this->cmbBoxPaket->Validating += gcnew System::ComponentModel::CancelEventHandler(this, &UnosKorisnika::cmbBoxPaket_Validating);
			// 
			// lbPaket
			// 
			this->lbPaket->AutoSize = true;
			this->lbPaket->Location = System::Drawing::Point(15, 79);
			this->lbPaket->Name = L"lbPaket";
			this->lbPaket->Size = System::Drawing::Size(38, 13);
			this->lbPaket->TabIndex = 5;
			this->lbPaket->Text = L"Paket:";
			// 
			// lbUsername
			// 
			this->lbUsername->AutoSize = true;
			this->lbUsername->Location = System::Drawing::Point(15, 26);
			this->lbUsername->Name = L"lbUsername";
			this->lbUsername->Size = System::Drawing::Size(58, 13);
			this->lbUsername->TabIndex = 3;
			this->lbUsername->Text = L"Username:";
			// 
			// txtUsername
			// 
			this->txtUsername->Location = System::Drawing::Point(110, 19);
			this->txtUsername->Name = L"txtUsername";
			this->txtUsername->Size = System::Drawing::Size(153, 20);
			this->txtUsername->TabIndex = 0;
			this->txtUsername->Validating += gcnew System::ComponentModel::CancelEventHandler(this, &UnosKorisnika::txtUsername_Validating);
			// 
			// lbPassword
			// 
			this->lbPassword->AutoSize = true;
			this->lbPassword->Location = System::Drawing::Point(15, 52);
			this->lbPassword->Name = L"lbPassword";
			this->lbPassword->Size = System::Drawing::Size(56, 13);
			this->lbPassword->TabIndex = 4;
			this->lbPassword->Text = L"Password:";
			// 
			// txtPassword
			// 
			this->txtPassword->Location = System::Drawing::Point(110, 45);
			this->txtPassword->Name = L"txtPassword";
			this->txtPassword->PasswordChar = '*';
			this->txtPassword->Size = System::Drawing::Size(153, 20);
			this->txtPassword->TabIndex = 1;
			this->txtPassword->Validating += gcnew System::ComponentModel::CancelEventHandler(this, &UnosKorisnika::txtPassword_Validating);
			// 
			// groupBox3
			// 
			this->groupBox3->BackColor = System::Drawing::Color::Transparent;
			this->groupBox3->Controls->Add(this->maskedTxtTelefon);
			this->groupBox3->Controls->Add(this->txtAdresa);
			this->groupBox3->Controls->Add(this->lbTelefon);
			this->groupBox3->Controls->Add(this->lbAdresa);
			this->groupBox3->Location = System::Drawing::Point(12, 146);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(290, 79);
			this->groupBox3->TabIndex = 1;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Kontaktni podaci";
			// 
			// maskedTxtTelefon
			// 
			this->maskedTxtTelefon->Location = System::Drawing::Point(111, 47);
			this->maskedTxtTelefon->Mask = L"000000000";
			this->maskedTxtTelefon->Name = L"maskedTxtTelefon";
			this->maskedTxtTelefon->Size = System::Drawing::Size(61, 20);
			this->maskedTxtTelefon->TabIndex = 1;
			this->maskedTxtTelefon->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->maskedTxtTelefon->Validating += gcnew System::ComponentModel::CancelEventHandler(this, &UnosKorisnika::maskedTxtTelefon_Validating);
			// 
			// txtAdresa
			// 
			this->txtAdresa->Location = System::Drawing::Point(111, 20);
			this->txtAdresa->Name = L"txtAdresa";
			this->txtAdresa->Size = System::Drawing::Size(152, 20);
			this->txtAdresa->TabIndex = 0;
			this->txtAdresa->Validating += gcnew System::ComponentModel::CancelEventHandler(this, &UnosKorisnika::txtAdresa_Validating);
			// 
			// lbTelefon
			// 
			this->lbTelefon->AutoSize = true;
			this->lbTelefon->Location = System::Drawing::Point(15, 54);
			this->lbTelefon->Name = L"lbTelefon";
			this->lbTelefon->Size = System::Drawing::Size(46, 13);
			this->lbTelefon->TabIndex = 3;
			this->lbTelefon->Text = L"Telefon:";
			// 
			// lbAdresa
			// 
			this->lbAdresa->AutoSize = true;
			this->lbAdresa->Location = System::Drawing::Point(15, 27);
			this->lbAdresa->Name = L"lbAdresa";
			this->lbAdresa->Size = System::Drawing::Size(43, 13);
			this->lbAdresa->TabIndex = 2;
			this->lbAdresa->Text = L"Adresa:";
			// 
			// errorProvider1
			// 
			this->errorProvider1->ContainerControl = this;
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::Color::Transparent;
			this->groupBox1->Controls->Add(this->chBoxModem);
			this->groupBox1->Location = System::Drawing::Point(12, 341);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(290, 46);
			this->groupBox1->TabIndex = 3;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Najam opreme";
			// 
			// chBoxModem
			// 
			this->chBoxModem->AutoSize = true;
			this->chBoxModem->Location = System::Drawing::Point(111, 19);
			this->chBoxModem->Name = L"chBoxModem";
			this->chBoxModem->Size = System::Drawing::Size(61, 17);
			this->chBoxModem->TabIndex = 0;
			this->chBoxModem->Text = L"Modem";
			this->chBoxModem->UseVisualStyleBackColor = true;
			// 
			// UnosKorisnika
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(312, 463);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->statusStrip1);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->Unesi);
			this->Controls->Add(this->tabControl2);
			this->Name = L"UnosKorisnika";
			this->Text = L"UnosKorisnika";
			this->Load += gcnew System::EventHandler(this, &UnosKorisnika::UnosKorisnika_Load);
			this->tabControl2->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			this->statusStrip1->ResumeLayout(false);
			this->statusStrip1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->errorProvider1))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		private:
			bool PostaviIme ()
			{
				if (c_ime->Text->Length < 3)
				{
					c_ime->Focus ();
					toolStripStatusLabel1->Text = "Ime ne smije sadržavati manje od 3 slova.";
					errorProvider1->SetError (c_ime, "Ime ne smije sadržavati manje od 3 slova.");				
					return false;
				}
				else if (c_ime->Text->Length >= 3)
				{
					for (int i = 0; i < c_ime->Text->Length; i++)
						if (!c_ime->Text [i].IsLetter (c_ime->Text, i))
						{
							c_ime->Focus ();
							toolStripStatusLabel1->Text = "Ime ne smije sadržavati brojeve i simbole.";
							errorProvider1->SetError (c_ime, "Ime ne smije sadržavati brojeve i simbole.");				
							return false;
						}
						if (!c_ime->Text [0].IsUpper (c_ime->Text, 0))
						{
							c_ime->Focus ();
							toolStripStatusLabel1->Text = "Ime mora poèeti sa velikim slovom.";
							errorProvider1->SetError (c_ime, "Ime mora poèeti sa velikim slovom.");				
							return false;
						}
						for (int i = 1; i < c_ime->Text->Length; i++)
							if (c_ime->Text [i].IsUpper (c_ime->Text, i))
							{
								c_ime->Focus ();
								toolStripStatusLabel1->Text = "Samo prvo slovo smije biti veliko.";
								errorProvider1->SetError (c_ime, "Samo prvo slovo smije biti veliko.");				
								return false;
							}

							errorProvider1->Clear ();
							toolStripStatusLabel1->Text = "";
							return true;				
				}

			}

			bool PostaviPrezime ()
			{
				if (c_prezime->Text->Length < 3)
				{
					c_prezime->Focus ();
					toolStripStatusLabel1->Text = "Prezime ne smije sadržavati manje od 3 slova.";
					errorProvider1->SetError (c_prezime, "Prezime ne smije sadržavati manje od 3 slova.");				
					return false;
				}
				else if (c_prezime->Text->Length >= 3)
				{
					for (int i = 0; i < c_prezime->Text->Length; i++)
						if (!c_prezime->Text [i].IsLetter (c_prezime->Text, i))
						{
							c_prezime->Focus ();
							toolStripStatusLabel1->Text = "Prezime ne smije sadržavati brojeve i simbole.";
							errorProvider1->SetError (c_prezime, "Prezime ne smije sadržavati brojeve i simbole.");				
							return false;
						}
						if (!c_prezime->Text [0].IsUpper (c_prezime->Text, 0))
						{
							c_prezime->Focus ();
							toolStripStatusLabel1->Text = "Prezime mora poèeti sa velikim slovom.";
							errorProvider1->SetError (c_prezime, "Prezime mora poèeti sa velikim slovom.");				
							return false;
						}
						for (int i = 1; i < c_prezime->Text->Length; i++)
							if (c_prezime->Text [i].IsUpper (c_prezime->Text, i))
							{
								c_prezime->Focus ();
								toolStripStatusLabel1->Text = "Samo prvo slovo smije biti veliko.";
								errorProvider1->SetError (c_prezime, "Samo prvo slovo smije biti veliko.");				
								return false;
							}				
							errorProvider1->Clear ();
							toolStripStatusLabel1->Text = "";
							return true;				
				}
			}

			bool PostaviLicnu ()
			{
				if (c_broj_licne_karte->Text->Length < 9)
			 {
				 c_broj_licne_karte->Focus ();
				 toolStripStatusLabel1->Text = "Broj liène karte ne smije sadržavati manje od 9 znakova.";
				 errorProvider1->SetError (c_broj_licne_karte, "Broj liène karte ne smije sadržavati manje od 9 znakova.");	
				 return false;
			 }
				else if (c_broj_licne_karte->Text->Length > 9)
			 {
				 c_broj_licne_karte->Focus ();
				 toolStripStatusLabel1->Text = "Broj liène karte ne smije sadržavati više od 9 znakova.";
				 errorProvider1->SetError (c_broj_licne_karte, "Broj liène karte ne smije sadržavati više od 9 znakova.");	
				 return false;
			 }
				else if (c_broj_licne_karte->Text->Length == 9)
			 {
				 for (int i = 0; i < 2; i++)
					 if (!c_broj_licne_karte->Text [i].IsDigit (c_broj_licne_karte->Text, i))
					 {
						 c_broj_licne_karte->Focus ();
						 toolStripStatusLabel1->Text = "Format liène karte: 2 broja + 3 velika slova + 4 broja.";
						 errorProvider1->SetError (c_broj_licne_karte, "Format liène karte: 2 broja + 3 velika slova + 4 broja.");	
						 return false;
					 }
					 for (int i = 5; i < 9; i++)
						 if (!c_broj_licne_karte->Text [i].IsDigit (c_broj_licne_karte->Text, i))
						 {
							 c_broj_licne_karte->Focus ();
							 toolStripStatusLabel1->Text = "Format liène karte: 2 broja + 3 velika slova + 4 broja.";
							 errorProvider1->SetError (c_broj_licne_karte, "Format liène karte: 2 broja + 3 velika slova + 4 broja.");	
							 return false;
						 }
						 for (int i = 2; i < 5; i++)
							 if (!c_broj_licne_karte->Text [i].IsUpper (c_broj_licne_karte->Text, i))
							 {
								 c_broj_licne_karte->Focus ();
								 toolStripStatusLabel1->Text = "Format liène karte: 2 broja + 3 velika slova + 4 broja.";
								 errorProvider1->SetError (c_broj_licne_karte, "Format liène karte: 2 broja + 3 velika slova + 4 broja.");	
								 return false;
							 }
							 errorProvider1->Clear ();
							 toolStripStatusLabel1->Text = "";
							 return true;
			 }
			}


			bool PostaviNaziv ()
			{
				if (c_naziv_firme->Text->Length < 3)
			 {
				 c_naziv_firme->Focus ();
				 toolStripStatusLabel1->Text = "Naziv ne smije sadržavati manje od 3 slova.";
				 errorProvider1->SetError (c_naziv_firme, "Naziv ne smije sadržavati manje od 3 slova.");				
				 return false;
			 }
				else if (c_naziv_firme->Text->Length >= 3)
				 {
					 for (int i = 0; i < c_naziv_firme->Text->Length; i++)
						 if (!c_naziv_firme->Text [i].IsLetter (c_naziv_firme->Text, i))
						 {
							 c_naziv_firme->Focus ();
							 toolStripStatusLabel1->Text = "Naziv ne smije sadržavati brojeve i simbole.";
							 errorProvider1->SetError (c_naziv_firme, "Naziv ne smije sadržavati brojeve i simbole.");				
							 return false;
						 }
						 if (!c_naziv_firme->Text [0].IsUpper (c_naziv_firme->Text, 0))
						 {
							 c_naziv_firme->Focus ();
							 toolStripStatusLabel1->Text = "Naziv mora poèeti sa velikim slovom.";
							 errorProvider1->SetError (c_naziv_firme, "Naziv mora poèeti sa velikim slovom.");				
							 return false;
						 }
						 for (int i = 1; i < c_naziv_firme->Text->Length; i++)
							 if (c_naziv_firme->Text [i].IsUpper (c_naziv_firme->Text, i))
							 {
								 c_naziv_firme->Focus ();
								 toolStripStatusLabel1->Text = "Samo prvo slovo smije biti veliko.";
								 errorProvider1->SetError (c_naziv_firme, "Samo prvo slovo smije biti veliko.");				
								 return false;
							 }
							 errorProvider1->Clear ();
							 toolStripStatusLabel1->Text = "";
							 return true;				
				 }
			}

			bool PostaviPDV ()
			{
				if (c_PDV_broj->Text->Length < 12)
			 {
				 c_PDV_broj->Focus ();
				 toolStripStatusLabel1->Text = "PDV broj mora imati 12 cifara.";
				 errorProvider1->SetError (c_PDV_broj, "PDV broj mora imati 12 cifara.");
				 return false;
			 }
				else 
			 {
				 errorProvider1->Clear ();
				 toolStripStatusLabel1->Text = "";
				 return true;
			 }
			}

			bool PostaviPaket ()
			{
				if (cmbBoxPaket->SelectedIndex == -1)
			 {
				 cmbBoxPaket->Focus ();
				 toolStripStatusLabel1->Text = "Morate odabrati vrstu paketa.";
				 errorProvider1->SetError (cmbBoxPaket, "Morate odabrati vrstu paketa.");				 
				 return false;
			 }
				else
			 {
				 errorProvider1->Clear ();
				 toolStripStatusLabel1->Text = "";
				 return true;
			 }
			}

			bool PostaviAdresu ()
			{
				if (txtAdresa->Text->Length < 5)
				{
					txtAdresa->Focus ();
					toolStripStatusLabel1->Text = "Adresa mora sadržavati najmanje 5 znakova.";
					errorProvider1->SetError (txtAdresa, "Adresa mora sadržavati najmanje 5 znakova.");
					return false;
				}
				else if (txtAdresa->Text->Length >= 5)
				{
					for (int i = 0; i < txtAdresa->Text->Length; i++)
						if (!txtAdresa->Text [0].IsUpper (txtAdresa->Text, 0))
						{
							txtAdresa->Focus ();
							toolStripStatusLabel1->Text = "Naziv mora poèeti sa velikim slovom.";
							errorProvider1->SetError (txtAdresa, "Naziv mora poèeti sa velikim slovom.");				
							return false;
						}						
						errorProvider1->Clear ();
						toolStripStatusLabel1->Text = "";
						return true;				
				 }
			}

			bool PostaviTelefon ()
			{
				if (maskedTxtTelefon->Text->Length < 6)
				{	
					maskedTxtTelefon->Focus ();
					toolStripStatusLabel1->Text = "Broj telefona mora imati najmanje 6 cifara.";
					errorProvider1->SetError (maskedTxtTelefon, "Broj telefona mora imati najmanje 6 cifara.");
					return false;
				}
				else
				{
					errorProvider1->Clear ();
					toolStripStatusLabel1->Text = "";
					return true;
				}
			}

			bool PostaviUsername ()
			{
				 if (txtUsername->Text->Length < 5)
				 {
					 txtUsername->Focus ();
					 toolStripStatusLabel1->Text = "Username mora imati najmanje 5 znakova.";
					 errorProvider1->SetError (txtUsername, "Username mora imati najmanje 5 znakova.");
					 return false;
				 }
				 else if (txtUsername->Text->Length >= 5)
				 {
					 for each (Korisnik ^k in korisnici)
					 if (txtUsername->Text == k->Username ())
					 {
						 txtUsername->Focus ();
						 toolStripStatusLabel1->Text = "Username veæ zauzet!";
						 errorProvider1->SetError (txtUsername, "Username veæ zauzet!");
						 return false;
					 }

					 errorProvider1->Clear ();
					 toolStripStatusLabel1->Text = "";
					 return true;
				 }
			}

			bool PostaviPassword ()
			{
				if (txtPassword->Text->Length < 5)
				{	
					txtPassword->Focus ();
					toolStripStatusLabel1->Text = "Password mora imati najmanje 5 znakova.";
					errorProvider1->SetError (txtPassword, "Password mora imati najmanje 5 znakova.");
					return false;
				}
				else
				{
					errorProvider1->Clear ();
					toolStripStatusLabel1->Text = "";
					return true;
				}
			}

			void Resetuj ()
			{
				c_ime->Clear (); 
				c_prezime->Clear (); 
				c_broj_licne_karte->Clear ();

				c_naziv_firme->Clear (); 
				c_PDV_broj->Clear (); 

				txtAdresa->Clear();
				maskedTxtTelefon->Clear();
				txtUsername->Clear();
				txtPassword->Clear();
				cmbBoxPaket->SelectedIndex = -1;
				chBoxModem->Checked = false;
			}



	private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
				 Close ();
			 }
private: System::Void Unesi_Click(System::Object^  sender, System::EventArgs^  e) {

			 try
			 {
				 if (tabControl2->SelectedIndex == 0)
				 {
					 if (!PostaviIme ())
						 throw gcnew IzuzetakOsoba (errorProvider1->GetError (c_ime));

					 if (!PostaviPrezime ())
						 throw gcnew IzuzetakOsoba (errorProvider1->GetError (c_prezime));

					 if (!PostaviLicnu ())
						 throw gcnew IzuzetakOsoba (errorProvider1->GetError (c_broj_licne_karte));

				 }
				 if (tabControl2->SelectedIndex == 1)
				 {
					 if (!PostaviNaziv ())
						 throw gcnew IzuzetakFirma (errorProvider1->GetError (c_naziv_firme));

					 if (!PostaviPDV ())
						 throw gcnew IzuzetakFirma (errorProvider1->GetError (c_PDV_broj));					 
				 }

				 if (!PostaviAdresu())
					 throw gcnew Exception (errorProvider1->GetError (txtAdresa));
				 
				 if (!PostaviTelefon())
					 throw gcnew Exception (errorProvider1->GetError (maskedTxtTelefon));

				 if (!PostaviUsername())
					 throw gcnew Exception (errorProvider1->GetError (txtUsername));

				 if (!PostaviPassword())
					 throw gcnew Exception (errorProvider1->GetError (txtPassword));

				 if (!PostaviPaket ())
					 throw gcnew Exception (errorProvider1->GetError (cmbBoxPaket));

				 String ^adresa = txtAdresa->Text;
				 String ^telefon = maskedTxtTelefon->Text;
				 String ^username = txtUsername->Text;
				 String ^password = txtPassword->Text;
				 String ^naziv_paketa = cmbBoxPaket->SelectedItem->ToString ();
				 bool modem = chBoxModem->Checked;
				 			 
				 // Ako je sve uredu:

				 if (tabControl2->SelectedIndex == 0)
				 {
					 KorisnikOsoba ^ko = gcnew KorisnikOsoba (modem, username, naziv_paketa, adresa, password, telefon, c_ime->Text, c_prezime->Text, c_broj_licne_karte->Text);
					 korisnici->Add (ko);
					
					 Resetuj();
				 }
				 if (tabControl2->SelectedIndex == 1)
				 {
					 KorisnikFirma ^kf = gcnew KorisnikFirma (modem, username, naziv_paketa, adresa, password, telefon, c_naziv_firme->Text, c_PDV_broj->Text);
					 korisnici->Add (kf);

					 Resetuj();
				 }
			 } 
			 catch (IzuzetakOsoba ^iz)
			 {
				MessageBox::Show ("Greška pri unosu. Podaci o osobi nisu spašeni.", "Greška", MessageBoxButtons::OK, MessageBoxIcon::Error);
			 }
			 catch (IzuzetakFirma ^iz)
			 {
				 MessageBox::Show ("Greška pri unosu. Podaci o firmi nisu spašeni.", "Greška", MessageBoxButtons::OK, MessageBoxIcon::Error);
			 }
			 catch (...) 
			 {			 
				 MessageBox::Show ("Greška pri unosu. Podaci o korisniku nisu spašeni.", "Greška", MessageBoxButtons::OK, MessageBoxIcon::Error);
			 } 
				

		 }
private: System::Void UnosKorisnika_Load(System::Object^  sender, System::EventArgs^  e) {
			
			 for each (Paket ^p in paketi)
				 cmbBoxPaket->Items->Add (p->Naziv_paketa ());
			 
		 }
private: System::Void c_ime_Validating(System::Object^  sender, System::ComponentModel::CancelEventArgs^  e) {
			 PostaviIme ();
		 }
private: System::Void c_prezime_Validating(System::Object^  sender, System::ComponentModel::CancelEventArgs^  e) {
			 PostaviPrezime ();
		 }
private: System::Void c_broj_licne_karte_Validating(System::Object^  sender, System::ComponentModel::CancelEventArgs^  e) {
			 PostaviLicnu ();
		 }
private: System::Void c_naziv_firme_Validating(System::Object^  sender, System::ComponentModel::CancelEventArgs^  e) {
			 PostaviNaziv ();
		 }
private: System::Void c_PDV_broj_Validating(System::Object^  sender, System::ComponentModel::CancelEventArgs^  e) {
			 PostaviPDV ();
		 }
private: System::Void cmbBoxPaket_Validating(System::Object^  sender, System::ComponentModel::CancelEventArgs^  e) {
			 PostaviPaket ();
		 }
private: System::Void txtAdresa_Validating(System::Object^  sender, System::ComponentModel::CancelEventArgs^  e) {
			PostaviAdresu ();
		 }
private: System::Void maskedTxtTelefon_Validating(System::Object^  sender, System::ComponentModel::CancelEventArgs^  e) {
			 PostaviTelefon ();
		 }
private: System::Void txtUsername_Validating(System::Object^  sender, System::ComponentModel::CancelEventArgs^  e) {
			 PostaviUsername ();
		 }
private: System::Void txtPassword_Validating(System::Object^  sender, System::ComponentModel::CancelEventArgs^  e) {
			 PostaviPassword ();
		 }
private: System::Void tabControl2_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
			 if (tabControl2->SelectedIndex == 0)
			 {
				 c_ime->Focus ();
			 }
			 if (tabControl2->SelectedIndex == 1)
			 {
				 c_naziv_firme->Focus ();
			 }
		 }
};
}
