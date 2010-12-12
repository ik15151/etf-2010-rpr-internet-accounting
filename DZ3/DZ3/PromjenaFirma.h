#pragma once
#include "KorisnikFirma.h"
#include "Paket.h"

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace DZ3 {

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

	public:
		PromjenaFirma(KorisnikFirma ^k, ArrayList ^p)
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
		~PromjenaFirma()
		{
			if (components)
			{
				delete components;
			}
		}

	private:
		KorisnikFirma ^korisnik;
		ArrayList ^paketi;

	private: System::Windows::Forms::GroupBox^  groupBox4;
	protected: 
	private: System::Windows::Forms::RadioButton^  p_mirovanje;
	private: System::Windows::Forms::RadioButton^  p_suspenzija;
	private: System::Windows::Forms::GroupBox^  groupbox3;
	private: System::Windows::Forms::TextBox^  c_PDV_broj;



	private: System::Windows::Forms::TextBox^  c_naziv;

	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Button^  Azuriranje;
















	private: System::Windows::Forms::StatusStrip^  statusStrip1;
	private: System::Windows::Forms::ToolStripStatusLabel^  toolStripStatusLabel1;
	private: KontrolaUnos::KontrolaUnosKorisnika^  kontrolaUnosKorisnika1;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::ComboBox^  c_CBox_paket;
	private: System::Windows::Forms::Label^  label4;

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
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->p_mirovanje = (gcnew System::Windows::Forms::RadioButton());
			this->p_suspenzija = (gcnew System::Windows::Forms::RadioButton());
			this->groupbox3 = (gcnew System::Windows::Forms::GroupBox());
			this->c_PDV_broj = (gcnew System::Windows::Forms::TextBox());
			this->c_naziv = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->Azuriranje = (gcnew System::Windows::Forms::Button());
			this->statusStrip1 = (gcnew System::Windows::Forms::StatusStrip());
			this->toolStripStatusLabel1 = (gcnew System::Windows::Forms::ToolStripStatusLabel());
			this->kontrolaUnosKorisnika1 = (gcnew KontrolaUnos::KontrolaUnosKorisnika());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->c_CBox_paket = (gcnew System::Windows::Forms::ComboBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->groupBox4->SuspendLayout();
			this->groupbox3->SuspendLayout();
			this->statusStrip1->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox4
			// 
			this->groupBox4->Controls->Add(this->p_mirovanje);
			this->groupBox4->Controls->Add(this->p_suspenzija);
			this->groupBox4->Location = System::Drawing::Point(12, 392);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(122, 82);
			this->groupBox4->TabIndex = 113;
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
			// groupbox3
			// 
			this->groupbox3->Controls->Add(this->c_PDV_broj);
			this->groupbox3->Controls->Add(this->c_naziv);
			this->groupbox3->Controls->Add(this->label3);
			this->groupbox3->Controls->Add(this->label2);
			this->groupbox3->Location = System::Drawing::Point(12, 12);
			this->groupbox3->Name = L"groupbox3";
			this->groupbox3->Size = System::Drawing::Size(317, 81);
			this->groupbox3->TabIndex = 112;
			this->groupbox3->TabStop = false;
			this->groupbox3->Text = L"Osnovni podaci";
			// 
			// c_PDV_broj
			// 
			this->c_PDV_broj->Location = System::Drawing::Point(110, 47);
			this->c_PDV_broj->Name = L"c_PDV_broj";
			this->c_PDV_broj->Size = System::Drawing::Size(172, 20);
			this->c_PDV_broj->TabIndex = 15;
			// 
			// c_naziv
			// 
			this->c_naziv->Location = System::Drawing::Point(110, 21);
			this->c_naziv->Name = L"c_naziv";
			this->c_naziv->Size = System::Drawing::Size(172, 20);
			this->c_naziv->TabIndex = 14;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(20, 54);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(52, 13);
			this->label3->TabIndex = 18;
			this->label3->Text = L"PDV broj:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(18, 28);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(37, 13);
			this->label2->TabIndex = 17;
			this->label2->Text = L"Naziv:";
			// 
			// Azuriranje
			// 
			this->Azuriranje->AutoSize = true;
			this->Azuriranje->Location = System::Drawing::Point(267, 451);
			this->Azuriranje->Name = L"Azuriranje";
			this->Azuriranje->Size = System::Drawing::Size(63, 23);
			this->Azuriranje->TabIndex = 111;
			this->Azuriranje->Text = L"A�uriranje";
			this->Azuriranje->UseVisualStyleBackColor = true;
			// 
			// statusStrip1
			// 
			this->statusStrip1->BackColor = System::Drawing::SystemColors::Control;
			this->statusStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) {this->toolStripStatusLabel1});
			this->statusStrip1->Location = System::Drawing::Point(0, 488);
			this->statusStrip1->Name = L"statusStrip1";
			this->statusStrip1->Size = System::Drawing::Size(341, 22);
			this->statusStrip1->TabIndex = 114;
			this->statusStrip1->Text = L"statusStrip1";
			// 
			// toolStripStatusLabel1
			// 
			this->toolStripStatusLabel1->ForeColor = System::Drawing::Color::Red;
			this->toolStripStatusLabel1->Name = L"toolStripStatusLabel1";
			this->toolStripStatusLabel1->Size = System::Drawing::Size(0, 17);
			// 
			// kontrolaUnosKorisnika1
			// 
			this->kontrolaUnosKorisnika1->BackColor = System::Drawing::Color::White;
			this->kontrolaUnosKorisnika1->Location = System::Drawing::Point(-1, 157);
			this->kontrolaUnosKorisnika1->Name = L"kontrolaUnosKorisnika1";
			this->kontrolaUnosKorisnika1->Size = System::Drawing::Size(342, 232);
			this->kontrolaUnosKorisnika1->TabIndex = 116;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->c_CBox_paket);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Location = System::Drawing::Point(12, 99);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(318, 52);
			this->groupBox1->TabIndex = 115;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Internet paket";
			// 
			// c_CBox_paket
			// 
			this->c_CBox_paket->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->c_CBox_paket->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->c_CBox_paket->FormattingEnabled = true;
			this->c_CBox_paket->Location = System::Drawing::Point(110, 19);
			this->c_CBox_paket->Name = L"c_CBox_paket";
			this->c_CBox_paket->Size = System::Drawing::Size(172, 21);
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
			// PromjenaFirma
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->ClientSize = System::Drawing::Size(341, 510);
			this->Controls->Add(this->kontrolaUnosKorisnika1);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->statusStrip1);
			this->Controls->Add(this->groupBox4);
			this->Controls->Add(this->groupbox3);
			this->Controls->Add(this->Azuriranje);
			this->MaximizeBox = false;
			this->Name = L"PromjenaFirma";
			this->Text = L"Promjena podataka o pravnom licu";
			this->Load += gcnew System::EventHandler(this, &PromjenaFirma::PromjenaFirma_Load);
			this->groupBox4->ResumeLayout(false);
			this->groupBox4->PerformLayout();
			this->groupbox3->ResumeLayout(false);
			this->groupbox3->PerformLayout();
			this->statusStrip1->ResumeLayout(false);
			this->statusStrip1->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void PromjenaFirma_Load(System::Object^  sender, System::EventArgs^  e) {

				 for each (Paket ^p in paketi)
					 c_CBox_paket->Items->Add (p->Naziv_paketa ());

				 c_naziv->Text = korisnik->Naziv ();
				 c_PDV_broj->Text = korisnik->PDV_broj ();
				 				 				 
				 c_CBox_paket->SelectedItem = korisnik->Naziv_paketa ();

			 }
};
}
