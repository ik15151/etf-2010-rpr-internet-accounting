#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace InternetAccounting {

	/// <summary>
	/// Summary for KontrolaModem
	/// </summary>
	public ref class KontrolaModem : public System::Windows::Forms::UserControl
	{
	public:
		KontrolaModem(void)
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
		~KontrolaModem()
		{
			if (components)
			{
				delete components;
			}
		}

	private:
		bool modem;

	private: System::Windows::Forms::GroupBox^  groupBox3;
	protected: 
	private: System::Windows::Forms::CheckBox^  chBoxModem;
	private: System::Windows::Forms::ErrorProvider^  errorProvider1;
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
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->chBoxModem = (gcnew System::Windows::Forms::CheckBox());
			this->errorProvider1 = (gcnew System::Windows::Forms::ErrorProvider(this->components));
			this->groupBox3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->errorProvider1))->BeginInit();
			this->SuspendLayout();
			// 
			// groupBox3
			// 
			this->groupBox3->BackColor = System::Drawing::Color::Transparent;
			this->groupBox3->Controls->Add(this->chBoxModem);
			this->groupBox3->Location = System::Drawing::Point(4, 3);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(290, 46);
			this->groupBox3->TabIndex = 103;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Najam opreme";
			// 
			// chBoxModem
			// 
			this->chBoxModem->AutoSize = true;
			this->chBoxModem->Location = System::Drawing::Point(111, 19);
			this->chBoxModem->Name = L"chBoxModem";
			this->chBoxModem->Size = System::Drawing::Size(61, 17);
			this->chBoxModem->TabIndex = 6;
			this->chBoxModem->Text = L"Modem";
			this->chBoxModem->UseVisualStyleBackColor = true;
			// 
			// errorProvider1
			// 
			this->errorProvider1->ContainerControl = this;
			// 
			// KontrolaModem
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->groupBox3);
			this->Name = L"KontrolaModem";
			this->Size = System::Drawing::Size(298, 55);
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->errorProvider1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion

	public:
		void setModem ()
		{
			modem = chBoxModem->Checked;

			// ovo je privremeno
			if (modem)
				MessageBox::Show("tacno1");
			else
				MessageBox::Show("Netacno1");
			// ovo je privremeno
		}

		void setModem (bool m)
		{
			modem = m;
			chBoxModem->Checked = modem;
			// ovo je privremeno
			if (modem)
				MessageBox::Show("tacno2");
			else
				MessageBox::Show("Netacno2");
			// ovo je privremeno
		}

		bool getModem ()
		{
			// ovo je privremeno
			if (modem)
				MessageBox::Show("tacno3");
			else
				MessageBox::Show("Netacno3");
			// ovo je privremeno

			return modem;			
		}

		void setGreskaModem (String ^poruka)
		{
			errorProvider1->SetError(chBoxModem, poruka);
		}

		void setModemDisabled ()
		{
			modem = false;
			chBoxModem->Checked = false;
			chBoxModem->Enabled = false;
		}


	};
}
