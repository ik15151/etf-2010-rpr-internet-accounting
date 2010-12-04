#pragma once

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
	private: System::Windows::Forms::Button^  button6;
	protected: 
	private: System::Windows::Forms::Panel^  panel2;
	private: System::Windows::Forms::CheckBox^  t_placeno;
	private: System::Windows::Forms::ComboBox^  t_korisnici;
	private: System::Windows::Forms::ComboBox^  t_mjesec;
	private: System::Windows::Forms::Label^  label27;
	private: System::Windows::Forms::Label^  label29;
	private: System::Windows::Forms::Label^  label30;

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
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->t_placeno = (gcnew System::Windows::Forms::CheckBox());
			this->t_korisnici = (gcnew System::Windows::Forms::ComboBox());
			this->t_mjesec = (gcnew System::Windows::Forms::ComboBox());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->panel2->SuspendLayout();
			this->SuspendLayout();
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(187, 137);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(93, 21);
			this->button6->TabIndex = 20;
			this->button6->Text = L"Plaæeno";
			this->button6->UseVisualStyleBackColor = true;
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::White;
			this->panel2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel2->Controls->Add(this->t_placeno);
			this->panel2->Controls->Add(this->t_korisnici);
			this->panel2->Controls->Add(this->t_mjesec);
			this->panel2->Controls->Add(this->label27);
			this->panel2->Controls->Add(this->label29);
			this->panel2->Controls->Add(this->label30);
			this->panel2->Location = System::Drawing::Point(12, 12);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(268, 107);
			this->panel2->TabIndex = 21;
			// 
			// t_placeno
			// 
			this->t_placeno->AutoSize = true;
			this->t_placeno->Location = System::Drawing::Point(319, 143);
			this->t_placeno->Name = L"t_placeno";
			this->t_placeno->Size = System::Drawing::Size(65, 17);
			this->t_placeno->TabIndex = 3;
			this->t_placeno->Text = L"Plaæeno";
			this->t_placeno->UseVisualStyleBackColor = true;
			// 
			// t_korisnici
			// 
			this->t_korisnici->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->t_korisnici->FormattingEnabled = true;
			this->t_korisnici->Location = System::Drawing::Point(85, 16);
			this->t_korisnici->Name = L"t_korisnici";
			this->t_korisnici->Size = System::Drawing::Size(169, 21);
			this->t_korisnici->TabIndex = 0;
			// 
			// t_mjesec
			// 
			this->t_mjesec->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->t_mjesec->FormattingEnabled = true;
			this->t_mjesec->Items->AddRange(gcnew cli::array< System::Object^  >(12) {L"januar", L"februar", L"mart", L"april", L"maj", 
				L"juni", L"juli", L"august", L"septembar", L"oktobar", L"novembar", L"decembar"});
			this->t_mjesec->Location = System::Drawing::Point(85, 65);
			this->t_mjesec->Name = L"t_mjesec";
			this->t_mjesec->Size = System::Drawing::Size(169, 21);
			this->t_mjesec->TabIndex = 1;
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->Location = System::Drawing::Point(294, 45);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(0, 13);
			this->label27->TabIndex = 5;
			// 
			// label29
			// 
			this->label29->AutoSize = true;
			this->label29->Location = System::Drawing::Point(10, 16);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(47, 13);
			this->label29->TabIndex = 7;
			this->label29->Text = L"Korisnik:";
			// 
			// label30
			// 
			this->label30->AutoSize = true;
			this->label30->Location = System::Drawing::Point(13, 72);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(44, 13);
			this->label30->TabIndex = 8;
			this->label30->Text = L"Mjesec:";
			// 
			// RacunNaplata
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(290, 176);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->panel2);
			this->MaximizeBox = false;
			this->Name = L"RacunNaplata";
			this->Text = L"RacunNaplata";
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	};
}
