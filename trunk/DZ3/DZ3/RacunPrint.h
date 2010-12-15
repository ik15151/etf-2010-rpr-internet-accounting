#pragma once
#include "Korisnik.h"
#include "Paket.h"
#include "Racun.h"

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace DZ3 {

	/// <summary>
	/// Summary for RacunPrint
	///
	/// WARNING: If you change the name of this class, you will need to change the
	///          'Resource File Name' property for the managed resource compiler tool
	///          associated with all .resx files this class depends on.  Otherwise,
	///          the designers will not be able to interact properly with localized
	///          resources associated with this form.
	/// </summary>
	public ref class RacunPrint : public System::Windows::Forms::Form
	{
	public:
		RacunPrint(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		RacunPrint(Korisnik ^k, Racun ^r, Paket ^p)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			korisnik = k;
			racun = r;
			paket = p;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~RacunPrint()
		{
			if (components)
			{
				delete components;
			}
		}
	private:
		Racun ^racun;
		Korisnik ^korisnik;
		Paket ^paket;

	private: System::Windows::Forms::GroupBox^  groupBox2;
	protected: 
	private: System::Windows::Forms::Label^  r_adresa;
	private: System::Windows::Forms::Label^  r_korisnik;

	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  cijena;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::Label^  r_cijena;
	private: System::Windows::Forms::Label^  r_limit;
	private: System::Windows::Forms::Label^  r_naziv_paketa;
	private: System::Windows::Forms::Label^  r_brzina;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  r_mjesec;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  r_id_racuna;
	private: System::Windows::Forms::GroupBox^  groupBox3;
	private: System::Windows::Forms::Label^  r_modem;



	private: System::Windows::Forms::Label^  label14;

	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::GroupBox^  groupBox4;

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
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->r_adresa = (gcnew System::Windows::Forms::Label());
			this->r_korisnik = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->cijena = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->r_cijena = (gcnew System::Windows::Forms::Label());
			this->r_limit = (gcnew System::Windows::Forms::Label());
			this->r_naziv_paketa = (gcnew System::Windows::Forms::Label());
			this->r_brzina = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->r_mjesec = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->r_id_racuna = (gcnew System::Windows::Forms::Label());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->r_modem = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox2->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->panel1->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->groupBox4->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->r_adresa);
			this->groupBox2->Controls->Add(this->r_korisnik);
			this->groupBox2->Controls->Add(this->label11);
			this->groupBox2->Controls->Add(this->label6);
			this->groupBox2->Location = System::Drawing::Point(13, 185);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(290, 87);
			this->groupBox2->TabIndex = 15;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Podaci o korisniku";
			// 
			// r_adresa
			// 
			this->r_adresa->AutoSize = true;
			this->r_adresa->Location = System::Drawing::Point(164, 54);
			this->r_adresa->Name = L"r_adresa";
			this->r_adresa->Size = System::Drawing::Size(48, 13);
			this->r_adresa->TabIndex = 3;
			this->r_adresa->Text = L"r_adresa";
			// 
			// r_korisnik
			// 
			this->r_korisnik->AutoSize = true;
			this->r_korisnik->Location = System::Drawing::Point(164, 28);
			this->r_korisnik->Name = L"r_korisnik";
			this->r_korisnik->Size = System::Drawing::Size(52, 13);
			this->r_korisnik->TabIndex = 2;
			this->r_korisnik->Text = L"r_korisnik";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(14, 28);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(47, 13);
			this->label11->TabIndex = 1;
			this->label11->Text = L"Korisnik:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(14, 54);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(43, 13);
			this->label6->TabIndex = 0;
			this->label6->Text = L"Adresa:";
			// 
			// cijena
			// 
			this->cijena->AutoSize = true;
			this->cijena->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(238)));
			this->cijena->Location = System::Drawing::Point(177, 488);
			this->cijena->Name = L"cijena";
			this->cijena->Size = System::Drawing::Size(41, 13);
			this->cijena->TabIndex = 14;
			this->cijena->Text = L"cijena";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(238)));
			this->label4->Location = System::Drawing::Point(27, 488);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(75, 13);
			this->label4->TabIndex = 13;
			this->label4->Text = L"NAPLATITI:";
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->r_cijena);
			this->groupBox1->Controls->Add(this->r_limit);
			this->groupBox1->Controls->Add(this->r_naziv_paketa);
			this->groupBox1->Controls->Add(this->r_brzina);
			this->groupBox1->Controls->Add(this->label10);
			this->groupBox1->Controls->Add(this->label9);
			this->groupBox1->Controls->Add(this->label8);
			this->groupBox1->Controls->Add(this->label7);
			this->groupBox1->Location = System::Drawing::Point(12, 278);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(290, 122);
			this->groupBox1->TabIndex = 12;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Internet paket";
			// 
			// r_cijena
			// 
			this->r_cijena->AutoSize = true;
			this->r_cijena->Location = System::Drawing::Point(165, 98);
			this->r_cijena->Name = L"r_cijena";
			this->r_cijena->Size = System::Drawing::Size(44, 13);
			this->r_cijena->TabIndex = 7;
			this->r_cijena->Text = L"r_cijena";
			// 
			// r_limit
			// 
			this->r_limit->AutoSize = true;
			this->r_limit->Location = System::Drawing::Point(165, 52);
			this->r_limit->Name = L"r_limit";
			this->r_limit->Size = System::Drawing::Size(33, 13);
			this->r_limit->TabIndex = 6;
			this->r_limit->Text = L"r_limit";
			// 
			// r_naziv_paketa
			// 
			this->r_naziv_paketa->AutoSize = true;
			this->r_naziv_paketa->Location = System::Drawing::Point(165, 30);
			this->r_naziv_paketa->Name = L"r_naziv_paketa";
			this->r_naziv_paketa->Size = System::Drawing::Size(80, 13);
			this->r_naziv_paketa->TabIndex = 5;
			this->r_naziv_paketa->Text = L"r_naziv_paketa";
			// 
			// r_brzina
			// 
			this->r_brzina->AutoSize = true;
			this->r_brzina->Location = System::Drawing::Point(165, 76);
			this->r_brzina->Name = L"r_brzina";
			this->r_brzina->Size = System::Drawing::Size(44, 13);
			this->r_brzina->TabIndex = 4;
			this->r_brzina->Text = L"r_brzina";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(14, 97);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(39, 13);
			this->label10->TabIndex = 3;
			this->label10->Text = L"Cijena:";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(14, 75);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(95, 13);
			this->label9->TabIndex = 2;
			this->label9->Text = L"Download/upload:";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(14, 52);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(81, 13);
			this->label8->TabIndex = 1;
			this->label8->Text = L"Download limit: ";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(14, 30);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(37, 13);
			this->label7->TabIndex = 0;
			this->label7->Text = L"Naziv:";
			// 
			// panel1
			// 
			this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel1->Controls->Add(this->label13);
			this->panel1->Controls->Add(this->label12);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->r_mjesec);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->label5);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->r_id_racuna);
			this->panel1->Location = System::Drawing::Point(12, 12);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(290, 131);
			this->panel1->TabIndex = 11;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(164, 12);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(35, 13);
			this->label13->TabIndex = 7;
			this->label13->Text = L"Sabily";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(164, 38);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(49, 13);
			this->label12->TabIndex = 6;
			this->label12->Text = L"Dunjaluk";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(14, 12);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(35, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Firma:";
			// 
			// r_mjesec
			// 
			this->r_mjesec->AutoSize = true;
			this->r_mjesec->Location = System::Drawing::Point(164, 96);
			this->r_mjesec->Name = L"r_mjesec";
			this->r_mjesec->Size = System::Drawing::Size(49, 13);
			this->r_mjesec->TabIndex = 5;
			this->r_mjesec->Text = L"r_mjesec";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(14, 38);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(43, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Adresa:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(14, 96);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(47, 13);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Mjesec: ";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(14, 69);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(62, 13);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Raèun broj:";
			// 
			// r_id_racuna
			// 
			this->r_id_racuna->AutoSize = true;
			this->r_id_racuna->Location = System::Drawing::Point(164, 69);
			this->r_id_racuna->Name = L"r_id_racuna";
			this->r_id_racuna->Size = System::Drawing::Size(63, 13);
			this->r_id_racuna->TabIndex = 3;
			this->r_id_racuna->Text = L"r_id_racuna";
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->r_modem);
			this->groupBox3->Controls->Add(this->label14);
			this->groupBox3->Location = System::Drawing::Point(12, 406);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(289, 55);
			this->groupBox3->TabIndex = 16;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Najam opreme";
			// 
			// r_modem
			// 
			this->r_modem->AutoSize = true;
			this->r_modem->Location = System::Drawing::Point(165, 24);
			this->r_modem->Name = L"r_modem";
			this->r_modem->Size = System::Drawing::Size(50, 13);
			this->r_modem->TabIndex = 2;
			this->r_modem->Text = L"r_modem";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(17, 24);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(45, 13);
			this->label14->TabIndex = 0;
			this->label14->Text = L"Modem:";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(169, 37);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 18;
			this->button1->Text = L"Neplaæeno";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &RacunPrint::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(55, 37);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 19;
			this->button2->Text = L"Plaæeno";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &RacunPrint::button2_Click);
			// 
			// groupBox4
			// 
			this->groupBox4->BackColor = System::Drawing::SystemColors::Control;
			this->groupBox4->Controls->Add(this->button2);
			this->groupBox4->Controls->Add(this->button1);
			this->groupBox4->Location = System::Drawing::Point(13, 530);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(288, 76);
			this->groupBox4->TabIndex = 20;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"Plaæanje u banci";
			// 
			// RacunPrint
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(313, 618);
			this->Controls->Add(this->groupBox4);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->cijena);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->panel1);
			this->MaximizeBox = false;
			this->Name = L"RacunPrint";
			this->Text = L"Raèun";
			this->Load += gcnew System::EventHandler(this, &RacunPrint::RacunPrint_Load);
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->groupBox4->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void RacunPrint_Load(System::Object^  sender, System::EventArgs^  e) {
				 r_korisnik->Text = korisnik->Print ();
				 r_adresa->Text = korisnik->Adresa ();
				 if (korisnik->Modem ())
				 {
					 r_modem->Text = "6 KM";
					 cijena->Text = (paket->Cijena () + 6).ToString ();
				 }
				 else
				 {
					 r_modem->Text = "0 KM";
					 cijena->Text = paket->Cijena ().ToString ();
				 }
				 r_naziv_paketa->Text = paket->Naziv_paketa ();
				 r_limit->Text = paket->Download_limit ();
				 r_brzina->Text = paket->Brzina_pristupa_download_upload ();
				 r_cijena->Text = paket->Cijena ().ToString ();
				 r_id_racuna->Text = racun->Id_racuna ().ToString ();
				 r_mjesec->Text = racun->Mjesec ();
				 
			 }
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			 racun->Placeno (true);
			 Close ();
		 }
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			korisnik->Suspenzija (true);
			korisnik->Modem (false);
			Close ();
			
		 }
};
}
