#pragma once

#include "Korisnik.h"
#include "Racun.h"

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace InternetAccounting {

	/// <summary>
	/// Summary for RacunNaplata
	///
	/// WARNING: If you change the name of this class, you will need to change the
	///          'Resource File Name' property for the managed resource compiler tool
	///          associated with all .resx files this class depends on.  Otherwise,
	///          the designers will not be able to interact properly with localized
	///          resources associated with this form.
	/// </summary>
	public ref class RacunNaplata : public System::Windows::Forms::Form
	{
	public:
		RacunNaplata(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

		RacunNaplata(ArrayList ^k, ArrayList ^r)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			korisnici = k;
			racuni = r;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~RacunNaplata()
		{
			if (components)
			{
				delete components;
			}
		}

	private:
		ArrayList ^korisnici, ^racuni;

	private: System::Windows::Forms::ComboBox^  cBoxkorisnici;
	protected: 
	private: System::Windows::Forms::StatusStrip^  statusStrip1;
	private: System::Windows::Forms::ToolStripStatusLabel^  toolStripStatusLabel1;
	private: System::Windows::Forms::ErrorProvider^  errorProvider1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::Label^  label30;
	private: System::Windows::Forms::ComboBox^  t_mjesec;
	private: System::Windows::Forms::Label^  label29;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  vrijeme;
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
			this->cBoxkorisnici = (gcnew System::Windows::Forms::ComboBox());
			this->statusStrip1 = (gcnew System::Windows::Forms::StatusStrip());
			this->toolStripStatusLabel1 = (gcnew System::Windows::Forms::ToolStripStatusLabel());
			this->errorProvider1 = (gcnew System::Windows::Forms::ErrorProvider(this->components));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->vrijeme = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->t_mjesec = (gcnew System::Windows::Forms::ComboBox());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->statusStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->errorProvider1))->BeginInit();
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// cBoxkorisnici
			// 
			this->cBoxkorisnici->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->cBoxkorisnici->FormattingEnabled = true;
			this->cBoxkorisnici->Location = System::Drawing::Point(94, 17);
			this->cBoxkorisnici->Name = L"cBoxkorisnici";
			this->cBoxkorisnici->Size = System::Drawing::Size(147, 21);
			this->cBoxkorisnici->Sorted = true;
			this->cBoxkorisnici->TabIndex = 0;
			this->cBoxkorisnici->SelectedIndexChanged += gcnew System::EventHandler(this, &RacunNaplata::cBoxkorisnici_SelectedIndexChanged);
			// 
			// statusStrip1
			// 
			this->statusStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) {this->toolStripStatusLabel1});
			this->statusStrip1->Location = System::Drawing::Point(0, 191);
			this->statusStrip1->Name = L"statusStrip1";
			this->statusStrip1->Size = System::Drawing::Size(286, 22);
			this->statusStrip1->TabIndex = 2;
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
			// button1
			// 
			this->button1->Location = System::Drawing::Point(199, 153);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Plaĉeno";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &RacunNaplata::button1_Click);
			// 
			// panel1
			// 
			this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel1->Controls->Add(this->vrijeme);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->cBoxkorisnici);
			this->panel1->Controls->Add(this->label30);
			this->panel1->Controls->Add(this->t_mjesec);
			this->panel1->Controls->Add(this->label29);
			this->panel1->Location = System::Drawing::Point(13, 7);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(261, 123);
			this->panel1->TabIndex = 0;
			// 
			// vrijeme
			// 
			this->vrijeme->AutoSize = true;
			this->vrijeme->Location = System::Drawing::Point(94, 55);
			this->vrijeme->Name = L"vrijeme";
			this->vrijeme->Size = System::Drawing::Size(0, 13);
			this->vrijeme->TabIndex = 1;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(10, 55);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(33, 13);
			this->label1->TabIndex = 4;
			this->label1->Text = L"Izdat:";
			// 
			// label30
			// 
			this->label30->AutoSize = true;
			this->label30->Location = System::Drawing::Point(11, 86);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(44, 13);
			this->label30->TabIndex = 5;
			this->label30->Text = L"Mjesec:";
			// 
			// t_mjesec
			// 
			this->t_mjesec->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->t_mjesec->FormattingEnabled = true;
			this->t_mjesec->Items->AddRange(gcnew cli::array< System::Object^  >(12) {L"Januar", L"Februar", L"Mart", L"April", L"Maj", 
				L"Juni", L"Juli", L"August", L"Septembar", L"Oktobar", L"Novembar", L"Decembar"});
			this->t_mjesec->Location = System::Drawing::Point(94, 86);
			this->t_mjesec->Name = L"t_mjesec";
			this->t_mjesec->Size = System::Drawing::Size(147, 21);
			this->t_mjesec->TabIndex = 2;
			// 
			// label29
			// 
			this->label29->AutoSize = true;
			this->label29->Location = System::Drawing::Point(10, 20);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(47, 13);
			this->label29->TabIndex = 3;
			this->label29->Text = L"Korisnik:";
			// 
			// RacunNaplata
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->ClientSize = System::Drawing::Size(286, 213);
			this->Controls->Add(this->statusStrip1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->panel1);
			this->MaximizeBox = false;
			this->Name = L"RacunNaplata";
			this->Text = L"Naplata";
			this->Load += gcnew System::EventHandler(this, &RacunNaplata::RacunNaplata_Load);
			this->statusStrip1->ResumeLayout(false);
			this->statusStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->errorProvider1))->EndInit();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void RacunNaplata_Load(System::Object^  sender, System::EventArgs^  e) {

				 for each (Korisnik ^k in korisnici)
				 {
					 if (k->Suspenzija () == true)
						 cBoxkorisnici->Items->Add (k->Username ());
				 }
			 }
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {

			 if (cBoxkorisnici->SelectedIndex == -1)
			 {
				 toolStripStatusLabel1->Text = "Morate odabrati korisnika.";
				 errorProvider1->SetError (cBoxkorisnici, "Morate odabrati korisnika.");
				 return;
			 }
			 else
			 {
				 toolStripStatusLabel1->Text = "";
				 errorProvider1->Clear ();
			 }
			 if (t_mjesec->SelectedIndex == -1)
			 {
				 toolStripStatusLabel1->Text = "Morate odabrati mjesec.";
				 errorProvider1->SetError (t_mjesec, "Morate odabrati mjesec.");
				 return;
			 }
			 else
			 {
				 toolStripStatusLabel1->Text = "";
				 errorProvider1->Clear ();
			 }

			 bool placeno = false;
			 for each (Racun ^r in racuni)
			 {
				 if (r->Username () == cBoxkorisnici->SelectedItem->ToString () && r->Mjesec () == t_mjesec->SelectedItem->ToString ())
				 {
					 r->Placeno (true);
					 for each (Korisnik ^k in korisnici)
					 {
						 if (k->Username () == cBoxkorisnici->SelectedItem->ToString ())
							 k->Suspenzija (false);
					 }
					 placeno = true;
					 cBoxkorisnici->Items->RemoveAt (cBoxkorisnici->SelectedIndex);
					 cBoxkorisnici->SelectedIndex = -1;
					 t_mjesec->SelectedIndex = -1;
					 toolStripStatusLabel1->Text = "";
					 vrijeme->Text = "";
					 errorProvider1->Clear ();
					 return;
				 }
			 }

			 if (!placeno)
			 { 
				 toolStripStatusLabel1->Text = "Nije odabran odgovarajuĉi mjesec.";
				 errorProvider1->SetError (t_mjesec, "Nije odabran odgovarajuĉi mjesec.");
				 return;
			 }
		 }
		 
private: System::Void cBoxkorisnici_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
			 for each (Racun ^r in racuni)
				 if (r->Username () == cBoxkorisnici->SelectedItem->ToString ())
				 {
					 vrijeme->Text = r->getVrijeme ();
					 return;
				 }
			  
		 }
};
}
