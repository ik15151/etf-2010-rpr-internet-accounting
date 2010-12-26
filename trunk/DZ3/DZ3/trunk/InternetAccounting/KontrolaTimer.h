#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace InternetAccounting {

	/// <summary>
	/// Summary for KontrolaTimer
	/// </summary>
	public ref class KontrolaTimer : public System::Windows::Forms::UserControl
	{
	public:
		KontrolaTimer(void)
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
		~KontrolaTimer()
		{
			if (components)
			{
				delete components;
			}
		}
	private:
		String ^time;

	private: System::Windows::Forms::Label^  vrijeme;
	protected: 

	private: System::Windows::Forms::Timer^  timer1;
	private: System::ComponentModel::IContainer^  components;
	protected: 

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
			this->vrijeme = (gcnew System::Windows::Forms::Label());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->SuspendLayout();
			// 
			// vrijeme
			// 
			this->vrijeme->AutoSize = true;
			this->vrijeme->Location = System::Drawing::Point(3, 7);
			this->vrijeme->Name = L"vrijeme";
			this->vrijeme->Size = System::Drawing::Size(0, 13);
			this->vrijeme->TabIndex = 0;
			// 
			// timer1
			// 
			this->timer1->Enabled = true;
			this->timer1->Interval = 1000;
			this->timer1->Tick += gcnew System::EventHandler(this, &KontrolaTimer::timer1_Tick);
			// 
			// KontrolaTimer
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->vrijeme);
			this->Name = L"KontrolaTimer";
			this->Size = System::Drawing::Size(208, 25);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	public:
		String ^getVrijeme ()
		{
			return time;
		}
		void setVrijeme ()
		{
			time = vrijeme->Text;
		}
	private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) {
				 vrijeme->Text = Convert::ToString (System::DateTime::Now::get ());
			 }
	};
}
