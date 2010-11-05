#pragma once
#include "Racun.h"
#include "Paket.h"
#include "Korisnik.h"

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace DZ2Proba {

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

		RacunPrint(Racun ^r, Paket ^p, Korisnik ^k)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			r_id_racuna->Text = (r->Id_racuna ()).ToString ();
			r_mjesec->Text = r->Mjesec ();
			r_naziv_paketa->Text = p->Naziv_paketa ();
			r_limit->Text = p->Download_limit ();
			r_brzina->Text = p->Brzina_pristupa_download_upload ();
			r_cijena->Text = (p->Cijena ()).ToString ();
			cijena->Text = (p->Cijena ()).ToString ();
			r_username->Text = k->Username ();
			r_adresa->Text = k->Adresa ();


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
	private: System::Windows::Forms::Label^  label1;
	protected: 
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  r_id_racuna;

	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  r_mjesec;

	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Label^  r_brzina;

	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  r_cijena;

	private: System::Windows::Forms::Label^  r_limit;

	private: System::Windows::Forms::Label^  r_naziv_paketa;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  cijena;
	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::Label^  r_adresa;

	private: System::Windows::Forms::Label^  r_username;

	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label6;


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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->r_id_racuna = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->r_mjesec = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->r_cijena = (gcnew System::Windows::Forms::Label());
			this->r_limit = (gcnew System::Windows::Forms::Label());
			this->r_naziv_paketa = (gcnew System::Windows::Forms::Label());
			this->r_brzina = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->cijena = (gcnew System::Windows::Forms::Label());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->r_adresa = (gcnew System::Windows::Forms::Label());
			this->r_username = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->SuspendLayout();
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
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(14, 38);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(43, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Adresa:";
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
			this->r_id_racuna->Location = System::Drawing::Point(186, 69);
			this->r_id_racuna->Name = L"r_id_racuna";
			this->r_id_racuna->Size = System::Drawing::Size(63, 13);
			this->r_id_racuna->TabIndex = 3;
			this->r_id_racuna->Text = L"r_id_racuna";
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
			// r_mjesec
			// 
			this->r_mjesec->AutoSize = true;
			this->r_mjesec->Location = System::Drawing::Point(186, 96);
			this->r_mjesec->Name = L"r_mjesec";
			this->r_mjesec->Size = System::Drawing::Size(49, 13);
			this->r_mjesec->TabIndex = 5;
			this->r_mjesec->Text = L"r_mjesec";
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
			this->panel1->TabIndex = 6;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(186, 12);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(27, 13);
			this->label13->TabIndex = 7;
			this->label13->Text = L"ETF";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(186, 38);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(84, 13);
			this->label12->TabIndex = 6;
			this->label12->Text = L"Zmaja od Bosne";
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
			this->groupBox1->Location = System::Drawing::Point(13, 278);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(290, 122);
			this->groupBox1->TabIndex = 7;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Internet paket";
			// 
			// r_cijena
			// 
			this->r_cijena->AutoSize = true;
			this->r_cijena->Location = System::Drawing::Point(189, 97);
			this->r_cijena->Name = L"r_cijena";
			this->r_cijena->Size = System::Drawing::Size(44, 13);
			this->r_cijena->TabIndex = 7;
			this->r_cijena->Text = L"r_cijena";
			// 
			// r_limit
			// 
			this->r_limit->AutoSize = true;
			this->r_limit->Location = System::Drawing::Point(189, 51);
			this->r_limit->Name = L"r_limit";
			this->r_limit->Size = System::Drawing::Size(33, 13);
			this->r_limit->TabIndex = 6;
			this->r_limit->Text = L"r_limit";
			// 
			// r_naziv_paketa
			// 
			this->r_naziv_paketa->AutoSize = true;
			this->r_naziv_paketa->Location = System::Drawing::Point(189, 29);
			this->r_naziv_paketa->Name = L"r_naziv_paketa";
			this->r_naziv_paketa->Size = System::Drawing::Size(80, 13);
			this->r_naziv_paketa->TabIndex = 5;
			this->r_naziv_paketa->Text = L"r_naziv_paketa";
			// 
			// r_brzina
			// 
			this->r_brzina->AutoSize = true;
			this->r_brzina->Location = System::Drawing::Point(189, 75);
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
			this->label9->Size = System::Drawing::Size(165, 13);
			this->label9->TabIndex = 2;
			this->label9->Text = L"Brzina pristupa download/upload:";
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
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(238)));
			this->label4->Location = System::Drawing::Point(27, 472);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(75, 13);
			this->label4->TabIndex = 8;
			this->label4->Text = L"NAPLATITI:";
			// 
			// cijena
			// 
			this->cijena->AutoSize = true;
			this->cijena->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(238)));
			this->cijena->Location = System::Drawing::Point(199, 471);
			this->cijena->Name = L"cijena";
			this->cijena->Size = System::Drawing::Size(41, 13);
			this->cijena->TabIndex = 9;
			this->cijena->Text = L"cijena";
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->r_adresa);
			this->groupBox2->Controls->Add(this->r_username);
			this->groupBox2->Controls->Add(this->label11);
			this->groupBox2->Controls->Add(this->label6);
			this->groupBox2->Location = System::Drawing::Point(13, 185);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(290, 87);
			this->groupBox2->TabIndex = 10;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Korisnik";
			// 
			// r_adresa
			// 
			this->r_adresa->AutoSize = true;
			this->r_adresa->Location = System::Drawing::Point(189, 54);
			this->r_adresa->Name = L"r_adresa";
			this->r_adresa->Size = System::Drawing::Size(48, 13);
			this->r_adresa->TabIndex = 3;
			this->r_adresa->Text = L"r_adresa";
			// 
			// r_username
			// 
			this->r_username->AutoSize = true;
			this->r_username->Location = System::Drawing::Point(189, 28);
			this->r_username->Name = L"r_username";
			this->r_username->Size = System::Drawing::Size(62, 13);
			this->r_username->TabIndex = 2;
			this->r_username->Text = L"r_username";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(14, 28);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(58, 13);
			this->label11->TabIndex = 1;
			this->label11->Text = L"Username:";
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
			// RacunPrint
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->ClientSize = System::Drawing::Size(315, 564);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->cijena);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->panel1);
			this->Name = L"RacunPrint";
			this->Text = L"Racun";
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
