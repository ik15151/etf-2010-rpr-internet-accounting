#pragma once
#include "KorisnikFirma.h"
#include "Paket.h"
#include "IzuzetakFirma.h"
#include "Korisnik.h"

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace System::IO;
using namespace System::Runtime::Serialization::Formatters::Binary;


namespace InternetAccounting {

	/// <summary>
	/// Summary for PromjenaFirma
	///
	/// WARNING: If you change the name of this class, you will need to change the
	///          'Resource File Name' property for the managed resource compiler tool
	///          associated with all .resx files this class depends on.  Otherwise,
	///          the designers will not be able to interact properly with localized
	///          resources associated with this form.
	/// </summary>
	public ref class PromjenaFirma : public System::Windows::Forms::Form
	{
	public:
		PromjenaFirma(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

		PromjenaFirma(KorisnikFirma ^kf, ArrayList ^p, ArrayList ^k, String ^d)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			korisnik = kf;	
			paketi = p;
			korisnici = k;
			datoteka = d;
		}

	private:
		KorisnikFirma ^korisnik;
		ArrayList ^korisnici;
		String ^datoteka;

	private: System::Windows::Forms::GroupBox^  groupBox5;
	private: System::Windows::Forms::CheckBox^  chBoxModem;
			 ArrayList ^paketi;

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~PromjenaFirma()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^  groupbox3;
	protected: 
	private: System::Windows::Forms::TextBox^  c_PDV_broj;
	private: System::Windows::Forms::TextBox^  c_naziv_firme;

	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::ComboBox^  cmbBoxPaket;
	private: System::Windows::Forms::Label^  lbPaket;
	private: System::Windows::Forms::Label^  lbUsername;
	private: System::Windows::Forms::TextBox^  txtUsername;
	private: System::Windows::Forms::Label^  lbPassword;
	private: System::Windows::Forms::TextBox^  txtPassword;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::MaskedTextBox^  maskedTxtTelefon;
	private: System::Windows::Forms::TextBox^  txtAdresa;
	private: System::Windows::Forms::Label^  lbTelefon;
	private: System::Windows::Forms::Label^  lbAdresa;

	private: System::Windows::Forms::StatusStrip^  statusStrip1;
	private: System::Windows::Forms::ToolStripStatusLabel^  toolStripStatusLabel1;
	private: System::Windows::Forms::GroupBox^  groupBox4;
	private: System::Windows::Forms::RadioButton^  p_mirovanje;
	private: System::Windows::Forms::RadioButton^  p_aktivan;
	private: System::Windows::Forms::Button^  Azuriranje;
	private: System::Windows::Forms::ErrorProvider^  errorProvider1;
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
			this->groupbox3 = (gcnew System::Windows::Forms::GroupBox());
			this->c_PDV_broj = (gcnew System::Windows::Forms::TextBox());
			this->c_naziv_firme = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->cmbBoxPaket = (gcnew System::Windows::Forms::ComboBox());
			this->lbPaket = (gcnew System::Windows::Forms::Label());
			this->lbUsername = (gcnew System::Windows::Forms::Label());
			this->txtUsername = (gcnew System::Windows::Forms::TextBox());
			this->lbPassword = (gcnew System::Windows::Forms::Label());
			this->txtPassword = (gcnew System::Windows::Forms::TextBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->maskedTxtTelefon = (gcnew System::Windows::Forms::MaskedTextBox());
			this->txtAdresa = (gcnew System::Windows::Forms::TextBox());
			this->lbTelefon = (gcnew System::Windows::Forms::Label());
			this->lbAdresa = (gcnew System::Windows::Forms::Label());
			this->statusStrip1 = (gcnew System::Windows::Forms::StatusStrip());
			this->toolStripStatusLabel1 = (gcnew System::Windows::Forms::ToolStripStatusLabel());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->p_mirovanje = (gcnew System::Windows::Forms::RadioButton());
			this->p_aktivan = (gcnew System::Windows::Forms::RadioButton());
			this->Azuriranje = (gcnew System::Windows::Forms::Button());
			this->errorProvider1 = (gcnew System::Windows::Forms::ErrorProvider(this->components));
			this->groupBox5 = (gcnew System::Windows::Forms::GroupBox());
			this->chBoxModem = (gcnew System::Windows::Forms::CheckBox());
			this->groupbox3->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->statusStrip1->SuspendLayout();
			this->groupBox4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->errorProvider1))->BeginInit();
			this->groupBox5->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupbox3
			// 
			this->groupbox3->Controls->Add(this->c_PDV_broj);
			this->groupbox3->Controls->Add(this->c_naziv_firme);
			this->groupbox3->Controls->Add(this->label3);
			this->groupbox3->Controls->Add(this->label2);
			this->groupbox3->Location = System::Drawing::Point(12, 12);
			this->groupbox3->Name = L"groupbox3";
			this->groupbox3->Size = System::Drawing::Size(290, 81);
			this->groupbox3->TabIndex = 0;
			this->groupbox3->TabStop = false;
			this->groupbox3->Text = L"Osnovni podaci";
			// 
			// c_PDV_broj
			// 
			this->c_PDV_broj->Location = System::Drawing::Point(110, 47);
			this->c_PDV_broj->Name = L"c_PDV_broj";
			this->c_PDV_broj->Size = System::Drawing::Size(154, 20);
			this->c_PDV_broj->TabIndex = 1;
			// 
			// c_naziv_firme
			// 
			this->c_naziv_firme->Location = System::Drawing::Point(110, 21);
			this->c_naziv_firme->Name = L"c_naziv_firme";
			this->c_naziv_firme->Size = System::Drawing::Size(154, 20);
			this->c_naziv_firme->TabIndex = 0;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(20, 54);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(52, 13);
			this->label3->TabIndex = 3;
			this->label3->Text = L"PDV broj:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(18, 28);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(37, 13);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Naziv:";
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
			this->groupBox2->Location = System::Drawing::Point(12, 184);
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
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::Color::Transparent;
			this->groupBox1->Controls->Add(this->maskedTxtTelefon);
			this->groupBox1->Controls->Add(this->txtAdresa);
			this->groupBox1->Controls->Add(this->lbTelefon);
			this->groupBox1->Controls->Add(this->lbAdresa);
			this->groupBox1->Location = System::Drawing::Point(12, 99);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(290, 79);
			this->groupBox1->TabIndex = 1;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Kontaktni podaci";
			// 
			// maskedTxtTelefon
			// 
			this->maskedTxtTelefon->Location = System::Drawing::Point(111, 47);
			this->maskedTxtTelefon->Mask = L"000000000";
			this->maskedTxtTelefon->Name = L"maskedTxtTelefon";
			this->maskedTxtTelefon->Size = System::Drawing::Size(61, 20);
			this->maskedTxtTelefon->TabIndex = 1;
			this->maskedTxtTelefon->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// txtAdresa
			// 
			this->txtAdresa->Location = System::Drawing::Point(111, 20);
			this->txtAdresa->Name = L"txtAdresa";
			this->txtAdresa->Size = System::Drawing::Size(152, 20);
			this->txtAdresa->TabIndex = 0;
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
			// statusStrip1
			// 
			this->statusStrip1->BackColor = System::Drawing::SystemColors::Window;
			this->statusStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) {this->toolStripStatusLabel1});
			this->statusStrip1->Location = System::Drawing::Point(0, 453);
			this->statusStrip1->Name = L"statusStrip1";
			this->statusStrip1->Size = System::Drawing::Size(316, 22);
			this->statusStrip1->TabIndex = 6;
			this->statusStrip1->Text = L"statusStrip1";
			// 
			// toolStripStatusLabel1
			// 
			this->toolStripStatusLabel1->ForeColor = System::Drawing::Color::Red;
			this->toolStripStatusLabel1->Name = L"toolStripStatusLabel1";
			this->toolStripStatusLabel1->Size = System::Drawing::Size(0, 17);
			// 
			// groupBox4
			// 
			this->groupBox4->Controls->Add(this->p_mirovanje);
			this->groupBox4->Controls->Add(this->p_aktivan);
			this->groupBox4->Location = System::Drawing::Point(12, 353);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(122, 82);
			this->groupBox4->TabIndex = 5;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"Stanje raèuna";
			// 
			// p_mirovanje
			// 
			this->p_mirovanje->AutoSize = true;
			this->p_mirovanje->Location = System::Drawing::Point(23, 23);
			this->p_mirovanje->Name = L"p_mirovanje";
			this->p_mirovanje->Size = System::Drawing::Size(71, 17);
			this->p_mirovanje->TabIndex = 0;
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
			this->p_aktivan->TabIndex = 1;
			this->p_aktivan->TabStop = true;
			this->p_aktivan->Text = L"Aktivan";
			this->p_aktivan->UseVisualStyleBackColor = true;
			// 
			// Azuriranje
			// 
			this->Azuriranje->AutoSize = true;
			this->Azuriranje->Location = System::Drawing::Point(239, 412);
			this->Azuriranje->Name = L"Azuriranje";
			this->Azuriranje->Size = System::Drawing::Size(63, 23);
			this->Azuriranje->TabIndex = 4;
			this->Azuriranje->Text = L"Ažuriranje";
			this->Azuriranje->UseVisualStyleBackColor = true;
			this->Azuriranje->Click += gcnew System::EventHandler(this, &PromjenaFirma::Azuriranje_Click);
			// 
			// errorProvider1
			// 
			this->errorProvider1->ContainerControl = this;
			// 
			// groupBox5
			// 
			this->groupBox5->BackColor = System::Drawing::Color::Transparent;
			this->groupBox5->Controls->Add(this->chBoxModem);
			this->groupBox5->Location = System::Drawing::Point(14, 294);
			this->groupBox5->Name = L"groupBox5";
			this->groupBox5->Size = System::Drawing::Size(290, 46);
			this->groupBox5->TabIndex = 3;
			this->groupBox5->TabStop = false;
			this->groupBox5->Text = L"Najam opreme";
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
			// PromjenaFirma
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(316, 475);
			this->Controls->Add(this->groupBox5);
			this->Controls->Add(this->statusStrip1);
			this->Controls->Add(this->groupBox4);
			this->Controls->Add(this->Azuriranje);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->groupbox3);
			this->MaximizeBox = false;
			this->Name = L"PromjenaFirma";
			this->Text = L"Promjena podataka o fizièkom licu";
			this->Load += gcnew System::EventHandler(this, &PromjenaFirma::PromjenaFirma_Load);
			this->groupbox3->ResumeLayout(false);
			this->groupbox3->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->statusStrip1->ResumeLayout(false);
			this->statusStrip1->PerformLayout();
			this->groupBox4->ResumeLayout(false);
			this->groupBox4->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->errorProvider1))->EndInit();
			this->groupBox5->ResumeLayout(false);
			this->groupBox5->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		public:

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
					 /*
					 for each (Korisnik ^k in korisnici)
					 if (txtUsername->Text == k->Username ())
					 {
						 toolStripStatusLabel1->Text = "Username veæ zauzet!";
						 errorProvider1->SetError (txtUsername, "Username veæ zauzet!");
						 return false;
					 }
					 */

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
		public:
			void setModemDisabled ()
			{
				chBoxModem->Checked = false;
				chBoxModem->Enabled = false;
			}
	private: System::Void PromjenaFirma_Load(System::Object^  sender, System::EventArgs^  e) {

				 for each (Paket ^p in paketi)
					 cmbBoxPaket->Items->Add (p->Naziv_paketa ());

				 c_naziv_firme->Text = korisnik->Naziv ();
				 c_PDV_broj->Text = korisnik->PDV_broj ();

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
				 c_naziv_firme->Focus ();
			 }
private: System::Void Azuriranje_Click(System::Object^  sender, System::EventArgs^  e) {

			 try
			 {				 
				 if (!PostaviNaziv ())
					 throw gcnew IzuzetakFirma (errorProvider1->GetError (c_naziv_firme));

				 if (!PostaviPDV ())
					 throw gcnew IzuzetakFirma (errorProvider1->GetError (c_PDV_broj));

				 if (!PostaviAdresu())
					 throw gcnew IzuzetakFirma (errorProvider1->GetError (txtAdresa));
				 
				 if (!PostaviTelefon())
					 throw gcnew IzuzetakFirma (errorProvider1->GetError (maskedTxtTelefon));

				 if (!PostaviUsername())
					 throw gcnew IzuzetakFirma (errorProvider1->GetError (txtUsername));

				 if (!PostaviPassword())
					 throw gcnew IzuzetakFirma (errorProvider1->GetError (txtPassword));

				 if (!PostaviPaket ())
					 throw gcnew IzuzetakFirma (errorProvider1->GetError (cmbBoxPaket));

				 if (p_mirovanje->Checked == true && chBoxModem->Checked == true)
				 {
					 errorProvider1->SetError (p_mirovanje, "Ako se raèun stavlja na mirovanje, mora se vratiti modem.");
					 errorProvider1->SetError(chBoxModem, "Ako je modem kod korisnika, raèun se ne smije staviti na mirovanje.");
					 throw gcnew IzuzetakFirma ("Ne može se zamrznuti raèun prije vraæanja modema.");
				 }							 

				 korisnik->Naziv (c_naziv_firme->Text);
				 korisnik->PDV_broj (c_PDV_broj->Text);
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

				 FileStream ^fs = gcnew FileStream (datoteka, FileMode::Create);
				 BinaryFormatter ^bf = gcnew BinaryFormatter ();

				 bf->Serialize (fs, korisnici);
				 fs->Close ();

				 Close ();
				 
			 } 
			 catch (IzuzetakFirma ^iz)
			 {
				 toolStripStatusLabel1->Text = iz->Message;
				 MessageBox::Show ("Greška pri unosu. Podaci o korisniku nisu spašeni.", "Greška", MessageBoxButtons::OK, MessageBoxIcon::Error);
				 
			 }
		 }
};
}
