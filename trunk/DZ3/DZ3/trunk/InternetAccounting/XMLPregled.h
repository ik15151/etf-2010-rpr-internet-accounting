#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace System::IO;
using namespace System::Xml; // za XmlDataDocument


namespace InternetAccounting {

	/// <summary>
	/// Summary for XMLPregled
	///
	/// WARNING: If you change the name of this class, you will need to change the
	///          'Resource File Name' property for the managed resource compiler tool
	///          associated with all .resx files this class depends on.  Otherwise,
	///          the designers will not be able to interact properly with localized
	///          resources associated with this form.
	/// </summary>
	public ref class XMLPregled : public System::Windows::Forms::Form
	{
	public:
		XMLPregled(void)
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
		~XMLPregled()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^  dataGridView1;
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
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->dataGridView1->Location = System::Drawing::Point(0, 0);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(741, 209);
			this->dataGridView1->TabIndex = 0;
			// 
			// XMLPregled
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(741, 209);
			this->Controls->Add(this->dataGridView1);
			this->MaximizeBox = false;
			this->Name = L"XMLPregled";
			this->Text = L"Pregled XML podataka";
			this->Load += gcnew System::EventHandler(this, &XMLPregled::XMLPregled_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void XMLPregled_Load(System::Object^  sender, System::EventArgs^  e) {
				 try
				 {
					// Novi XML Data Dokument
					 XmlDataDocument ^xmlDatadoc = gcnew XmlDataDocument();
					 xmlDatadoc->DataSet->ReadXml("korisnici.xml");	// ucitamo serializirani XML u DataSet XmlDataDokumenta

					 dataGridView1->DataSource = xmlDatadoc->DataSet;	// Postavimo da GridView uzima podatke iz DataSet-a
					 dataGridView1->DataMember = "anyType";				// Naziv elementa knjiga u XML-u posto je iz ArrayListe
				 }
				 catch (Exception ^e)
				 {
					 MessageBox::Show ("Podaci nisu ucitani. XML fajl ne postoji.");
				 }
			 }
	};
}
