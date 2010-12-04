#pragma once

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
	private: System::Windows::Forms::ListView^  listView1;
	private: System::Windows::Forms::ListView^  listView2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Splitter^  splitter1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::ComboBox^  cbx_pretrazivanje;
	private: System::Windows::Forms::Label^  label23;
	private: System::Windows::Forms::TextBox^  unos_pretrazivanje;
	private: System::Windows::Forms::Label^  label24;
	private: System::Windows::Forms::ColumnHeader^  columnHeader1;
	private: System::Windows::Forms::ColumnHeader^  columnHeader2;
	private: System::Windows::Forms::ColumnHeader^  columnHeader3;
	private: System::Windows::Forms::ColumnHeader^  columnHeader4;
	private: System::Windows::Forms::ColumnHeader^  columnHeader5;
	private: System::Windows::Forms::ColumnHeader^  columnHeader6;
	private: System::Windows::Forms::ColumnHeader^  columnHeader7;
	private: System::Windows::Forms::ColumnHeader^  columnHeader8;
	private: System::Windows::Forms::ColumnHeader^  columnHeader9;
	private: System::Windows::Forms::ColumnHeader^  columnHeader20;
	private: System::Windows::Forms::ColumnHeader^  columnHeader21;
	private: System::Windows::Forms::ColumnHeader^  columnHeader10;
	private: System::Windows::Forms::ColumnHeader^  columnHeader11;
	private: System::Windows::Forms::ColumnHeader^  columnHeader12;
	private: System::Windows::Forms::ColumnHeader^  columnHeader13;
	private: System::Windows::Forms::ColumnHeader^  columnHeader14;
	private: System::Windows::Forms::ColumnHeader^  columnHeader15;
	private: System::Windows::Forms::ColumnHeader^  columnHeader16;
	private: System::Windows::Forms::ColumnHeader^  columnHeader17;
	private: System::Windows::Forms::ColumnHeader^  columnHeader18;
	private: System::Windows::Forms::ColumnHeader^  columnHeader19;
	private: System::Windows::Forms::RichTextBox^  richTextBox1;

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
			System::Windows::Forms::ListViewItem^  listViewItem1 = (gcnew System::Windows::Forms::ListViewItem(L""));
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Pretraga::typeid));
			this->listView1 = (gcnew System::Windows::Forms::ListView());
			this->listView2 = (gcnew System::Windows::Forms::ListView());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->splitter1 = (gcnew System::Windows::Forms::Splitter());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->cbx_pretrazivanje = (gcnew System::Windows::Forms::ComboBox());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->unos_pretrazivanje = (gcnew System::Windows::Forms::TextBox());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->columnHeader1 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader2 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader3 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader4 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader5 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader6 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader7 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader8 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader9 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader10 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader11 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader12 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader13 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader14 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader15 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader16 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader17 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader18 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader19 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader20 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader21 = (gcnew System::Windows::Forms::ColumnHeader());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// listView1
			// 
			this->listView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(11) {this->columnHeader1, this->columnHeader2, 
				this->columnHeader3, this->columnHeader4, this->columnHeader5, this->columnHeader6, this->columnHeader7, this->columnHeader8, 
				this->columnHeader9, this->columnHeader20, this->columnHeader21});
			this->listView1->FullRowSelect = true;
			this->listView1->GridLines = true;
			this->listView1->Location = System::Drawing::Point(12, 220);
			this->listView1->Name = L"listView1";
			this->listView1->Size = System::Drawing::Size(908, 145);
			this->listView1->Sorting = System::Windows::Forms::SortOrder::Descending;
			this->listView1->TabIndex = 0;
			this->listView1->UseCompatibleStateImageBehavior = false;
			this->listView1->View = System::Windows::Forms::View::Details;
			// 
			// listView2
			// 
			this->listView2->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(10) {this->columnHeader10, this->columnHeader11, 
				this->columnHeader12, this->columnHeader13, this->columnHeader14, this->columnHeader15, this->columnHeader16, this->columnHeader17, 
				this->columnHeader18, this->columnHeader19});
			this->listView2->FullRowSelect = true;
			this->listView2->GridLines = true;
			this->listView2->Items->AddRange(gcnew cli::array< System::Windows::Forms::ListViewItem^  >(1) {listViewItem1});
			this->listView2->Location = System::Drawing::Point(12, 424);
			this->listView2->MultiSelect = false;
			this->listView2->Name = L"listView2";
			this->listView2->Size = System::Drawing::Size(908, 144);
			this->listView2->TabIndex = 1;
			this->listView2->UseCompatibleStateImageBehavior = false;
			this->listView2->View = System::Windows::Forms::View::Details;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(9, 194);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(174, 13);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Pregled informacija o fizièkim licima:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(12, 391);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(177, 13);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Pregled informacija o pravnim licima:";
			// 
			// splitter1
			// 
			this->splitter1->Dock = System::Windows::Forms::DockStyle::Top;
			this->splitter1->Location = System::Drawing::Point(0, 0);
			this->splitter1->Name = L"splitter1";
			this->splitter1->Size = System::Drawing::Size(932, 182);
			this->splitter1->TabIndex = 4;
			this->splitter1->TabStop = false;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(836, 133);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(84, 23);
			this->button2->TabIndex = 36;
			this->button2->Text = L"Pretraži";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::White;
			this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel1->Controls->Add(this->cbx_pretrazivanje);
			this->panel1->Controls->Add(this->label23);
			this->panel1->Controls->Add(this->unos_pretrazivanje);
			this->panel1->Controls->Add(this->label24);
			this->panel1->Location = System::Drawing::Point(518, 24);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(402, 97);
			this->panel1->TabIndex = 37;
			// 
			// cbx_pretrazivanje
			// 
			this->cbx_pretrazivanje->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->cbx_pretrazivanje->FormattingEnabled = true;
			this->cbx_pretrazivanje->Items->AddRange(gcnew cli::array< System::Object^  >(6) {L"Username", L"Ime osobe", L"Naziv firme", 
				L"Aktivni raèuni", L"Zamrznuti raèuni", L"Suspendovani raèuni"});
			this->cbx_pretrazivanje->Location = System::Drawing::Point(155, 19);
			this->cbx_pretrazivanje->Name = L"cbx_pretrazivanje";
			this->cbx_pretrazivanje->Size = System::Drawing::Size(223, 21);
			this->cbx_pretrazivanje->TabIndex = 1;
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Location = System::Drawing::Point(14, 56);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(37, 13);
			this->label23->TabIndex = 26;
			this->label23->Text = L"Unesi:";
			// 
			// unos_pretrazivanje
			// 
			this->unos_pretrazivanje->AllowDrop = true;
			this->unos_pretrazivanje->Location = System::Drawing::Point(155, 56);
			this->unos_pretrazivanje->Name = L"unos_pretrazivanje";
			this->unos_pretrazivanje->Size = System::Drawing::Size(223, 20);
			this->unos_pretrazivanje->TabIndex = 2;
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Location = System::Drawing::Point(14, 19);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(86, 13);
			this->label24->TabIndex = 25;
			this->label24->Text = L"Pretraživanje po:";
			// 
			// columnHeader1
			// 
			this->columnHeader1->Text = L"Ime";
			this->columnHeader1->Width = 70;
			// 
			// columnHeader2
			// 
			this->columnHeader2->Text = L"Prezime";
			this->columnHeader2->Width = 118;
			// 
			// columnHeader3
			// 
			this->columnHeader3->Text = L"Broj liène karte";
			this->columnHeader3->Width = 94;
			// 
			// columnHeader4
			// 
			this->columnHeader4->Text = L"Adresa";
			this->columnHeader4->Width = 84;
			// 
			// columnHeader5
			// 
			this->columnHeader5->Text = L"Telefon";
			this->columnHeader5->Width = 81;
			// 
			// columnHeader6
			// 
			this->columnHeader6->Text = L"Paket";
			this->columnHeader6->Width = 77;
			// 
			// columnHeader7
			// 
			this->columnHeader7->Text = L"Username";
			this->columnHeader7->Width = 73;
			// 
			// columnHeader8
			// 
			this->columnHeader8->Text = L"Password";
			this->columnHeader8->Width = 81;
			// 
			// columnHeader9
			// 
			this->columnHeader9->Text = L"Modem";
			this->columnHeader9->Width = 53;
			// 
			// columnHeader10
			// 
			this->columnHeader10->Text = L"Naziv";
			this->columnHeader10->Width = 168;
			// 
			// columnHeader11
			// 
			this->columnHeader11->Text = L"PDV broj";
			this->columnHeader11->Width = 130;
			// 
			// columnHeader12
			// 
			this->columnHeader12->Text = L"Adresa";
			this->columnHeader12->Width = 93;
			// 
			// columnHeader13
			// 
			this->columnHeader13->Text = L"Telefon";
			this->columnHeader13->Width = 86;
			// 
			// columnHeader14
			// 
			this->columnHeader14->Text = L"Paket";
			this->columnHeader14->Width = 79;
			// 
			// columnHeader15
			// 
			this->columnHeader15->Text = L"Username";
			this->columnHeader15->Width = 72;
			// 
			// columnHeader16
			// 
			this->columnHeader16->Text = L"Password";
			this->columnHeader16->Width = 85;
			// 
			// columnHeader17
			// 
			this->columnHeader17->Text = L"Modem";
			// 
			// columnHeader18
			// 
			this->columnHeader18->Text = L"Mirovanje";
			this->columnHeader18->Width = 62;
			// 
			// columnHeader19
			// 
			this->columnHeader19->Text = L"Suspenzija";
			this->columnHeader19->Width = 68;
			// 
			// columnHeader20
			// 
			this->columnHeader20->Text = L"Mirovanje";
			this->columnHeader20->Width = 68;
			// 
			// columnHeader21
			// 
			this->columnHeader21->Text = L"Suspenzija";
			this->columnHeader21->Width = 102;
			// 
			// richTextBox1
			// 
			this->richTextBox1->BackColor = System::Drawing::Color::White;
			this->richTextBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(238)));
			this->richTextBox1->Location = System::Drawing::Point(15, 24);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->ReadOnly = true;
			this->richTextBox1->Size = System::Drawing::Size(465, 129);
			this->richTextBox1->TabIndex = 39;
			this->richTextBox1->Text = resources->GetString(L"richTextBox1.Text");
			// 
			// Pretraga
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(932, 595);
			this->Controls->Add(this->richTextBox1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->splitter1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->listView2);
			this->Controls->Add(this->listView1);
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
};
}
