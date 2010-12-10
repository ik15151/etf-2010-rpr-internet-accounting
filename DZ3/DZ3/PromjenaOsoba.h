#pragma once
#include "KorisnikOsoba.h"

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

		/*
		PromjenaOsoba(KorisnikOsoba ^k)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			korisnik = gcnew KorisnikOsoba ();
			korisnik = k;	
			
		}
		*/
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
		//KorisnikOsoba ^korisnik;

	private: System::Windows::Forms::GroupBox^  groupBox5;
	protected: 
	private: System::Windows::Forms::CheckBox^  c_chBox_modem;
	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::ComboBox^  c_CBox_paket;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::TextBox^  c_username;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::TextBox^  c_password;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::TextBox^  c_adresa;
	private: System::Windows::Forms::Label^  Prezime;
	private: System::Windows::Forms::Label^  Ime;
	private: System::Windows::Forms::TextBox^  c_telefon;
	private: System::Windows::Forms::Button^  Unesi;
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
	private: System::Windows::Forms::RadioButton^  p_suspenzija;


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
			this->groupBox5 = (gcnew System::Windows::Forms::GroupBox());
			this->c_chBox_modem = (gcnew System::Windows::Forms::CheckBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->c_CBox_paket = (gcnew System::Windows::Forms::ComboBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->c_username = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->c_password = (gcnew System::Windows::Forms::TextBox());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->c_adresa = (gcnew System::Windows::Forms::TextBox());
			this->Prezime = (gcnew System::Windows::Forms::Label());
			this->Ime = (gcnew System::Windows::Forms::Label());
			this->c_telefon = (gcnew System::Windows::Forms::TextBox());
			this->Unesi = (gcnew System::Windows::Forms::Button());
			this->groupbox3 = (gcnew System::Windows::Forms::GroupBox());
			this->c_broj_licne_karte = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->c_prezime = (gcnew System::Windows::Forms::TextBox());
			this->c_ime = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->p_mirovanje = (gcnew System::Windows::Forms::RadioButton());
			this->p_suspenzija = (gcnew System::Windows::Forms::RadioButton());
			this->statusStrip1 = (gcnew System::Windows::Forms::StatusStrip());
			this->toolStripStatusLabel1 = (gcnew System::Windows::Forms::ToolStripStatusLabel());
			this->groupBox5->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->groupbox3->SuspendLayout();
			this->groupBox4->SuspendLayout();
			this->statusStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox5
			// 
			this->groupBox5->BackColor = System::Drawing::Color::Transparent;
			this->groupBox5->Controls->Add(this->c_chBox_modem);
			this->groupBox5->Location = System::Drawing::Point(13, 384);
			this->groupBox5->Name = L"groupBox5";
			this->groupBox5->Size = System::Drawing::Size(305, 56);
			this->groupBox5->TabIndex = 102;
			this->groupBox5->TabStop = false;
			this->groupBox5->Text = L"Najam opreme";
			// 
			// c_chBox_modem
			// 
			this->c_chBox_modem->AutoSize = true;
			this->c_chBox_modem->Location = System::Drawing::Point(111, 19);
			this->c_chBox_modem->Name = L"c_chBox_modem";
			this->c_chBox_modem->Size = System::Drawing::Size(61, 17);
			this->c_chBox_modem->TabIndex = 11;
			this->c_chBox_modem->Text = L"Modem";
			this->c_chBox_modem->UseVisualStyleBackColor = true;
			// 
			// groupBox2
			// 
			this->groupBox2->BackColor = System::Drawing::Color::Transparent;
			this->groupBox2->Controls->Add(this->c_CBox_paket);
			this->groupBox2->Controls->Add(this->label6);
			this->groupBox2->Controls->Add(this->c_username);
			this->groupBox2->Controls->Add(this->label4);
			this->groupBox2->Controls->Add(this->label7);
			this->groupBox2->Controls->Add(this->c_password);
			this->groupBox2->Location = System::Drawing::Point(13, 254);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(305, 124);
			this->groupBox2->TabIndex = 101;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Pristupni podaci";
			// 
			// c_CBox_paket
			// 
			this->c_CBox_paket->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->c_CBox_paket->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->c_CBox_paket->FormattingEnabled = true;
			this->c_CBox_paket->Location = System::Drawing::Point(111, 22);
			this->c_CBox_paket->Name = L"c_CBox_paket";
			this->c_CBox_paket->Size = System::Drawing::Size(172, 21);
			this->c_CBox_paket->TabIndex = 8;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(19, 62);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(58, 13);
			this->label6->TabIndex = 20;
			this->label6->Text = L"Username:";
			// 
			// c_username
			// 
			this->c_username->Location = System::Drawing::Point(111, 55);
			this->c_username->Name = L"c_username";
			this->c_username->Size = System::Drawing::Size(172, 20);
			this->c_username->TabIndex = 9;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(19, 30);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(38, 13);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Paket:";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(19, 95);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(56, 13);
			this->label7->TabIndex = 14;
			this->label7->Text = L"Password:";
			// 
			// c_password
			// 
			this->c_password->Location = System::Drawing::Point(111, 88);
			this->c_password->Name = L"c_password";
			this->c_password->PasswordChar = '*';
			this->c_password->Size = System::Drawing::Size(172, 20);
			this->c_password->TabIndex = 10;
			// 
			// button5
			// 
			this->button5->AutoSize = true;
			this->button5->Location = System::Drawing::Point(243, 530);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(75, 23);
			this->button5->TabIndex = 104;
			this->button5->Text = L"Iza�i";
			this->button5->UseVisualStyleBackColor = true;
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::Color::Transparent;
			this->groupBox1->Controls->Add(this->c_adresa);
			this->groupBox1->Controls->Add(this->Prezime);
			this->groupBox1->Controls->Add(this->Ime);
			this->groupBox1->Controls->Add(this->c_telefon);
			this->groupBox1->Location = System::Drawing::Point(13, 153);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(305, 95);
			this->groupBox1->TabIndex = 100;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Kontaktni podaci";
			// 
			// c_adresa
			// 
			this->c_adresa->Location = System::Drawing::Point(111, 20);
			this->c_adresa->Name = L"c_adresa";
			this->c_adresa->Size = System::Drawing::Size(172, 20);
			this->c_adresa->TabIndex = 6;
			// 
			// Prezime
			// 
			this->Prezime->AutoSize = true;
			this->Prezime->Location = System::Drawing::Point(19, 62);
			this->Prezime->Name = L"Prezime";
			this->Prezime->Size = System::Drawing::Size(46, 13);
			this->Prezime->TabIndex = 17;
			this->Prezime->Text = L"Telefon:";
			// 
			// Ime
			// 
			this->Ime->AutoSize = true;
			this->Ime->Location = System::Drawing::Point(19, 27);
			this->Ime->Name = L"Ime";
			this->Ime->Size = System::Drawing::Size(43, 13);
			this->Ime->TabIndex = 15;
			this->Ime->Text = L"Adresa:";
			// 
			// c_telefon
			// 
			this->c_telefon->Location = System::Drawing::Point(111, 55);
			this->c_telefon->Name = L"c_telefon";
			this->c_telefon->Size = System::Drawing::Size(172, 20);
			this->c_telefon->TabIndex = 7;
			// 
			// Unesi
			// 
			this->Unesi->AutoSize = true;
			this->Unesi->Location = System::Drawing::Point(162, 530);
			this->Unesi->Name = L"Unesi";
			this->Unesi->Size = System::Drawing::Size(75, 23);
			this->Unesi->TabIndex = 103;
			this->Unesi->Text = L"Unesi";
			this->Unesi->UseVisualStyleBackColor = true;
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
			this->groupbox3->Size = System::Drawing::Size(304, 134);
			this->groupbox3->TabIndex = 105;
			this->groupbox3->TabStop = false;
			this->groupbox3->Text = L"Osnovni podaci";
			// 
			// c_broj_licne_karte
			// 
			this->c_broj_licne_karte->Location = System::Drawing::Point(110, 101);
			this->c_broj_licne_karte->Name = L"c_broj_licne_karte";
			this->c_broj_licne_karte->Size = System::Drawing::Size(172, 20);
			this->c_broj_licne_karte->TabIndex = 16;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(18, 108);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(80, 13);
			this->label8->TabIndex = 19;
			this->label8->Text = L"Broj li�ne karte:";
			// 
			// c_prezime
			// 
			this->c_prezime->Location = System::Drawing::Point(110, 58);
			this->c_prezime->Name = L"c_prezime";
			this->c_prezime->Size = System::Drawing::Size(172, 20);
			this->c_prezime->TabIndex = 15;
			// 
			// c_ime
			// 
			this->c_ime->Location = System::Drawing::Point(110, 21);
			this->c_ime->Name = L"c_ime";
			this->c_ime->Size = System::Drawing::Size(172, 20);
			this->c_ime->TabIndex = 14;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(18, 65);
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
			this->groupBox4->Controls->Add(this->p_suspenzija);
			this->groupBox4->Location = System::Drawing::Point(13, 446);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(122, 82);
			this->groupBox4->TabIndex = 106;
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
			// p_suspenzija
			// 
			this->p_suspenzija->AutoSize = true;
			this->p_suspenzija->Location = System::Drawing::Point(23, 49);
			this->p_suspenzija->Name = L"p_suspenzija";
			this->p_suspenzija->Size = System::Drawing::Size(61, 17);
			this->p_suspenzija->TabIndex = 6;
			this->p_suspenzija->TabStop = true;
			this->p_suspenzija->Text = L"Aktivan";
			this->p_suspenzija->UseVisualStyleBackColor = true;
			// 
			// statusStrip1
			// 
			this->statusStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) {this->toolStripStatusLabel1});
			this->statusStrip1->Location = System::Drawing::Point(0, 573);
			this->statusStrip1->Name = L"statusStrip1";
			this->statusStrip1->Size = System::Drawing::Size(330, 22);
			this->statusStrip1->TabIndex = 107;
			this->statusStrip1->Text = L"statusStrip1";
			// 
			// toolStripStatusLabel1
			// 
			this->toolStripStatusLabel1->Name = L"toolStripStatusLabel1";
			this->toolStripStatusLabel1->Size = System::Drawing::Size(0, 17);
			// 
			// PromjenaOsoba
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(330, 595);
			this->Controls->Add(this->statusStrip1);
			this->Controls->Add(this->groupBox4);
			this->Controls->Add(this->groupbox3);
			this->Controls->Add(this->groupBox5);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->Unesi);
			this->MaximizeBox = false;
			this->Name = L"PromjenaOsoba";
			this->Text = L"Promjena podataka o fizi�kom licu";
			this->groupBox5->ResumeLayout(false);
			this->groupBox5->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupbox3->ResumeLayout(false);
			this->groupbox3->PerformLayout();
			this->groupBox4->ResumeLayout(false);
			this->groupBox4->PerformLayout();
			this->statusStrip1->ResumeLayout(false);
			this->statusStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
