#pragma once
#include "KorisnikOsoba.h"
#include "Paket.h"

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace DZ3 {

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


	protected: 


	private: System::Windows::Forms::ComboBox^  c_CBox_paket;


	private: System::Windows::Forms::Label^  label4;

	private: System::Windows::Forms::Button^  Azuriranje;











	private: System::Windows::Forms::GroupBox^  groupbox3;
	private: System::Windows::Forms::TextBox^  c_broj_licne_karte;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::TextBox^  c_prezime;
	private: System::Windows::Forms::TextBox^  c_ime;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::GroupBox^  groupBox4;
	private: System::Windows::Forms::RadioButton^  p_mirovanje;

	private: System::Windows::Forms::StatusStrip^  statusStrip1;
	private: System::Windows::Forms::ToolStripStatusLabel^  toolStripStatusLabel1;
	private: System::Windows::Forms::RadioButton^  p_aktivan;

	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: KontrolaUnos::KontrolaUnosKorisnika^  kontrolaUnosKorisnika1;
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
			this->c_CBox_paket = (gcnew System::Windows::Forms::ComboBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->Azuriranje = (gcnew System::Windows::Forms::Button());
			this->groupbox3 = (gcnew System::Windows::Forms::GroupBox());
			this->c_broj_licne_karte = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->c_prezime = (gcnew System::Windows::Forms::TextBox());
			this->c_ime = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->p_mirovanje = (gcnew System::Windows::Forms::RadioButton());
			this->p_aktivan = (gcnew System::Windows::Forms::RadioButton());
			this->statusStrip1 = (gcnew System::Windows::Forms::StatusStrip());
			this->toolStripStatusLabel1 = (gcnew System::Windows::Forms::ToolStripStatusLabel());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->kontrolaUnosKorisnika1 = (gcnew KontrolaUnos::KontrolaUnosKorisnika());
			this->errorProvider1 = (gcnew System::Windows::Forms::ErrorProvider(this->components));
			this->groupbox3->SuspendLayout();
			this->groupBox4->SuspendLayout();
			this->statusStrip1->SuspendLayout();
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->errorProvider1))->BeginInit();
			this->SuspendLayout();
			// 
			// c_CBox_paket
			// 
			this->c_CBox_paket->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->c_CBox_paket->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->c_CBox_paket->FormattingEnabled = true;
			this->c_CBox_paket->Location = System::Drawing::Point(110, 19);
			this->c_CBox_paket->Name = L"c_CBox_paket";
			this->c_CBox_paket->Size = System::Drawing::Size(152, 21);
			this->c_CBox_paket->TabIndex = 8;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(18, 27);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(38, 13);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Paket:";
			// 
			// Azuriranje
			// 
			this->Azuriranje->AutoSize = true;
			this->Azuriranje->Location = System::Drawing::Point(226, 480);
			this->Azuriranje->Name = L"Azuriranje";
			this->Azuriranje->Size = System::Drawing::Size(75, 23);
			this->Azuriranje->TabIndex = 103;
			this->Azuriranje->Text = L"Ažuriranje";
			this->Azuriranje->UseVisualStyleBackColor = true;
			this->Azuriranje->Click += gcnew System::EventHandler(this, &PromjenaOsoba::Azuriranje_Click);
			// 
			// groupbox3
			// 
			this->groupbox3->Controls->Add(this->c_broj_licne_karte);
			this->groupbox3->Controls->Add(this->label8);
			this->groupbox3->Controls->Add(this->c_prezime);
			this->groupbox3->Controls->Add(this->c_ime);
			this->groupbox3->Controls->Add(this->label3);
			this->groupbox3->Controls->Add(this->label2);
			this->groupbox3->Location = System::Drawing::Point(13, 13);
			this->groupbox3->Name = L"groupbox3";
			this->groupbox3->Size = System::Drawing::Size(288, 105);
			this->groupbox3->TabIndex = 105;
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
			this->label8->Text = L"Broj liène karte:";
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
			// groupBox4
			// 
			this->groupBox4->Controls->Add(this->p_mirovanje);
			this->groupBox4->Controls->Add(this->p_aktivan);
			this->groupBox4->Location = System::Drawing::Point(13, 421);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(122, 82);
			this->groupBox4->TabIndex = 106;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"Stanje raèuna";
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
			// statusStrip1
			// 
			this->statusStrip1->BackColor = System::Drawing::SystemColors::Window;
			this->statusStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) {this->toolStripStatusLabel1});
			this->statusStrip1->Location = System::Drawing::Point(0, 509);
			this->statusStrip1->Name = L"statusStrip1";
			this->statusStrip1->Size = System::Drawing::Size(315, 22);
			this->statusStrip1->TabIndex = 107;
			this->statusStrip1->Text = L"statusStrip1";
			// 
			// toolStripStatusLabel1
			// 
			this->toolStripStatusLabel1->BackColor = System::Drawing::SystemColors::Control;
			this->toolStripStatusLabel1->ForeColor = System::Drawing::Color::Red;
			this->toolStripStatusLabel1->Name = L"toolStripStatusLabel1";
			this->toolStripStatusLabel1->Size = System::Drawing::Size(0, 17);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->c_CBox_paket);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Location = System::Drawing::Point(13, 125);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(288, 52);
			this->groupBox1->TabIndex = 108;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Internet paket";
			// 
			// kontrolaUnosKorisnika1
			// 
			this->kontrolaUnosKorisnika1->BackColor = System::Drawing::SystemColors::Control;
			this->kontrolaUnosKorisnika1->Location = System::Drawing::Point(0, 183);
			this->kontrolaUnosKorisnika1->Name = L"kontrolaUnosKorisnika1";
			this->kontrolaUnosKorisnika1->Size = System::Drawing::Size(314, 229);
			this->kontrolaUnosKorisnika1->TabIndex = 109;
			// 
			// errorProvider1
			// 
			this->errorProvider1->ContainerControl = this;
			// 
			// PromjenaOsoba
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Control;
			this->ClientSize = System::Drawing::Size(315, 531);
			this->Controls->Add(this->kontrolaUnosKorisnika1);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->statusStrip1);
			this->Controls->Add(this->groupBox4);
			this->Controls->Add(this->groupbox3);
			this->Controls->Add(this->Azuriranje);
			this->MaximizeBox = false;
			this->Name = L"PromjenaOsoba";
			this->Text = L"Promjena podataka o fizièkom licu";
			this->Load += gcnew System::EventHandler(this, &PromjenaOsoba::PromjenaOsoba_Load);
			this->groupbox3->ResumeLayout(false);
			this->groupbox3->PerformLayout();
			this->groupBox4->ResumeLayout(false);
			this->groupBox4->PerformLayout();
			this->statusStrip1->ResumeLayout(false);
			this->statusStrip1->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->errorProvider1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void PromjenaOsoba_Load(System::Object^  sender, System::EventArgs^  e) {
				 
				 for each (Paket ^p in paketi)
					 c_CBox_paket->Items->Add (p->Naziv_paketa ());

				 c_ime->Text = korisnik->Ime ();
				 c_prezime->Text = korisnik->Prezime ();
				 c_broj_licne_karte->Text = korisnik->Broj_licne_karte ();				 				 
				 c_CBox_paket->SelectedItem = korisnik->Naziv_paketa ();


				 kontrolaUnosKorisnika1->setAdresa (korisnik->Adresa ());
				 kontrolaUnosKorisnika1->setTelefon (korisnik->Telefon ());
				 kontrolaUnosKorisnika1->setUsername (korisnik->Username ());
				 kontrolaUnosKorisnika1->setPassword (korisnik->Password ());
				 kontrolaUnosKorisnika1->setModem (korisnik->Modem ());

				 
				 if (korisnik->Suspenzija () == true)
				 {
					 p_mirovanje->Checked = false;
					 p_aktivan->Checked = false;
					 p_mirovanje->Enabled = false;
					 p_aktivan->Enabled = false;
					 kontrolaUnosKorisnika1->setModemDisabled ();
				 }
				else if (korisnik->Mirovanje () == true)
					p_mirovanje->Checked = true;
				else
					p_aktivan->Checked = true;

			 }
private: System::Void Azuriranje_Click(System::Object^  sender, System::EventArgs^  e) {
			
			 try
			 {
				 if (p_mirovanje->Checked == true && kontrolaUnosKorisnika1->getModem () == true)
				 {
					errorProvider1->SetError (p_mirovanje, "Ako se raèun stavlja na mirovanje, mora se vratiti modem.");
					kontrolaUnosKorisnika1->setGreskaModem ("Ako je modem kod korisnika, raèun se ne smije staviti na mirovanje.");
					throw gcnew Exception ("Ne može se zamrznuti raèun prije vraæanja modema.");
				 }

				korisnik->Ime (c_ime->Text);
				korisnik->Prezime (c_prezime->Text);
				korisnik->Broj_licne_karte (c_broj_licne_karte->Text);
				korisnik->Naziv_paketa (c_CBox_paket->SelectedItem->ToString ());

				korisnik->Adresa (kontrolaUnosKorisnika1->getAdresa ());
				korisnik->Telefon (kontrolaUnosKorisnika1->getTelefon ());
				korisnik->Username (kontrolaUnosKorisnika1->getUsername ());
				korisnik->Password (kontrolaUnosKorisnika1->getPassword ());
				korisnik->Modem (kontrolaUnosKorisnika1->getModem ());
				
				
				if (p_mirovanje->Checked)
					korisnik->Mirovanje (true);
				else if (p_aktivan->Checked)
					korisnik->Mirovanje (false);
				
				Close ();
			 }
			 catch (...)
			 {
				 // Treba napraviti bolji/e izuzetke
				 toolStripStatusLabel1->Text = "Greška u ažuriranju. Podaci nisu spašeni.";
			 }
			 
		 }
};
}
