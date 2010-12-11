#pragma once
#include "Korisnik.h"
#include "Racun.h"

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace DZ3 {

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


	private: System::Windows::Forms::ComboBox^  t_mjesec;
	private: System::Windows::Forms::Label^  label29;
	private: System::Windows::Forms::Label^  label30;
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::Button^  button1;

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
			this->cBoxkorisnici = (gcnew System::Windows::Forms::ComboBox());
			this->t_mjesec = (gcnew System::Windows::Forms::ComboBox());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// cBoxkorisnici
			// 
			this->cBoxkorisnici->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->cBoxkorisnici->FormattingEnabled = true;
			this->cBoxkorisnici->Location = System::Drawing::Point(68, 17);
			this->cBoxkorisnici->Name = L"cBoxkorisnici";
			this->cBoxkorisnici->Size = System::Drawing::Size(169, 21);
			this->cBoxkorisnici->Sorted = true;
			this->cBoxkorisnici->TabIndex = 0;
			// 
			// t_mjesec
			// 
			this->t_mjesec->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->t_mjesec->FormattingEnabled = true;
			this->t_mjesec->Items->AddRange(gcnew cli::array< System::Object^  >(12) {L"Januar", L"Februar", L"Mart", L"April", L"Maj", 
				L"Juni", L"Juli", L"August", L"Septembar", L"Oktobar", L"Novembar", L"Decembar"});
			this->t_mjesec->Location = System::Drawing::Point(67, 66);
			this->t_mjesec->Name = L"t_mjesec";
			this->t_mjesec->Size = System::Drawing::Size(169, 21);
			this->t_mjesec->TabIndex = 1;
			// 
			// label29
			// 
			this->label29->AutoSize = true;
			this->label29->Location = System::Drawing::Point(10, 20);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(47, 13);
			this->label29->TabIndex = 11;
			this->label29->Text = L"Korisnik:";
			// 
			// label30
			// 
			this->label30->AutoSize = true;
			this->label30->Location = System::Drawing::Point(10, 74);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(44, 13);
			this->label30->TabIndex = 12;
			this->label30->Text = L"Mjesec:";
			// 
			// panel1
			// 
			this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel1->Controls->Add(this->cBoxkorisnici);
			this->panel1->Controls->Add(this->label30);
			this->panel1->Controls->Add(this->t_mjesec);
			this->panel1->Controls->Add(this->label29);
			this->panel1->Location = System::Drawing::Point(13, 13);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(247, 123);
			this->panel1->TabIndex = 9;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(185, 161);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 4;
			this->button1->Text = L"Plaæeno";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &RacunNaplata::button1_Click);
			// 
			// RacunNaplata
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(274, 291);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->panel1);
			this->MaximizeBox = false;
			this->Name = L"RacunNaplata";
			this->Text = L"Naplata";
			this->Load += gcnew System::EventHandler(this, &RacunNaplata::RacunNaplata_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);

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
			 bool placeno = false;
			 for each (Racun ^r in racuni)
			 {
				 if (r->Username () == cBoxkorisnici->SelectedItem->ToString ())
				 {
					 r->Placeno (true);
					 for each (Korisnik ^k in korisnici)
					 {
						 if (k->Username () == cBoxkorisnici->SelectedItem->ToString ())
							 k->Suspenzija (false);
					 }
					 placeno = true;
					 cBoxkorisnici->SelectedIndex = -1;
					 t_mjesec->SelectedIndex = -1;
					 //treba izbaciti orisnika koji je platio
					 return;
				 }
			 }
			// mora se uraditi Exception kad nije izabran korisnik ili mjesec

			 if (!placeno)
				 MessageBox::Show ("Greška pri ažuriranju podataka.", "Greška", MessageBoxButtons::OK, MessageBoxIcon::Warning);


		 }
};
}
