#pragma once
#include "PromjenaOsoba.h"
#include "PromjenaFirma.h"
#include "Korisnik.h"
#include "KorisnikOsoba.h"
#include "KorisnikFirma.h"


using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace DZ3 {

	/// <summary>
	/// Summary for Pretraga
	///
	/// WARNING: If you change the name of this class, you will need to change the
	///          'Resource File Name' property for the managed resource compiler tool
	///          associated with all .resx files this class depends on.  Otherwise,
	///          the designers will not be able to interact properly with localized
	///          resources associated with this form.
	/// </summary>
	public ref class Pretraga : public System::Windows::Forms::Form
	{
	public:
		Pretraga(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

		Pretraga(ArrayList ^k, ArrayList ^r)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			korisnici = k;
			//racuni = r;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Pretraga()
		{
			if (components)
			{
				delete components;
			}
		}

	private:
		ArrayList ^korisnici;
	private: System::Windows::Forms::ListView^  listViewOsoba;
			 //ArrayList ^racuni;



	private: System::Windows::Forms::ListView^  listViewFirma;


	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;

	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::ComboBox^  cbx_pretrazivanje;
	private: System::Windows::Forms::Label^  label23;
	private: System::Windows::Forms::TextBox^  unos_pretrazivanje;
	private: System::Windows::Forms::Label^  label24;
	private: System::Windows::Forms::ColumnHeader^  columnHeader22;
	private: System::Windows::Forms::ColumnHeader^  columnHeader23;
	private: System::Windows::Forms::ColumnHeader^  columnHeader24;
	private: System::Windows::Forms::ColumnHeader^  columnHeader25;
	private: System::Windows::Forms::ColumnHeader^  columnHeader26;
	private: System::Windows::Forms::ColumnHeader^  columnHeader27;
	private: System::Windows::Forms::ColumnHeader^  columnHeader28;
	private: System::Windows::Forms::ColumnHeader^  columnHeader29;
	private: System::Windows::Forms::ColumnHeader^  columnHeader30;
	private: System::Windows::Forms::ColumnHeader^  columnHeader1;
	private: System::Windows::Forms::ColumnHeader^  columnHeader2;
	private: System::Windows::Forms::ColumnHeader^  columnHeader3;
	private: System::Windows::Forms::ColumnHeader^  columnHeader4;
	private: System::Windows::Forms::ColumnHeader^  columnHeader5;
	private: System::Windows::Forms::ColumnHeader^  columnHeader6;
	private: System::Windows::Forms::ColumnHeader^  columnHeader7;
	private: System::Windows::Forms::ColumnHeader^  columnHeader8;






























	protected: 

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
			this->listViewOsoba = (gcnew System::Windows::Forms::ListView());
			this->listViewFirma = (gcnew System::Windows::Forms::ListView());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->cbx_pretrazivanje = (gcnew System::Windows::Forms::ComboBox());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->unos_pretrazivanje = (gcnew System::Windows::Forms::TextBox());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->columnHeader22 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader23 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader24 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader25 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader26 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader27 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader28 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader29 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader30 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader1 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader2 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader3 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader4 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader5 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader6 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader7 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader8 = (gcnew System::Windows::Forms::ColumnHeader());
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// listViewOsoba
			// 
			this->listViewOsoba->Activation = System::Windows::Forms::ItemActivation::OneClick;
			this->listViewOsoba->AllowColumnReorder = true;
			this->listViewOsoba->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(9) {this->columnHeader22, 
				this->columnHeader23, this->columnHeader24, this->columnHeader25, this->columnHeader26, this->columnHeader27, this->columnHeader28, 
				this->columnHeader29, this->columnHeader30});
			this->listViewOsoba->FullRowSelect = true;
			this->listViewOsoba->GridLines = true;
			this->listViewOsoba->Location = System::Drawing::Point(18, 109);
			this->listViewOsoba->MultiSelect = false;
			this->listViewOsoba->Name = L"listViewOsoba";
			this->listViewOsoba->Size = System::Drawing::Size(654, 213);
			this->listViewOsoba->Sorting = System::Windows::Forms::SortOrder::Descending;
			this->listViewOsoba->TabIndex = 0;
			this->listViewOsoba->UseCompatibleStateImageBehavior = false;
			this->listViewOsoba->View = System::Windows::Forms::View::Details;
			this->listViewOsoba->ItemActivate += gcnew System::EventHandler(this, &Pretraga::listViewOsoba_ItemActivate);
			// 
			// listViewFirma
			// 
			this->listViewFirma->AllowColumnReorder = true;
			this->listViewFirma->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(8) {this->columnHeader1, 
				this->columnHeader2, this->columnHeader3, this->columnHeader4, this->columnHeader5, this->columnHeader6, this->columnHeader7, 
				this->columnHeader8});
			this->listViewFirma->FullRowSelect = true;
			this->listViewFirma->GridLines = true;
			this->listViewFirma->Location = System::Drawing::Point(18, 347);
			this->listViewFirma->MultiSelect = false;
			this->listViewFirma->Name = L"listViewFirma";
			this->listViewFirma->Size = System::Drawing::Size(657, 214);
			this->listViewFirma->TabIndex = 1;
			this->listViewFirma->UseCompatibleStateImageBehavior = false;
			this->listViewFirma->View = System::Windows::Forms::View::Details;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 93);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(174, 13);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Pregled informacija o fizièkim licima:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(12, 331);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(177, 13);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Pregled informacija o pravnim licima:";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(557, 19);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(84, 23);
			this->button2->TabIndex = 36;
			this->button2->Text = L"Pretraži";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Pretraga::button2_Click);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::White;
			this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel1->Controls->Add(this->button2);
			this->panel1->Controls->Add(this->cbx_pretrazivanje);
			this->panel1->Controls->Add(this->label23);
			this->panel1->Controls->Add(this->unos_pretrazivanje);
			this->panel1->Controls->Add(this->label24);
			this->panel1->Location = System::Drawing::Point(12, 12);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(657, 64);
			this->panel1->TabIndex = 37;
			// 
			// cbx_pretrazivanje
			// 
			this->cbx_pretrazivanje->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->cbx_pretrazivanje->FormattingEnabled = true;
			this->cbx_pretrazivanje->Items->AddRange(gcnew cli::array< System::Object^  >(6) {L"Username", L"Ime osobe", L"Naziv firme", 
				L"Aktivni raèuni", L"Zamrznuti raèuni", L"Suspendovani raèuni"});
			this->cbx_pretrazivanje->Location = System::Drawing::Point(106, 19);
			this->cbx_pretrazivanje->Name = L"cbx_pretrazivanje";
			this->cbx_pretrazivanje->Size = System::Drawing::Size(157, 21);
			this->cbx_pretrazivanje->TabIndex = 1;
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Location = System::Drawing::Point(296, 27);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(37, 13);
			this->label23->TabIndex = 26;
			this->label23->Text = L"Unesi:";
			// 
			// unos_pretrazivanje
			// 
			this->unos_pretrazivanje->AllowDrop = true;
			this->unos_pretrazivanje->Location = System::Drawing::Point(339, 19);
			this->unos_pretrazivanje->Name = L"unos_pretrazivanje";
			this->unos_pretrazivanje->Size = System::Drawing::Size(173, 20);
			this->unos_pretrazivanje->TabIndex = 2;
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Location = System::Drawing::Point(14, 22);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(86, 13);
			this->label24->TabIndex = 25;
			this->label24->Text = L"Pretraživanje po:";
			// 
			// columnHeader22
			// 
			this->columnHeader22->Text = L"Username";
			this->columnHeader22->Width = 80;
			// 
			// columnHeader23
			// 
			this->columnHeader23->Text = L"Ime";
			this->columnHeader23->Width = 71;
			// 
			// columnHeader24
			// 
			this->columnHeader24->Text = L"Prezime";
			this->columnHeader24->Width = 78;
			// 
			// columnHeader25
			// 
			this->columnHeader25->Text = L"Broj liène karte";
			this->columnHeader25->Width = 85;
			// 
			// columnHeader26
			// 
			this->columnHeader26->Text = L"Adresa";
			// 
			// columnHeader27
			// 
			this->columnHeader27->Text = L"Telefon";
			// 
			// columnHeader28
			// 
			this->columnHeader28->Text = L"Paket";
			// 
			// columnHeader29
			// 
			this->columnHeader29->Text = L"Password";
			// 
			// columnHeader30
			// 
			this->columnHeader30->Text = L"Modem";
			this->columnHeader30->Width = 80;
			// 
			// columnHeader1
			// 
			this->columnHeader1->Text = L"Username";
			// 
			// columnHeader2
			// 
			this->columnHeader2->Text = L"Naziv";
			// 
			// columnHeader3
			// 
			this->columnHeader3->Text = L"PDV broj";
			// 
			// columnHeader4
			// 
			this->columnHeader4->Text = L"Adresa";
			// 
			// columnHeader5
			// 
			this->columnHeader5->Text = L"Telefon";
			// 
			// columnHeader6
			// 
			this->columnHeader6->Text = L"Paket";
			// 
			// columnHeader7
			// 
			this->columnHeader7->Text = L"Password";
			// 
			// columnHeader8
			// 
			this->columnHeader8->Text = L"Modem";
			// 
			// Pretraga
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(687, 573);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->listViewFirma);
			this->Controls->Add(this->listViewOsoba);
			this->MaximizeBox = false;
			this->Name = L"Pretraga";
			this->Text = L"Pretraga";
			this->Load += gcnew System::EventHandler(this, &Pretraga::Pretraga_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Pretraga_Load(System::Object^  sender, System::EventArgs^  e) {
			 }
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			 
			 ListViewItem ^temp = gcnew ListViewItem ();

			 listViewOsoba->Items->Clear ();
			 listViewFirma->Items->Clear ();

			 
// moram uraditi validaciju ako nije unesen nista u polje za unos

			 String ^atribut = cbx_pretrazivanje->SelectedItem->ToString ();
			 String ^uneseno = unos_pretrazivanje->Text;
			 unos_pretrazivanje->Clear ();
			 cbx_pretrazivanje->SelectedIndex = -1;

			
			 /*
			 if (atribut == "Username")
			 {
				 for each (Korisnik ^korisnik in korisnici)
					 if (uneseno == korisnik->Username ())
					 {
						 try
						 {
							 KorisnikOsoba ^k = dynamic_cast <KorisnikOsoba ^> (korisnik);
							 temp = listViewOsoba->Items->Add (k->Username ());	
							 temp->SubItems->Add (k->Ime ());
							 temp->SubItems->Add (k->Prezime ());
							 temp->SubItems->Add (k->Broj_licne_karte ());
							 temp->SubItems->Add (k->Adresa ());
							 temp->SubItems->Add (k->Telefon ());
							 temp->SubItems->Add ("treba ime"); // Treba naziv paketa!
							 temp->SubItems->Add (k->Password ());
							 if (k->Modem ())
								temp->SubItems->Add ("DA");
							 else 
								temp->SubItems->Add ("NE");
						 }
						 catch (...)
						 {
							 KorisnikFirma ^k = dynamic_cast <KorisnikFirma ^> (korisnik))
							 temp = listViewFirma->Items->Add (k->Username ());	
							 temp->SubItems->Add (k->Naziv ());
							 temp->SubItems->Add (k->PDV_broj ());
							 temp->SubItems->Add (k->Adresa ());
							 temp->SubItems->Add (k->Telefon ());
							 temp->SubItems->Add ("treba ime"); // Treba naziv paketa!
							 temp->SubItems->Add (k->Password ());
							 if (k->Modem ())
								temp->SubItems->Add ("DA");
							 else 
								temp->SubItems->Add ("NE");
						 }
					 }
			 }
			 */

			 /*

			 if (atribut == "Aktivni raèuni")
			 {			 
				 for each (Korisnik ^k in korisnici)
					 if (k->Mirovanje () == false && k->Suspenzija () == false)
						 listBox_pretraga->Items->Add (k->Username () + "\t\t" +  k->Print ());						
			 }

			 if (atribut == "Zamrznuti raèuni")
			 {			 
				 for each (Korisnik ^k in korisnici)
					 if (k->Mirovanje () == true)
						 listBox_pretraga->Items->Add (k->Username () + "\t\t" +  k->Print ());				
			 }

			 if (atribut == "Suspendovani raèuni")
			 {			 
				 for each (Korisnik ^k in korisnici)
					 if (k->Suspenzija () == true)
						 listBox_pretraga->Items->Add (k->Username () + "\t\t" +  k->Print ());				
			 }
			 */
			
			 if (atribut == "Ime osobe")
			 {			 
				 for each (Korisnik ^korisnik in korisnici)
				 {
					  try
					 {
						 KorisnikOsoba ^k = dynamic_cast <KorisnikOsoba ^> (korisnik);
						 if (uneseno == k->Ime ())
						 {
							 temp = listViewOsoba->Items->Add (k->Username ());	
							 temp->SubItems->Add (k->Ime ());
							 temp->SubItems->Add (k->Prezime ());
							 temp->SubItems->Add (k->Broj_licne_karte ());
							 temp->SubItems->Add (k->Adresa ());
							 temp->SubItems->Add (k->Telefon ());
							 temp->SubItems->Add (k->Naziv_paketa ()); 
							 temp->SubItems->Add (k->Password ());
							 if (k->Modem ())
								temp->SubItems->Add ("DA");
							 else 
								temp->SubItems->Add ("NE");
						 }
					 }
					 catch (InvalidCastException ^c) // ovdje bi mozda trebalo My exception
					 {
						 MessageBox::Show ("Greska pri dinamickom konvertovanju korisnika u osoba-korisnika.");
					 }
				 }
			 }

			 if (atribut == "Naziv firme")
			 {			 
				 for each (Korisnik ^korisnik in korisnici)
				 {
					  try
					 {
						 KorisnikFirma ^k = dynamic_cast <KorisnikFirma ^> (korisnik);
						 if (uneseno == k->Naziv ())
						 {			
							 temp = listViewFirma->Items->Add (k->Username ());	
							 temp->SubItems->Add (k->Naziv ());
							 temp->SubItems->Add (k->PDV_broj ());
							 temp->SubItems->Add (k->Adresa ());
							 temp->SubItems->Add (k->Telefon ());
							 temp->SubItems->Add (k->Naziv_paketa ());
							 temp->SubItems->Add (k->Password ());
							 if (k->Modem ())
								temp->SubItems->Add ("DA");
							 else 
								temp->SubItems->Add ("NE"); 
						 } 						 

					 }
					 catch (InvalidCastException ^c) // ovdje bi mozda trebalo My exception
					 {
						 MessageBox::Show ("Greska pri dinamickom konvertovanju korisnika u firma-korisnika.");
					 } 
				 }
			 }
			 
			 
			 if (listViewOsoba->Items->Count == 0 && listViewFirma->Items->Count == 0)
				 MessageBox::Show ("Nema trazenih podataka.");

		 }
		 
private: System::Void listViewOsoba_ItemActivate(System::Object^  sender, System::EventArgs^  e) {
			 /*
			 temp = listViewOsoba->Items->Add (k->Ime ());	
			 temp->SubItems->Add (k->Prezime ());
			 temp->SubItems->Add (k->Broj_licne_karte ());
			 temp->SubItems->Add (k->Adresa ());
			 temp->SubItems->Add (k->Telefon ());
			 temp->SubItems->Add (k->Username ());
			 temp->SubItems->Add (k->Password ());
			 */
			//for each (ListViewItem ^li in listViewOsoba->Items)
				

			String ^ime = listViewOsoba->Items [0]->Text;
			MessageBox::Show (ime);

			 //PromjenaOsoba ^po = gcnew PromjenaOsoba (listViewOsoba->ItemActivate, listViewOsoba->Sub );
		 }
};
}
