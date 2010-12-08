#pragma once

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

	private: System::Windows::Forms::ToolStripStatusLabel^  toolStripStatusLabel1;
	private: System::Windows::Forms::ErrorProvider^  errorProvider1;

	private: System::Windows::Forms::MaskedTextBox^  c_PDV_broj;
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
			this->kontrolaUnosKorisnika1 = (gcnew KontrolaUnos::KontrolaUnosKorisnika());
			this->tabControl2->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			this->statusStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->errorProvider1))->BeginInit();
			this->SuspendLayout();
			// 
			// button5
			// 
			this->button5->AutoSize = true;
			this->button5->Location = System::Drawing::Point(253, 416);
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
			this->Unesi->Location = System::Drawing::Point(164, 416);
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
			this->tabControl2->Size = System::Drawing::Size(316, 128);
			this->tabControl2->TabIndex = 1;
			// 
			// tabPage1
			// 
			this->tabPage1->BackColor = System::Drawing::Color::White;
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
			this->tabPage1->Size = System::Drawing::Size(308, 102);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Osoba";
			// 
			// c_broj_licne_karte
			// 
			this->c_broj_licne_karte->Location = System::Drawing::Point(107, 65);
			this->c_broj_licne_karte->Name = L"c_broj_licne_karte";
			this->c_broj_licne_karte->Size = System::Drawing::Size(172, 20);
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
			this->c_prezime->Size = System::Drawing::Size(172, 20);
			this->c_prezime->TabIndex = 2;
			this->c_prezime->Validating += gcnew System::ComponentModel::CancelEventHandler(this, &UnosKorisnika::c_prezime_Validating);
			// 
			// c_ime
			// 
			this->c_ime->Location = System::Drawing::Point(107, 13);
			this->c_ime->Name = L"c_ime";
			this->c_ime->Size = System::Drawing::Size(172, 20);
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
			this->tabPage2->BackColor = System::Drawing::Color::White;
			this->tabPage2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->tabPage2->Controls->Add(this->c_PDV_broj);
			this->tabPage2->Controls->Add(this->label9);
			this->tabPage2->Controls->Add(this->label1);
			this->tabPage2->Controls->Add(this->c_naziv_firme);
			this->tabPage2->Location = System::Drawing::Point(4, 22);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(308, 102);
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
			this->c_naziv_firme->Size = System::Drawing::Size(172, 20);
			this->c_naziv_firme->TabIndex = 0;
			this->c_naziv_firme->Validating += gcnew System::ComponentModel::CancelEventHandler(this, &UnosKorisnika::c_naziv_firme_Validating);
			// 
			// statusStrip1
			// 
			this->statusStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) {this->toolStripStatusLabel1});
			this->statusStrip1->Location = System::Drawing::Point(0, 455);
			this->statusStrip1->Name = L"statusStrip1";
			this->statusStrip1->Size = System::Drawing::Size(342, 22);
			this->statusStrip1->TabIndex = 100;
			this->statusStrip1->Text = L"statusStrip1";
			// 
			// toolStripStatusLabel1
			// 
			this->toolStripStatusLabel1->BackColor = System::Drawing::SystemColors::Control;
			this->toolStripStatusLabel1->Name = L"toolStripStatusLabel1";
			this->toolStripStatusLabel1->Size = System::Drawing::Size(0, 17);
			// 
			// errorProvider1
			// 
			this->errorProvider1->ContainerControl = this;
			// 
			// kontrolaUnosKorisnika1
			// 
			this->kontrolaUnosKorisnika1->BackColor = System::Drawing::Color::White;
			this->kontrolaUnosKorisnika1->Location = System::Drawing::Point(0, 142);
			this->kontrolaUnosKorisnika1->Name = L"kontrolaUnosKorisnika1";
			this->kontrolaUnosKorisnika1->Size = System::Drawing::Size(342, 268);
			this->kontrolaUnosKorisnika1->TabIndex = 101;
			// 
			// UnosKorisnika
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoValidate = System::Windows::Forms::AutoValidate::EnablePreventFocusChange;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(342, 477);
			this->Controls->Add(this->kontrolaUnosKorisnika1);
			this->Controls->Add(this->statusStrip1);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->Unesi);
			this->Controls->Add(this->tabControl2);
			this->MaximizeBox = false;
			this->Name = L"UnosKorisnika";
			this->Text = L"Unos novog korisnika";
			this->CursorChanged += gcnew System::EventHandler(this, &UnosKorisnika::UnosKorisnika_CursorChanged);
			this->Shown += gcnew System::EventHandler(this, &UnosKorisnika::UnosKorisnika_Shown);
			this->AutoValidateChanged += gcnew System::EventHandler(this, &UnosKorisnika::UnosKorisnika_AutoValidateChanged);
			this->Activated += gcnew System::EventHandler(this, &UnosKorisnika::UnosKorisnika_Activated);
			this->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &UnosKorisnika::UnosKorisnika_MouseMove);
			this->tabControl2->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			this->statusStrip1->ResumeLayout(false);
			this->statusStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->errorProvider1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void groupBox1_Enter(System::Object^  sender, System::EventArgs^  e) {
			 }
private: System::Void kontrolaUnosKorisnika1_Enter(System::Object^  sender, System::EventArgs^  e) {

		 }
private: System::Void kontrolaUnosKorisnika1_Validating(System::Object^  sender, System::ComponentModel::CancelEventArgs^  e) {
			
		 }
private: System::Void kontrolaUnosKorisnika1_MouseEnter(System::Object^  sender, System::EventArgs^  e) {
			
		 }
private: System::Void kontrolaUnosKorisnika1_MouseMove(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {

		 }
private: System::Void UnosKorisnika_Activated(System::Object^  sender, System::EventArgs^  e) {
			
		 }
private: System::Void UnosKorisnika_MouseMove(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
			
		 }
private: System::Void UnosKorisnika_Shown(System::Object^  sender, System::EventArgs^  e) {
			
		 }
private: System::Void UnosKorisnika_CursorChanged(System::Object^  sender, System::EventArgs^  e) {
			
		 }
private: System::Void UnosKorisnika_AutoValidateChanged(System::Object^  sender, System::EventArgs^  e) {
			
		 }
private: System::Void c_ime_Validating(System::Object^  sender, System::ComponentModel::CancelEventArgs^  e) {
			 if (c_ime->Text->Length < 3)
			 {
				 c_ime->Focus ();
				 toolStripStatusLabel1->ForeColor = Color::Red;
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
				 kontrolaUnosKorisnika1->setAdresa ();
				 kontrolaUnosKorisnika1->setTelefon ();
				 //kontrolaUnosKorisnika1->setPaket ();
				 kontrolaUnosKorisnika1->setUsername ();
				 kontrolaUnosKorisnika1->setPassword ();
				 kontrolaUnosKorisnika1->setModem ();
			 }
			 catch (...)
			 {
				 toolStripStatusLabel1->ForeColor = Color::Red;
				 toolStripStatusLabel1->Text = "Podaci nisu spašeni zbog pogrešnog unosa.";
				 MessageBox::Show ("Podaci nisu spašeni zbog pogrešnog unosa.", "Greška pri unosu", MessageBoxButtons::OK, MessageBoxIcon::Warning) ;				 
			 }
	


		 }
private: System::Void c_prezime_Validating(System::Object^  sender, System::ComponentModel::CancelEventArgs^  e) {
			if (c_prezime->Text->Length < 3)
			 {
				 c_prezime->Focus ();
				 toolStripStatusLabel1->ForeColor = Color::Red;
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
				 toolStripStatusLabel1->ForeColor = Color::Red;
				 toolStripStatusLabel1->Text = "Broj liène karte ne smije sadržavati manje od 9 znakova.";
				 errorProvider1->SetError (c_broj_licne_karte, "Prezime ne smije sadržavati manje od 9 znakova.");	
			 }
			else if (c_broj_licne_karte->Text->Length > 9)
			 {
				 c_broj_licne_karte->Focus ();
				 toolStripStatusLabel1->ForeColor = Color::Red;
				 toolStripStatusLabel1->Text = "Broj liène karte ne smije sadržavati više od 9 znakova.";
				 errorProvider1->SetError (c_broj_licne_karte, "Prezime ne smije sadržavati više od 9 znakova.");	
			 }
			else if (c_broj_licne_karte->Text->Length == 9)
			 {
				 wchar_t prvo = c_broj_licne_karte->Text [0];
				 wchar_t drugo = c_broj_licne_karte->Text [1];
				 wchar_t sesto = c_broj_licne_karte->Text [5];
				 wchar_t sedmo = c_broj_licne_karte->Text [6];
				 wchar_t osmo = c_broj_licne_karte->Text [7];
				 wchar_t deveto = c_broj_licne_karte->Text [8];			
				 /*
				 int trece = c_broj_licne_karte->Text [2];
				 int cetvrto = c_broj_licne_karte->Text [3];
				 int peto = c_broj_licne_karte->Text [4];
				 */


				 if ((prvo < '0' || drugo < '0' || sesto < '0' || sedmo < '0' || osmo < '0' || deveto < '0')  || (prvo > '9' || drugo > '9' || sesto > '9' || sedmo > '9' || osmo > '9' || deveto > '9') )
				 {
					c_broj_licne_karte->Focus ();
					toolStripStatusLabel1->ForeColor = Color::Red;
					toolStripStatusLabel1->Text = "Format broja liène karte treba biti: 2 slova + 3 slova + 4 broja.";
					errorProvider1->SetError (c_broj_licne_karte, "Format broja liène karte treba biti: 2 slova + 3 slova + 4 broja.");
				 }
				/*
				 if ((trece || cetvrto || peto) < 'A' || (trece || cetvrto || peto) > 'Z')
				 {
					c_broj_licne_karte->Focus ();
					toolStripStatusLabel1->ForeColor = Color::Red;
					toolStripStatusLabel1->Text = "Treci, cetvrti i peti znak moraju biti slova.";
					errorProvider1->SetError (c_broj_licne_karte, "Treci, cetvrti i peti znak moraju biti slova.");
				 }
				 */
				 else // ovaj mi nesto ne radi
				 {
					errorProvider1->Clear ();
					toolStripStatusLabel1->Text = "";
				 }

			 }
			 			 

		 }
private: System::Void c_PDV_broj_Validating(System::Object^  sender, System::ComponentModel::CancelEventArgs^  e) {
			 if (c_PDV_broj->Text->Length < 12)
			 {
				c_PDV_broj->Focus ();
				toolStripStatusLabel1->ForeColor = Color::Red;
				toolStripStatusLabel1->Text = "PDV broj mora imati 12 cifara.";
				errorProvider1->SetError (c_PDV_broj, "PDV broj mora imati 12 cifara.");
			 }
			 else 
			 {
				errorProvider1->Clear ();
				toolStripStatusLabel1->Text = "";
			 }
		 }
private: System::Void c_naziv_firme_Validating(System::Object^  sender, System::ComponentModel::CancelEventArgs^  e) {
			 if (c_naziv_firme->Text->Length < 3)
			 {
				toolStripStatusLabel1->ForeColor = Color::Red;
				toolStripStatusLabel1->Text = "Naziv firme ne može imati manje od tri slova.";
				errorProvider1->SetError (c_naziv_firme, "Naziv firme ne može imati manje od tri slova.");
				c_naziv_firme->Focus ();
			 }
			 
			//ovdje se mora ispitati da ne bude brojeva u nazivu
			 else 
			 {
				errorProvider1->Clear ();
				toolStripStatusLabel1->Text = "";
			 }
		 }
};
}
