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
	private: System::Windows::Forms::TextBox^  c_PDV_broj;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  c_naziv_firme;
	private: System::Windows::Forms::StatusStrip^  statusStrip1;

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
			this->tabControl2 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->c_broj_licne_karte = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->c_prezime = (gcnew System::Windows::Forms::TextBox());
			this->c_ime = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->c_PDV_broj = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->c_naziv_firme = (gcnew System::Windows::Forms::TextBox());
			this->statusStrip1 = (gcnew System::Windows::Forms::StatusStrip());
			this->groupBox5->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->tabControl2->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox5
			// 
			this->groupBox5->BackColor = System::Drawing::Color::Transparent;
			this->groupBox5->Controls->Add(this->c_chBox_modem);
			this->groupBox5->Location = System::Drawing::Point(16, 440);
			this->groupBox5->Name = L"groupBox5";
			this->groupBox5->Size = System::Drawing::Size(312, 56);
			this->groupBox5->TabIndex = 97;
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
			this->groupBox2->Location = System::Drawing::Point(16, 310);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(312, 124);
			this->groupBox2->TabIndex = 96;
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
			this->button5->Location = System::Drawing::Point(253, 509);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(75, 23);
			this->button5->TabIndex = 99;
			this->button5->Text = L"Izaði";
			this->button5->UseVisualStyleBackColor = true;
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::Color::Transparent;
			this->groupBox1->Controls->Add(this->c_adresa);
			this->groupBox1->Controls->Add(this->Prezime);
			this->groupBox1->Controls->Add(this->Ime);
			this->groupBox1->Controls->Add(this->c_telefon);
			this->groupBox1->Location = System::Drawing::Point(16, 209);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(312, 95);
			this->groupBox1->TabIndex = 95;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Kontaktni podaci";
			this->groupBox1->Enter += gcnew System::EventHandler(this, &UnosKorisnika::groupBox1_Enter);
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
			this->Unesi->Location = System::Drawing::Point(164, 509);
			this->Unesi->Name = L"Unesi";
			this->Unesi->Size = System::Drawing::Size(75, 23);
			this->Unesi->TabIndex = 98;
			this->Unesi->Text = L"Unesi";
			this->Unesi->UseVisualStyleBackColor = true;
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
			this->tabControl2->Size = System::Drawing::Size(316, 191);
			this->tabControl2->TabIndex = 94;
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
			this->tabPage1->Size = System::Drawing::Size(308, 165);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Osoba";
			// 
			// c_broj_licne_karte
			// 
			this->c_broj_licne_karte->Location = System::Drawing::Point(111, 106);
			this->c_broj_licne_karte->Name = L"c_broj_licne_karte";
			this->c_broj_licne_karte->Size = System::Drawing::Size(172, 20);
			this->c_broj_licne_karte->TabIndex = 5;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(19, 113);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(80, 13);
			this->label8->TabIndex = 13;
			this->label8->Text = L"Broj liène karte:";
			// 
			// c_prezime
			// 
			this->c_prezime->Location = System::Drawing::Point(111, 63);
			this->c_prezime->Name = L"c_prezime";
			this->c_prezime->Size = System::Drawing::Size(172, 20);
			this->c_prezime->TabIndex = 2;
			// 
			// c_ime
			// 
			this->c_ime->Location = System::Drawing::Point(111, 26);
			this->c_ime->Name = L"c_ime";
			this->c_ime->Size = System::Drawing::Size(172, 20);
			this->c_ime->TabIndex = 1;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(19, 70);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(47, 13);
			this->label3->TabIndex = 10;
			this->label3->Text = L"Prezime:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(19, 33);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(27, 13);
			this->label2->TabIndex = 9;
			this->label2->Text = L"Ime:";
			// 
			// tabPage2
			// 
			this->tabPage2->BackColor = System::Drawing::Color::White;
			this->tabPage2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->tabPage2->Controls->Add(this->label9);
			this->tabPage2->Controls->Add(this->c_PDV_broj);
			this->tabPage2->Controls->Add(this->label1);
			this->tabPage2->Controls->Add(this->c_naziv_firme);
			this->tabPage2->Location = System::Drawing::Point(4, 22);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(330, 165);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Firma";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(19, 100);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(52, 13);
			this->label9->TabIndex = 10;
			this->label9->Text = L"PDV broj:";
			// 
			// c_PDV_broj
			// 
			this->c_PDV_broj->Location = System::Drawing::Point(111, 93);
			this->c_PDV_broj->Name = L"c_PDV_broj";
			this->c_PDV_broj->Size = System::Drawing::Size(172, 20);
			this->c_PDV_broj->TabIndex = 9;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(19, 53);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(37, 13);
			this->label1->TabIndex = 8;
			this->label1->Text = L"Naziv:";
			// 
			// c_naziv_firme
			// 
			this->c_naziv_firme->Location = System::Drawing::Point(111, 46);
			this->c_naziv_firme->Name = L"c_naziv_firme";
			this->c_naziv_firme->Size = System::Drawing::Size(172, 20);
			this->c_naziv_firme->TabIndex = 7;
			// 
			// statusStrip1
			// 
			this->statusStrip1->Location = System::Drawing::Point(0, 546);
			this->statusStrip1->Name = L"statusStrip1";
			this->statusStrip1->Size = System::Drawing::Size(342, 22);
			this->statusStrip1->TabIndex = 100;
			this->statusStrip1->Text = L"statusStrip1";
			// 
			// UnosKorisnika
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(342, 568);
			this->Controls->Add(this->statusStrip1);
			this->Controls->Add(this->groupBox5);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->Unesi);
			this->Controls->Add(this->tabControl2);
			this->MaximizeBox = false;
			this->Name = L"UnosKorisnika";
			this->Text = L"Unos novog korisnika";
			this->groupBox5->ResumeLayout(false);
			this->groupBox5->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->tabControl2->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void groupBox1_Enter(System::Object^  sender, System::EventArgs^  e) {
			 }
};
}
