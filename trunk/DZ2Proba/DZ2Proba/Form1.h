#pragma once
//#include "Korisnik.h"
#include "KorisnikOsoba.h"
#include "KorisnikFirma.h"
#include "Paket.h"
#include "Racun.h"
#include "RacunPrint.h"


namespace DZ2Proba {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	///
	/// WARNING: If you change the name of this class, you will need to change the
	///          'Resource File Name' property for the managed resource compiler tool
	///          associated with all .resx files this class depends on.  Otherwise,
	///          the designers will not be able to interact properly with localized
	///          resources associated with this form.
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			korisnici = gcnew ArrayList ();
			racuni = gcnew ArrayList ();
			paketi = gcnew ArrayList ();
			paketi->Add (gcnew Paket ("Economic", "7 GB", "1250/128 kbps", 15));
			paketi->Add (gcnew Paket ("Standard", "18 GB", "2048/256 kbps", 25));
			paketi->Add (gcnew Paket ("Flat", "Neogranièeno", "3072/1024 kbps", 65));



		}

	private:
		ArrayList ^korisnici;
		ArrayList ^paketi;
		ArrayList ^racuni;


	public: 
	private: System::Windows::Forms::GroupBox^  groupBox5;
	private: System::Windows::Forms::CheckBox^  c_chBox_modem;
	private: System::Windows::Forms::GroupBox^  groupBox2;

	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::TextBox^  c_username;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::TextBox^  c_password;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::TextBox^  c_adresa;
	private: System::Windows::Forms::Label^  Prezime;
	private: System::Windows::Forms::Label^  Ime;
	private: System::Windows::Forms::TextBox^  c_telefon;
	private: System::Windows::Forms::TabControl^  tabControl2;
	private: System::Windows::Forms::TabPage^  tabPage1;
	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::TextBox^  c_broj_licne_karte;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::TextBox^  c_prezime;
	private: System::Windows::Forms::TextBox^  c_ime;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TabPage^  tabPage2;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::TextBox^  c_PDV_broj;


	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::ComboBox^  c_CBox_paket;































	private: System::Windows::Forms::CheckBox^  checkBox2;
	private: System::Windows::Forms::ComboBox^  comboBox2;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::TabPage^  tabPage3;
	private: System::Windows::Forms::PictureBox^  pictureBox3;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::TextBox^  textBox6;
	private: System::Windows::Forms::TextBox^  textBox7;
	private: System::Windows::Forms::Label^  label16;
	private: System::Windows::Forms::Label^  label17;
	private: System::Windows::Forms::TabPage^  tabPage4;
	private: System::Windows::Forms::PictureBox^  pictureBox4;
	private: System::Windows::Forms::Label^  label18;
	private: System::Windows::Forms::TextBox^  textBox8;
	private: System::Windows::Forms::Label^  label19;
	private: System::Windows::Forms::TextBox^  textBox9;


private: System::Windows::Forms::CheckBox^  p_modem;


private: System::Windows::Forms::ComboBox^  p_paket;

private: System::Windows::Forms::Label^  label10;
private: System::Windows::Forms::TextBox^  p_username;

private: System::Windows::Forms::Label^  label20;
private: System::Windows::Forms::Label^  label21;
private: System::Windows::Forms::TextBox^  p_password;


private: System::Windows::Forms::TextBox^  p_adresa;

private: System::Windows::Forms::Label^  label22;
private: System::Windows::Forms::Label^  label28;
private: System::Windows::Forms::TextBox^  p_telefon;

private: System::Windows::Forms::TabControl^  tabControl3;
private: System::Windows::Forms::TabPage^  p_osoba;

private: System::Windows::Forms::PictureBox^  pictureBox5;
private: System::Windows::Forms::TextBox^  p_broj_licne_karte;

private: System::Windows::Forms::Label^  label31;
private: System::Windows::Forms::TextBox^  p_prezime;

private: System::Windows::Forms::TextBox^  p_ime;

private: System::Windows::Forms::Label^  label32;
private: System::Windows::Forms::Label^  label33;
private: System::Windows::Forms::TabPage^  p_firma;

private: System::Windows::Forms::PictureBox^  pictureBox6;
private: System::Windows::Forms::Label^  label34;
private: System::Windows::Forms::TextBox^  p_PDV_broj;

private: System::Windows::Forms::Label^  label35;
private: System::Windows::Forms::TextBox^  p_naziv;





private: System::Windows::Forms::Panel^  panel3;
private: System::Windows::Forms::GroupBox^  groupBox4;


private: System::Windows::Forms::Panel^  panel4;
private: System::Windows::Forms::Label^  label36;
private: System::Windows::Forms::RadioButton^  p_mirovanje;
private: System::Windows::Forms::RadioButton^  p_suspenzija;
































	private: System::Windows::Forms::TextBox^  c_naziv_firme;



	

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}

	

	protected: 

















































































































































private: System::Windows::Forms::MenuStrip^  menuStrip1;
private: System::Windows::Forms::ToolStripMenuItem^  uhiojpoToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^  ijijpoToolStripMenuItem;
private: System::Windows::Forms::ToolStrip^  toolStrip1;
private: System::Windows::Forms::TabControl^  tabControl1;











private: System::Windows::Forms::TabPage^  Unos;
private: System::Windows::Forms::Button^  button5;






























private: System::Windows::Forms::Button^  Unesi;
private: System::Windows::Forms::TabPage^  Pretraga;
private: System::Windows::Forms::ListBox^  listBox_pretraga;






private: System::Windows::Forms::TabPage^  Promjena;































private: System::Windows::Forms::Button^  button4;
private: System::Windows::Forms::TabPage^  Placanje;





private: System::Windows::Forms::Button^  button3;





private: System::Windows::Forms::Label^  label30;
private: System::Windows::Forms::Label^  label29;
private: System::Windows::Forms::Label^  label27;
private: System::Windows::Forms::ComboBox^  t_korisnici;

private: System::Windows::Forms::Label^  label26;
private: System::Windows::Forms::Label^  label25;
private: System::Windows::Forms::ComboBox^  t_mjesec;


private: System::Windows::Forms::Button^  button2;
private: System::Windows::Forms::ComboBox^  cbx_pretrazivanje;
private: System::Windows::Forms::TextBox^  unos_pretrazivanje;


private: System::Windows::Forms::Label^  label24;
private: System::Windows::Forms::Label^  label23;
private: System::Windows::Forms::ComboBox^  cBox_odabir;








private: System::Windows::Forms::Panel^  panel1;

private: System::Windows::Forms::Panel^  panel2;
private: System::Windows::Forms::CheckBox^  t_placeno;





























private: System::Windows::Forms::Button^  button6;



private: System::Windows::Forms::ToolStripMenuItem^  unosNovogKorisnikaToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^  spasiUnosToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem1;
private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem2;
private: System::Windows::Forms::ToolStripMenuItem^  izaðiToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^  plaæanjeToolStripMenuItem;


private: System::Windows::Forms::ToolStripMenuItem^  štampajToolStripMenuItem;
private: System::Windows::Forms::ToolStripButton^  toolStripButton2;
private: System::Windows::Forms::ToolStripButton^  toolStripButton1;
private: System::Windows::Forms::Button^  button1;














































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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->uhiojpoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->unosNovogKorisnikaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->spasiUnosToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem2 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->izaðiToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ijijpoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->plaæanjeToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->štampajToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStrip1 = (gcnew System::Windows::Forms::ToolStrip());
			this->toolStripButton2 = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripButton1 = (gcnew System::Windows::Forms::ToolStripButton());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->Unos = (gcnew System::Windows::Forms::TabPage());
			this->groupBox5 = (gcnew System::Windows::Forms::GroupBox());
			this->c_chBox_modem = (gcnew System::Windows::Forms::CheckBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->c_CBox_paket = (gcnew System::Windows::Forms::ComboBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->c_username = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->c_password = (gcnew System::Windows::Forms::TextBox());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->c_adresa = (gcnew System::Windows::Forms::TextBox());
			this->Prezime = (gcnew System::Windows::Forms::Label());
			this->Ime = (gcnew System::Windows::Forms::Label());
			this->c_telefon = (gcnew System::Windows::Forms::TextBox());
			this->Unesi = (gcnew System::Windows::Forms::Button());
			this->tabControl2 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->c_broj_licne_karte = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->c_prezime = (gcnew System::Windows::Forms::TextBox());
			this->c_ime = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->c_PDV_broj = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->c_naziv_firme = (gcnew System::Windows::Forms::TextBox());
			this->Pretraga = (gcnew System::Windows::Forms::TabPage());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->cbx_pretrazivanje = (gcnew System::Windows::Forms::ComboBox());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->unos_pretrazivanje = (gcnew System::Windows::Forms::TextBox());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->listBox_pretraga = (gcnew System::Windows::Forms::ListBox());
			this->Promjena = (gcnew System::Windows::Forms::TabPage());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->label36 = (gcnew System::Windows::Forms::Label());
			this->cBox_odabir = (gcnew System::Windows::Forms::ComboBox());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->p_mirovanje = (gcnew System::Windows::Forms::RadioButton());
			this->p_suspenzija = (gcnew System::Windows::Forms::RadioButton());
			this->tabControl3 = (gcnew System::Windows::Forms::TabControl());
			this->p_osoba = (gcnew System::Windows::Forms::TabPage());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->p_broj_licne_karte = (gcnew System::Windows::Forms::TextBox());
			this->label31 = (gcnew System::Windows::Forms::Label());
			this->p_prezime = (gcnew System::Windows::Forms::TextBox());
			this->p_ime = (gcnew System::Windows::Forms::TextBox());
			this->label32 = (gcnew System::Windows::Forms::Label());
			this->label33 = (gcnew System::Windows::Forms::Label());
			this->p_firma = (gcnew System::Windows::Forms::TabPage());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->label34 = (gcnew System::Windows::Forms::Label());
			this->p_PDV_broj = (gcnew System::Windows::Forms::TextBox());
			this->label35 = (gcnew System::Windows::Forms::Label());
			this->p_naziv = (gcnew System::Windows::Forms::TextBox());
			this->p_adresa = (gcnew System::Windows::Forms::TextBox());
			this->p_telefon = (gcnew System::Windows::Forms::TextBox());
			this->p_modem = (gcnew System::Windows::Forms::CheckBox());
			this->p_password = (gcnew System::Windows::Forms::TextBox());
			this->p_paket = (gcnew System::Windows::Forms::ComboBox());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->p_username = (gcnew System::Windows::Forms::TextBox());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->Placanje = (gcnew System::Windows::Forms::TabPage());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->t_placeno = (gcnew System::Windows::Forms::CheckBox());
			this->t_korisnici = (gcnew System::Windows::Forms::ComboBox());
			this->t_mjesec = (gcnew System::Windows::Forms::ComboBox());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->tabPage4 = (gcnew System::Windows::Forms::TabPage());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->menuStrip1->SuspendLayout();
			this->toolStrip1->SuspendLayout();
			this->tabControl1->SuspendLayout();
			this->Unos->SuspendLayout();
			this->groupBox5->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->tabControl2->SuspendLayout();
			this->tabPage1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox2))->BeginInit();
			this->tabPage2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			this->Pretraga->SuspendLayout();
			this->panel1->SuspendLayout();
			this->Promjena->SuspendLayout();
			this->panel4->SuspendLayout();
			this->panel3->SuspendLayout();
			this->groupBox4->SuspendLayout();
			this->tabControl3->SuspendLayout();
			this->p_osoba->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox5))->BeginInit();
			this->p_firma->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox6))->BeginInit();
			this->Placanje->SuspendLayout();
			this->panel2->SuspendLayout();
			this->tabPage3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox3))->BeginInit();
			this->tabPage4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox4))->BeginInit();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {this->uhiojpoToolStripMenuItem, 
				this->ijijpoToolStripMenuItem});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(546, 24);
			this->menuStrip1->TabIndex = 3;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// uhiojpoToolStripMenuItem
			// 
			this->uhiojpoToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {this->unosNovogKorisnikaToolStripMenuItem, 
				this->spasiUnosToolStripMenuItem, this->toolStripMenuItem1, this->toolStripMenuItem2, this->izaðiToolStripMenuItem});
			this->uhiojpoToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"uhiojpoToolStripMenuItem.Image")));
			this->uhiojpoToolStripMenuItem->Name = L"uhiojpoToolStripMenuItem";
			this->uhiojpoToolStripMenuItem->Size = System::Drawing::Size(77, 20);
			this->uhiojpoToolStripMenuItem->Text = L"Korisnik";
			// 
			// unosNovogKorisnikaToolStripMenuItem
			// 
			this->unosNovogKorisnikaToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"unosNovogKorisnikaToolStripMenuItem.Image")));
			this->unosNovogKorisnikaToolStripMenuItem->Name = L"unosNovogKorisnikaToolStripMenuItem";
			this->unosNovogKorisnikaToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::N));
			this->unosNovogKorisnikaToolStripMenuItem->Size = System::Drawing::Size(231, 22);
			this->unosNovogKorisnikaToolStripMenuItem->Text = L"Unos novog korisnika";
			this->unosNovogKorisnikaToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::unosNovogKorisnikaToolStripMenuItem_Click);
			// 
			// spasiUnosToolStripMenuItem
			// 
			this->spasiUnosToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"spasiUnosToolStripMenuItem.Image")));
			this->spasiUnosToolStripMenuItem->Name = L"spasiUnosToolStripMenuItem";
			this->spasiUnosToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::S));
			this->spasiUnosToolStripMenuItem->Size = System::Drawing::Size(231, 22);
			this->spasiUnosToolStripMenuItem->Text = L"Spasi";
			this->spasiUnosToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::spasiUnosToolStripMenuItem_Click);
			// 
			// toolStripMenuItem1
			// 
			this->toolStripMenuItem1->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"toolStripMenuItem1.Image")));
			this->toolStripMenuItem1->Name = L"toolStripMenuItem1";
			this->toolStripMenuItem1->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::F));
			this->toolStripMenuItem1->Size = System::Drawing::Size(231, 22);
			this->toolStripMenuItem1->Text = L"Pretraga";
			this->toolStripMenuItem1->Click += gcnew System::EventHandler(this, &Form1::toolStripMenuItem1_Click);
			// 
			// toolStripMenuItem2
			// 
			this->toolStripMenuItem2->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"toolStripMenuItem2.Image")));
			this->toolStripMenuItem2->Name = L"toolStripMenuItem2";
			this->toolStripMenuItem2->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::H));
			this->toolStripMenuItem2->Size = System::Drawing::Size(231, 22);
			this->toolStripMenuItem2->Text = L"Promjena";
			this->toolStripMenuItem2->Click += gcnew System::EventHandler(this, &Form1::toolStripMenuItem2_Click);
			// 
			// izaðiToolStripMenuItem
			// 
			this->izaðiToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"izaðiToolStripMenuItem.Image")));
			this->izaðiToolStripMenuItem->Name = L"izaðiToolStripMenuItem";
			this->izaðiToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::Q));
			this->izaðiToolStripMenuItem->Size = System::Drawing::Size(231, 22);
			this->izaðiToolStripMenuItem->Text = L"Izaði";
			this->izaðiToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::izaðiToolStripMenuItem_Click);
			// 
			// ijijpoToolStripMenuItem
			// 
			this->ijijpoToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {this->plaæanjeToolStripMenuItem, 
				this->štampajToolStripMenuItem});
			this->ijijpoToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"ijijpoToolStripMenuItem.Image")));
			this->ijijpoToolStripMenuItem->Name = L"ijijpoToolStripMenuItem";
			this->ijijpoToolStripMenuItem->Size = System::Drawing::Size(68, 20);
			this->ijijpoToolStripMenuItem->Text = L"Raèun";
			// 
			// plaæanjeToolStripMenuItem
			// 
			this->plaæanjeToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"plaæanjeToolStripMenuItem.Image")));
			this->plaæanjeToolStripMenuItem->Name = L"plaæanjeToolStripMenuItem";
			this->plaæanjeToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::R));
			this->plaæanjeToolStripMenuItem->Size = System::Drawing::Size(161, 22);
			this->plaæanjeToolStripMenuItem->Text = L"Plaæanje";
			this->plaæanjeToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::plaæanjeToolStripMenuItem_Click);
			// 
			// štampajToolStripMenuItem
			// 
			this->štampajToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"štampajToolStripMenuItem.Image")));
			this->štampajToolStripMenuItem->Name = L"štampajToolStripMenuItem";
			this->štampajToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::P));
			this->štampajToolStripMenuItem->Size = System::Drawing::Size(161, 22);
			this->štampajToolStripMenuItem->Text = L"Štampaj ";
			this->štampajToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::štampajToolStripMenuItem_Click);
			// 
			// toolStrip1
			// 
			this->toolStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {this->toolStripButton2, 
				this->toolStripButton1});
			this->toolStrip1->Location = System::Drawing::Point(0, 24);
			this->toolStrip1->Name = L"toolStrip1";
			this->toolStrip1->Size = System::Drawing::Size(546, 25);
			this->toolStrip1->TabIndex = 4;
			this->toolStrip1->Text = L"toolStrip1";
			// 
			// toolStripButton2
			// 
			this->toolStripButton2->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStripButton2->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"toolStripButton2.Image")));
			this->toolStripButton2->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton2->Name = L"toolStripButton2";
			this->toolStripButton2->Size = System::Drawing::Size(23, 22);
			this->toolStripButton2->Text = L"toolStripButton2";
			this->toolStripButton2->ToolTipText = L"Spasi";
			this->toolStripButton2->Click += gcnew System::EventHandler(this, &Form1::toolStripButton2_Click);
			// 
			// toolStripButton1
			// 
			this->toolStripButton1->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStripButton1->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"toolStripButton1.Image")));
			this->toolStripButton1->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton1->Name = L"toolStripButton1";
			this->toolStripButton1->Size = System::Drawing::Size(23, 22);
			this->toolStripButton1->Text = L"toolStripButton1";
			this->toolStripButton1->ToolTipText = L"Štampaj raèun";
			this->toolStripButton1->Click += gcnew System::EventHandler(this, &Form1::toolStripButton1_Click);
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->Unos);
			this->tabControl1->Controls->Add(this->Pretraga);
			this->tabControl1->Controls->Add(this->Promjena);
			this->tabControl1->Controls->Add(this->Placanje);
			this->tabControl1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tabControl1->Location = System::Drawing::Point(0, 49);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(546, 694);
			this->tabControl1->TabIndex = 5;
			this->tabControl1->Enter += gcnew System::EventHandler(this, &Form1::tabControl1_Enter);
			// 
			// Unos
			// 
			this->Unos->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"Unos.BackgroundImage")));
			this->Unos->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->Unos->Controls->Add(this->groupBox5);
			this->Unos->Controls->Add(this->groupBox2);
			this->Unos->Controls->Add(this->button5);
			this->Unos->Controls->Add(this->groupBox1);
			this->Unos->Controls->Add(this->Unesi);
			this->Unos->Controls->Add(this->tabControl2);
			this->Unos->Location = System::Drawing::Point(4, 22);
			this->Unos->Name = L"Unos";
			this->Unos->Padding = System::Windows::Forms::Padding(3);
			this->Unos->Size = System::Drawing::Size(538, 668);
			this->Unos->TabIndex = 0;
			this->Unos->Text = L"Unos";
			this->Unos->UseVisualStyleBackColor = true;
			// 
			// groupBox5
			// 
			this->groupBox5->BackColor = System::Drawing::Color::Transparent;
			this->groupBox5->Controls->Add(this->c_chBox_modem);
			this->groupBox5->Location = System::Drawing::Point(65, 522);
			this->groupBox5->Name = L"groupBox5";
			this->groupBox5->Size = System::Drawing::Size(401, 56);
			this->groupBox5->TabIndex = 29;
			this->groupBox5->TabStop = false;
			this->groupBox5->Text = L"Najam opreme";
			// 
			// c_chBox_modem
			// 
			this->c_chBox_modem->AutoSize = true;
			this->c_chBox_modem->Location = System::Drawing::Point(140, 19);
			this->c_chBox_modem->Name = L"c_chBox_modem";
			this->c_chBox_modem->Size = System::Drawing::Size(61, 17);
			this->c_chBox_modem->TabIndex = 11;
			this->c_chBox_modem->Text = L"Modem";
			this->c_chBox_modem->UseVisualStyleBackColor = true;
			// 
			// groupBox2
			// 
			this->groupBox2->BackColor = System::Drawing::Color::Transparent;
			this->groupBox2->Controls->Add(this->c_CBox_paket);
			this->groupBox2->Controls->Add(this->label6);
			this->groupBox2->Controls->Add(this->c_username);
			this->groupBox2->Controls->Add(this->label4);
			this->groupBox2->Controls->Add(this->label7);
			this->groupBox2->Controls->Add(this->c_password);
			this->groupBox2->Location = System::Drawing::Point(65, 392);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(401, 124);
			this->groupBox2->TabIndex = 28;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Pristupni podaci";
			// 
			// c_CBox_paket
			// 
			this->c_CBox_paket->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->c_CBox_paket->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->c_CBox_paket->FormattingEnabled = true;
			this->c_CBox_paket->Location = System::Drawing::Point(140, 20);
			this->c_CBox_paket->Name = L"c_CBox_paket";
			this->c_CBox_paket->Size = System::Drawing::Size(172, 21);
			this->c_CBox_paket->TabIndex = 8;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(48, 60);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(58, 13);
			this->label6->TabIndex = 20;
			this->label6->Text = L"Username:";
			// 
			// c_username
			// 
			this->c_username->Location = System::Drawing::Point(140, 53);
			this->c_username->Name = L"c_username";
			this->c_username->Size = System::Drawing::Size(172, 20);
			this->c_username->TabIndex = 9;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(48, 28);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(38, 13);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Paket:";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(48, 93);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(56, 13);
			this->label7->TabIndex = 14;
			this->label7->Text = L"Password:";
			// 
			// c_password
			// 
			this->c_password->Location = System::Drawing::Point(140, 86);
			this->c_password->Name = L"c_password";
			this->c_password->PasswordChar = '*';
			this->c_password->Size = System::Drawing::Size(172, 20);
			this->c_password->TabIndex = 10;
			// 
			// button5
			// 
			this->button5->AutoSize = true;
			this->button5->Location = System::Drawing::Point(391, 611);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(75, 23);
			this->button5->TabIndex = 93;
			this->button5->Text = L"Izaði";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Form1::button5_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::Color::Transparent;
			this->groupBox1->Controls->Add(this->c_adresa);
			this->groupBox1->Controls->Add(this->Prezime);
			this->groupBox1->Controls->Add(this->Ime);
			this->groupBox1->Controls->Add(this->c_telefon);
			this->groupBox1->Location = System::Drawing::Point(65, 291);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(401, 95);
			this->groupBox1->TabIndex = 27;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Kontaktni podaci";
			// 
			// c_adresa
			// 
			this->c_adresa->Location = System::Drawing::Point(140, 21);
			this->c_adresa->Name = L"c_adresa";
			this->c_adresa->Size = System::Drawing::Size(172, 20);
			this->c_adresa->TabIndex = 6;
			// 
			// Prezime
			// 
			this->Prezime->AutoSize = true;
			this->Prezime->Location = System::Drawing::Point(48, 63);
			this->Prezime->Name = L"Prezime";
			this->Prezime->Size = System::Drawing::Size(46, 13);
			this->Prezime->TabIndex = 17;
			this->Prezime->Text = L"Telefon:";
			// 
			// Ime
			// 
			this->Ime->AutoSize = true;
			this->Ime->Location = System::Drawing::Point(48, 28);
			this->Ime->Name = L"Ime";
			this->Ime->Size = System::Drawing::Size(43, 13);
			this->Ime->TabIndex = 15;
			this->Ime->Text = L"Adresa:";
			// 
			// c_telefon
			// 
			this->c_telefon->Location = System::Drawing::Point(140, 56);
			this->c_telefon->Name = L"c_telefon";
			this->c_telefon->Size = System::Drawing::Size(172, 20);
			this->c_telefon->TabIndex = 7;
			// 
			// Unesi
			// 
			this->Unesi->AutoSize = true;
			this->Unesi->Location = System::Drawing::Point(302, 611);
			this->Unesi->Name = L"Unesi";
			this->Unesi->Size = System::Drawing::Size(75, 23);
			this->Unesi->TabIndex = 92;
			this->Unesi->Text = L"Unesi";
			this->Unesi->UseVisualStyleBackColor = true;
			this->Unesi->Click += gcnew System::EventHandler(this, &Form1::Unesi_Click_1);
			// 
			// tabControl2
			// 
			this->tabControl2->Controls->Add(this->tabPage1);
			this->tabControl2->Controls->Add(this->tabPage2);
			this->tabControl2->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->tabControl2->Location = System::Drawing::Point(29, 73);
			this->tabControl2->Name = L"tabControl2";
			this->tabControl2->SelectedIndex = 0;
			this->tabControl2->Size = System::Drawing::Size(479, 191);
			this->tabControl2->TabIndex = 1;
			// 
			// tabPage1
			// 
			this->tabPage1->BackColor = System::Drawing::Color::White;
			this->tabPage1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->tabPage1->Controls->Add(this->pictureBox2);
			this->tabPage1->Controls->Add(this->c_broj_licne_karte);
			this->tabPage1->Controls->Add(this->label8);
			this->tabPage1->Controls->Add(this->c_prezime);
			this->tabPage1->Controls->Add(this->c_ime);
			this->tabPage1->Controls->Add(this->label3);
			this->tabPage1->Controls->Add(this->label2);
			this->tabPage1->Location = System::Drawing::Point(4, 22);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(471, 165);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Osoba";
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(340, 26);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(93, 97);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox2->TabIndex = 26;
			this->pictureBox2->TabStop = false;
			// 
			// c_broj_licne_karte
			// 
			this->c_broj_licne_karte->Location = System::Drawing::Point(129, 106);
			this->c_broj_licne_karte->Name = L"c_broj_licne_karte";
			this->c_broj_licne_karte->Size = System::Drawing::Size(172, 20);
			this->c_broj_licne_karte->TabIndex = 5;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(29, 113);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(80, 13);
			this->label8->TabIndex = 13;
			this->label8->Text = L"Broj liène karte:";
			// 
			// c_prezime
			// 
			this->c_prezime->Location = System::Drawing::Point(129, 63);
			this->c_prezime->Name = L"c_prezime";
			this->c_prezime->Size = System::Drawing::Size(172, 20);
			this->c_prezime->TabIndex = 2;
			// 
			// c_ime
			// 
			this->c_ime->Location = System::Drawing::Point(129, 26);
			this->c_ime->Name = L"c_ime";
			this->c_ime->Size = System::Drawing::Size(172, 20);
			this->c_ime->TabIndex = 1;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(29, 70);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(47, 13);
			this->label3->TabIndex = 10;
			this->label3->Text = L"Prezime:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(29, 33);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(27, 13);
			this->label2->TabIndex = 9;
			this->label2->Text = L"Ime:";
			// 
			// tabPage2
			// 
			this->tabPage2->BackColor = System::Drawing::Color::White;
			this->tabPage2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->tabPage2->Controls->Add(this->pictureBox1);
			this->tabPage2->Controls->Add(this->label9);
			this->tabPage2->Controls->Add(this->c_PDV_broj);
			this->tabPage2->Controls->Add(this->label1);
			this->tabPage2->Controls->Add(this->c_naziv_firme);
			this->tabPage2->Location = System::Drawing::Point(4, 22);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(471, 165);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Firma";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(338, 28);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(93, 97);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 16;
			this->pictureBox1->TabStop = false;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(27, 100);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(52, 13);
			this->label9->TabIndex = 10;
			this->label9->Text = L"PDV broj:";
			// 
			// c_PDV_broj
			// 
			this->c_PDV_broj->Location = System::Drawing::Point(113, 93);
			this->c_PDV_broj->Name = L"c_PDV_broj";
			this->c_PDV_broj->Size = System::Drawing::Size(172, 20);
			this->c_PDV_broj->TabIndex = 9;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(27, 53);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(37, 13);
			this->label1->TabIndex = 8;
			this->label1->Text = L"Naziv:";
			// 
			// c_naziv_firme
			// 
			this->c_naziv_firme->Location = System::Drawing::Point(113, 46);
			this->c_naziv_firme->Name = L"c_naziv_firme";
			this->c_naziv_firme->Size = System::Drawing::Size(172, 20);
			this->c_naziv_firme->TabIndex = 7;
			// 
			// Pretraga
			// 
			this->Pretraga->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"Pretraga.BackgroundImage")));
			this->Pretraga->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->Pretraga->Controls->Add(this->button2);
			this->Pretraga->Controls->Add(this->panel1);
			this->Pretraga->Controls->Add(this->listBox_pretraga);
			this->Pretraga->Location = System::Drawing::Point(4, 22);
			this->Pretraga->Name = L"Pretraga";
			this->Pretraga->Padding = System::Windows::Forms::Padding(3);
			this->Pretraga->Size = System::Drawing::Size(538, 668);
			this->Pretraga->TabIndex = 1;
			this->Pretraga->Text = L"Pretraga";
			this->Pretraga->UseVisualStyleBackColor = true;
			this->Pretraga->Enter += gcnew System::EventHandler(this, &Form1::Pretraga_Enter);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(397, 189);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 3;
			this->button2->Text = L"Pretraži";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click_1);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::White;
			this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel1->Controls->Add(this->cbx_pretrazivanje);
			this->panel1->Controls->Add(this->label23);
			this->panel1->Controls->Add(this->unos_pretrazivanje);
			this->panel1->Controls->Add(this->label24);
			this->panel1->Location = System::Drawing::Point(67, 48);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(405, 105);
			this->panel1->TabIndex = 35;
			// 
			// cbx_pretrazivanje
			// 
			this->cbx_pretrazivanje->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->cbx_pretrazivanje->FormattingEnabled = true;
			this->cbx_pretrazivanje->Items->AddRange(gcnew cli::array< System::Object^  >(6) {L"Username", L"Ime osobe", L"Naziv firme", 
				L"Aktivni raèuni", L"Zamrznuti raèuni", L"Suspendovani raèuni"});
			this->cbx_pretrazivanje->Location = System::Drawing::Point(148, 19);
			this->cbx_pretrazivanje->Name = L"cbx_pretrazivanje";
			this->cbx_pretrazivanje->Size = System::Drawing::Size(239, 21);
			this->cbx_pretrazivanje->TabIndex = 1;
			this->cbx_pretrazivanje->SelectedIndexChanged += gcnew System::EventHandler(this, &Form1::comboBox6_SelectedIndexChanged);
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
			this->unos_pretrazivanje->Location = System::Drawing::Point(148, 56);
			this->unos_pretrazivanje->Name = L"unos_pretrazivanje";
			this->unos_pretrazivanje->Size = System::Drawing::Size(239, 20);
			this->unos_pretrazivanje->TabIndex = 2;
			this->unos_pretrazivanje->TextChanged += gcnew System::EventHandler(this, &Form1::textBox20_TextChanged);
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
			// listBox_pretraga
			// 
			this->listBox_pretraga->FormattingEnabled = true;
			this->listBox_pretraga->HorizontalScrollbar = true;
			this->listBox_pretraga->Location = System::Drawing::Point(67, 241);
			this->listBox_pretraga->Name = L"listBox_pretraga";
			this->listBox_pretraga->Size = System::Drawing::Size(405, 121);
			this->listBox_pretraga->TabIndex = 2;
			// 
			// Promjena
			// 
			this->Promjena->BackColor = System::Drawing::Color::White;
			this->Promjena->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"Promjena.BackgroundImage")));
			this->Promjena->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->Promjena->Controls->Add(this->panel4);
			this->Promjena->Controls->Add(this->panel3);
			this->Promjena->Controls->Add(this->button4);
			this->Promjena->Location = System::Drawing::Point(4, 22);
			this->Promjena->Name = L"Promjena";
			this->Promjena->Padding = System::Windows::Forms::Padding(3);
			this->Promjena->Size = System::Drawing::Size(538, 668);
			this->Promjena->TabIndex = 2;
			this->Promjena->Text = L"Promjena";
			this->Promjena->Enter += gcnew System::EventHandler(this, &Form1::Promjena_Enter);
			// 
			// panel4
			// 
			this->panel4->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel4->Controls->Add(this->label36);
			this->panel4->Controls->Add(this->cBox_odabir);
			this->panel4->Location = System::Drawing::Point(69, 36);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(393, 72);
			this->panel4->TabIndex = 40;
			// 
			// label36
			// 
			this->label36->AutoSize = true;
			this->label36->Location = System::Drawing::Point(86, 11);
			this->label36->Name = L"label36";
			this->label36->Size = System::Drawing::Size(209, 13);
			this->label36->TabIndex = 34;
			this->label36->Text = L"Odaberite korisnika za promjenu podataka:";
			// 
			// cBox_odabir
			// 
			this->cBox_odabir->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->cBox_odabir->FormattingEnabled = true;
			this->cBox_odabir->ItemHeight = 13;
			this->cBox_odabir->Location = System::Drawing::Point(20, 36);
			this->cBox_odabir->Name = L"cBox_odabir";
			this->cBox_odabir->Size = System::Drawing::Size(358, 21);
			this->cBox_odabir->TabIndex = 33;
			this->cBox_odabir->SelectedIndexChanged += gcnew System::EventHandler(this, &Form1::cBox_odabir_SelectedIndexChanged);
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::Transparent;
			this->panel3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel3->Controls->Add(this->groupBox4);
			this->panel3->Controls->Add(this->tabControl3);
			this->panel3->Controls->Add(this->p_adresa);
			this->panel3->Controls->Add(this->p_telefon);
			this->panel3->Controls->Add(this->p_modem);
			this->panel3->Controls->Add(this->p_password);
			this->panel3->Controls->Add(this->p_paket);
			this->panel3->Controls->Add(this->label28);
			this->panel3->Controls->Add(this->label10);
			this->panel3->Controls->Add(this->label21);
			this->panel3->Controls->Add(this->label20);
			this->panel3->Controls->Add(this->p_username);
			this->panel3->Controls->Add(this->label22);
			this->panel3->Location = System::Drawing::Point(25, 142);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(477, 460);
			this->panel3->TabIndex = 39;
			// 
			// groupBox4
			// 
			this->groupBox4->Controls->Add(this->p_mirovanje);
			this->groupBox4->Controls->Add(this->p_suspenzija);
			this->groupBox4->Location = System::Drawing::Point(343, 364);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(122, 82);
			this->groupBox4->TabIndex = 39;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"Stanje raèuna";
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
			this->p_suspenzija->Size = System::Drawing::Size(76, 17);
			this->p_suspenzija->TabIndex = 6;
			this->p_suspenzija->TabStop = true;
			this->p_suspenzija->Text = L"Suspenzija";
			this->p_suspenzija->UseVisualStyleBackColor = true;
			// 
			// tabControl3
			// 
			this->tabControl3->Controls->Add(this->p_osoba);
			this->tabControl3->Controls->Add(this->p_firma);
			this->tabControl3->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->tabControl3->Location = System::Drawing::Point(0, -1);
			this->tabControl3->Name = L"tabControl3";
			this->tabControl3->SelectedIndex = 0;
			this->tabControl3->Size = System::Drawing::Size(477, 192);
			this->tabControl3->TabIndex = 38;
			// 
			// p_osoba
			// 
			this->p_osoba->BackColor = System::Drawing::Color::White;
			this->p_osoba->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->p_osoba->Controls->Add(this->pictureBox5);
			this->p_osoba->Controls->Add(this->p_broj_licne_karte);
			this->p_osoba->Controls->Add(this->label31);
			this->p_osoba->Controls->Add(this->p_prezime);
			this->p_osoba->Controls->Add(this->p_ime);
			this->p_osoba->Controls->Add(this->label32);
			this->p_osoba->Controls->Add(this->label33);
			this->p_osoba->Location = System::Drawing::Point(4, 22);
			this->p_osoba->Name = L"p_osoba";
			this->p_osoba->Padding = System::Windows::Forms::Padding(3);
			this->p_osoba->Size = System::Drawing::Size(469, 166);
			this->p_osoba->TabIndex = 0;
			this->p_osoba->Text = L"Osoba";
			// 
			// pictureBox5
			// 
			this->pictureBox5->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox5.Image")));
			this->pictureBox5->Location = System::Drawing::Point(340, 26);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(93, 97);
			this->pictureBox5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox5->TabIndex = 26;
			this->pictureBox5->TabStop = false;
			// 
			// p_broj_licne_karte
			// 
			this->p_broj_licne_karte->Location = System::Drawing::Point(129, 106);
			this->p_broj_licne_karte->Name = L"p_broj_licne_karte";
			this->p_broj_licne_karte->Size = System::Drawing::Size(172, 20);
			this->p_broj_licne_karte->TabIndex = 14;
			// 
			// label31
			// 
			this->label31->AutoSize = true;
			this->label31->Location = System::Drawing::Point(37, 106);
			this->label31->Name = L"label31";
			this->label31->Size = System::Drawing::Size(80, 13);
			this->label31->TabIndex = 13;
			this->label31->Text = L"Broj liène karte:";
			// 
			// p_prezime
			// 
			this->p_prezime->Location = System::Drawing::Point(129, 63);
			this->p_prezime->Name = L"p_prezime";
			this->p_prezime->Size = System::Drawing::Size(172, 20);
			this->p_prezime->TabIndex = 12;
			// 
			// p_ime
			// 
			this->p_ime->Location = System::Drawing::Point(129, 26);
			this->p_ime->Name = L"p_ime";
			this->p_ime->Size = System::Drawing::Size(172, 20);
			this->p_ime->TabIndex = 1;
			// 
			// label32
			// 
			this->label32->AutoSize = true;
			this->label32->Location = System::Drawing::Point(37, 63);
			this->label32->Name = L"label32";
			this->label32->Size = System::Drawing::Size(47, 13);
			this->label32->TabIndex = 10;
			this->label32->Text = L"Prezime:";
			// 
			// label33
			// 
			this->label33->AutoSize = true;
			this->label33->Location = System::Drawing::Point(37, 26);
			this->label33->Name = L"label33";
			this->label33->Size = System::Drawing::Size(27, 13);
			this->label33->TabIndex = 9;
			this->label33->Text = L"Ime:";
			// 
			// p_firma
			// 
			this->p_firma->BackColor = System::Drawing::Color::White;
			this->p_firma->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->p_firma->Controls->Add(this->pictureBox6);
			this->p_firma->Controls->Add(this->label34);
			this->p_firma->Controls->Add(this->p_PDV_broj);
			this->p_firma->Controls->Add(this->label35);
			this->p_firma->Controls->Add(this->p_naziv);
			this->p_firma->Location = System::Drawing::Point(4, 22);
			this->p_firma->Name = L"p_firma";
			this->p_firma->Padding = System::Windows::Forms::Padding(3);
			this->p_firma->Size = System::Drawing::Size(469, 166);
			this->p_firma->TabIndex = 1;
			this->p_firma->Text = L"Firma";
			// 
			// pictureBox6
			// 
			this->pictureBox6->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox6.Image")));
			this->pictureBox6->Location = System::Drawing::Point(338, 28);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(93, 97);
			this->pictureBox6->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox6->TabIndex = 16;
			this->pictureBox6->TabStop = false;
			// 
			// label34
			// 
			this->label34->AutoSize = true;
			this->label34->Location = System::Drawing::Point(27, 100);
			this->label34->Name = L"label34";
			this->label34->Size = System::Drawing::Size(52, 13);
			this->label34->TabIndex = 10;
			this->label34->Text = L"PDV broj:";
			// 
			// p_PDV_broj
			// 
			this->p_PDV_broj->Location = System::Drawing::Point(113, 93);
			this->p_PDV_broj->Name = L"p_PDV_broj";
			this->p_PDV_broj->Size = System::Drawing::Size(172, 20);
			this->p_PDV_broj->TabIndex = 9;
			// 
			// label35
			// 
			this->label35->AutoSize = true;
			this->label35->Location = System::Drawing::Point(27, 53);
			this->label35->Name = L"label35";
			this->label35->Size = System::Drawing::Size(37, 13);
			this->label35->TabIndex = 8;
			this->label35->Text = L"Naziv:";
			// 
			// p_naziv
			// 
			this->p_naziv->Location = System::Drawing::Point(113, 46);
			this->p_naziv->Name = L"p_naziv";
			this->p_naziv->Size = System::Drawing::Size(172, 20);
			this->p_naziv->TabIndex = 7;
			// 
			// p_adresa
			// 
			this->p_adresa->Location = System::Drawing::Point(132, 213);
			this->p_adresa->Name = L"p_adresa";
			this->p_adresa->Size = System::Drawing::Size(172, 20);
			this->p_adresa->TabIndex = 18;
			// 
			// p_telefon
			// 
			this->p_telefon->Location = System::Drawing::Point(132, 248);
			this->p_telefon->Name = L"p_telefon";
			this->p_telefon->Size = System::Drawing::Size(172, 20);
			this->p_telefon->TabIndex = 19;
			// 
			// p_modem
			// 
			this->p_modem->AutoSize = true;
			this->p_modem->Location = System::Drawing::Point(43, 390);
			this->p_modem->Name = L"p_modem";
			this->p_modem->Size = System::Drawing::Size(61, 17);
			this->p_modem->TabIndex = 22;
			this->p_modem->Text = L"Modem";
			this->p_modem->UseVisualStyleBackColor = true;
			// 
			// p_password
			// 
			this->p_password->Location = System::Drawing::Point(132, 340);
			this->p_password->Name = L"p_password";
			this->p_password->PasswordChar = '*';
			this->p_password->Size = System::Drawing::Size(172, 20);
			this->p_password->TabIndex = 16;
			// 
			// p_paket
			// 
			this->p_paket->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->p_paket->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->p_paket->FormattingEnabled = true;
			this->p_paket->Location = System::Drawing::Point(132, 274);
			this->p_paket->Name = L"p_paket";
			this->p_paket->Size = System::Drawing::Size(172, 21);
			this->p_paket->TabIndex = 22;
			// 
			// label28
			// 
			this->label28->AutoSize = true;
			this->label28->Location = System::Drawing::Point(40, 220);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(43, 13);
			this->label28->TabIndex = 15;
			this->label28->Text = L"Adresa:";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(40, 314);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(58, 13);
			this->label10->TabIndex = 20;
			this->label10->Text = L"Username:";
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Location = System::Drawing::Point(42, 340);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(56, 13);
			this->label21->TabIndex = 14;
			this->label21->Text = L"Password:";
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Location = System::Drawing::Point(40, 282);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(38, 13);
			this->label20->TabIndex = 3;
			this->label20->Text = L"Paket:";
			// 
			// p_username
			// 
			this->p_username->Location = System::Drawing::Point(132, 307);
			this->p_username->Name = L"p_username";
			this->p_username->Size = System::Drawing::Size(172, 20);
			this->p_username->TabIndex = 21;
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Location = System::Drawing::Point(40, 255);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(46, 13);
			this->label22->TabIndex = 17;
			this->label22->Text = L"Telefon:";
			// 
			// button4
			// 
			this->button4->AutoSize = true;
			this->button4->Location = System::Drawing::Point(402, 619);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(89, 28);
			this->button4->TabIndex = 29;
			this->button4->Text = L"Spasi";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Form1::button4_Click);
			// 
			// Placanje
			// 
			this->Placanje->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"Placanje.BackgroundImage")));
			this->Placanje->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->Placanje->Controls->Add(this->button1);
			this->Placanje->Controls->Add(this->button6);
			this->Placanje->Controls->Add(this->panel2);
			this->Placanje->Controls->Add(this->label26);
			this->Placanje->Controls->Add(this->button3);
			this->Placanje->Controls->Add(this->label25);
			this->Placanje->Location = System::Drawing::Point(4, 22);
			this->Placanje->Name = L"Placanje";
			this->Placanje->Padding = System::Windows::Forms::Padding(3);
			this->Placanje->Size = System::Drawing::Size(538, 668);
			this->Placanje->TabIndex = 4;
			this->Placanje->Text = L"Plaæanje";
			this->Placanje->UseVisualStyleBackColor = true;
			this->Placanje->Enter += gcnew System::EventHandler(this, &Form1::Placanje_Enter);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(363, 328);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(117, 21);
			this->button1->TabIndex = 6;
			this->button1->Text = L"Izaði";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(363, 264);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(117, 21);
			this->button6->TabIndex = 4;
			this->button6->Text = L"Unesi";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &Form1::button6_Click);
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
			this->panel2->Location = System::Drawing::Point(65, 39);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(415, 188);
			this->panel2->TabIndex = 15;
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
			this->t_korisnici->Location = System::Drawing::Point(87, 37);
			this->t_korisnici->Name = L"t_korisnici";
			this->t_korisnici->Size = System::Drawing::Size(297, 21);
			this->t_korisnici->TabIndex = 0;
			// 
			// t_mjesec
			// 
			this->t_mjesec->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->t_mjesec->FormattingEnabled = true;
			this->t_mjesec->Items->AddRange(gcnew cli::array< System::Object^  >(12) {L"januar", L"februar", L"mart", L"april", L"maj", 
				L"juni", L"juli", L"august", L"septembar", L"oktobar", L"novembar", L"decembar"});
			this->t_mjesec->Location = System::Drawing::Point(87, 86);
			this->t_mjesec->Name = L"t_mjesec";
			this->t_mjesec->Size = System::Drawing::Size(297, 21);
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
			this->label29->Location = System::Drawing::Point(12, 37);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(47, 13);
			this->label29->TabIndex = 7;
			this->label29->Text = L"Korisnik:";
			// 
			// label30
			// 
			this->label30->AutoSize = true;
			this->label30->Location = System::Drawing::Point(15, 93);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(44, 13);
			this->label30->TabIndex = 8;
			this->label30->Text = L"Mjesec:";
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->Location = System::Drawing::Point(5, 92);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(0, 13);
			this->label26->TabIndex = 3;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(363, 291);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(117, 21);
			this->button3->TabIndex = 5;
			this->button3->Text = L"Štampaj raèun";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->Location = System::Drawing::Point(2, 49);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(0, 13);
			this->label25->TabIndex = 2;
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->Location = System::Drawing::Point(140, 19);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(61, 17);
			this->checkBox2->TabIndex = 22;
			this->checkBox2->Text = L"Modem";
			this->checkBox2->UseVisualStyleBackColor = true;
			// 
			// comboBox2
			// 
			this->comboBox2->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox2->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Location = System::Drawing::Point(140, 20);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(172, 21);
			this->comboBox2->TabIndex = 22;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(48, 60);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(58, 13);
			this->label5->TabIndex = 20;
			this->label5->Text = L"Username:";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(140, 53);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(172, 20);
			this->textBox1->TabIndex = 21;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(48, 28);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(38, 13);
			this->label11->TabIndex = 3;
			this->label11->Text = L"Paket:";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(48, 93);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(56, 13);
			this->label12->TabIndex = 14;
			this->label12->Text = L"Password:";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(140, 86);
			this->textBox2->Name = L"textBox2";
			this->textBox2->PasswordChar = '*';
			this->textBox2->Size = System::Drawing::Size(172, 20);
			this->textBox2->TabIndex = 16;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(140, 21);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(172, 20);
			this->textBox3->TabIndex = 18;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(48, 63);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(46, 13);
			this->label13->TabIndex = 17;
			this->label13->Text = L"Telefon:";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(48, 28);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(43, 13);
			this->label14->TabIndex = 15;
			this->label14->Text = L"Adresa:";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(140, 56);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(172, 20);
			this->textBox4->TabIndex = 19;
			// 
			// tabPage3
			// 
			this->tabPage3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->tabPage3->Controls->Add(this->pictureBox3);
			this->tabPage3->Controls->Add(this->textBox5);
			this->tabPage3->Controls->Add(this->label15);
			this->tabPage3->Controls->Add(this->textBox6);
			this->tabPage3->Controls->Add(this->textBox7);
			this->tabPage3->Controls->Add(this->label16);
			this->tabPage3->Controls->Add(this->label17);
			this->tabPage3->Location = System::Drawing::Point(4, 22);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Padding = System::Windows::Forms::Padding(3);
			this->tabPage3->Size = System::Drawing::Size(471, 165);
			this->tabPage3->TabIndex = 0;
			this->tabPage3->Text = L"Osoba";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// pictureBox3
			// 
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(340, 26);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(93, 97);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox3->TabIndex = 26;
			this->pictureBox3->TabStop = false;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(129, 106);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(172, 20);
			this->textBox5->TabIndex = 14;
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(29, 113);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(80, 13);
			this->label15->TabIndex = 13;
			this->label15->Text = L"Broj liène karte:";
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(129, 63);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(172, 20);
			this->textBox6->TabIndex = 12;
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(129, 26);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(172, 20);
			this->textBox7->TabIndex = 11;
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(29, 70);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(47, 13);
			this->label16->TabIndex = 10;
			this->label16->Text = L"Prezime:";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(29, 33);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(27, 13);
			this->label17->TabIndex = 9;
			this->label17->Text = L"Ime:";
			// 
			// tabPage4
			// 
			this->tabPage4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->tabPage4->Controls->Add(this->pictureBox4);
			this->tabPage4->Controls->Add(this->label18);
			this->tabPage4->Controls->Add(this->textBox8);
			this->tabPage4->Controls->Add(this->label19);
			this->tabPage4->Controls->Add(this->textBox9);
			this->tabPage4->Location = System::Drawing::Point(4, 22);
			this->tabPage4->Name = L"tabPage4";
			this->tabPage4->Padding = System::Windows::Forms::Padding(3);
			this->tabPage4->Size = System::Drawing::Size(471, 165);
			this->tabPage4->TabIndex = 1;
			this->tabPage4->Text = L"Firma";
			this->tabPage4->UseVisualStyleBackColor = true;
			// 
			// pictureBox4
			// 
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(338, 28);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(93, 97);
			this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox4->TabIndex = 16;
			this->pictureBox4->TabStop = false;
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(27, 100);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(52, 13);
			this->label18->TabIndex = 10;
			this->label18->Text = L"PDV broj:";
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(113, 93);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(172, 20);
			this->textBox8->TabIndex = 9;
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Location = System::Drawing::Point(27, 53);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(37, 13);
			this->label19->TabIndex = 8;
			this->label19->Text = L"Naziv:";
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(113, 46);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(172, 20);
			this->textBox9->TabIndex = 7;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->ClientSize = System::Drawing::Size(546, 743);
			this->Controls->Add(this->tabControl1);
			this->Controls->Add(this->toolStrip1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"Form1";
			this->Text = L"Internet accounting";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->toolStrip1->ResumeLayout(false);
			this->toolStrip1->PerformLayout();
			this->tabControl1->ResumeLayout(false);
			this->Unos->ResumeLayout(false);
			this->Unos->PerformLayout();
			this->groupBox5->ResumeLayout(false);
			this->groupBox5->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->tabControl2->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox2))->EndInit();
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			this->Pretraga->ResumeLayout(false);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->Promjena->ResumeLayout(false);
			this->Promjena->PerformLayout();
			this->panel4->ResumeLayout(false);
			this->panel4->PerformLayout();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->groupBox4->ResumeLayout(false);
			this->groupBox4->PerformLayout();
			this->tabControl3->ResumeLayout(false);
			this->p_osoba->ResumeLayout(false);
			this->p_osoba->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox5))->EndInit();
			this->p_firma->ResumeLayout(false);
			this->p_firma->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox6))->EndInit();
			this->Placanje->ResumeLayout(false);
			this->Placanje->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->tabPage3->ResumeLayout(false);
			this->tabPage3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox3))->EndInit();
			this->tabPage4->ResumeLayout(false);
			this->tabPage4->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox4))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Unesi_Click(System::Object^  sender, System::EventArgs^  e) {
				
			 }
private: System::Void Ime_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void comboBox2_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
			
		 }
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void groupBox4_Enter(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void tabPage5_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void label34_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void groupBox5_Enter(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void toolStripMenuItem1_Click(System::Object^  sender, System::EventArgs^  e) {
			 tabControl1->SelectedIndex = 1;
		 }

private: System::Void Unesi_Click_1(System::Object^  sender, System::EventArgs^  e) {
		try{

			for each (Korisnik ^k in korisnici)
				if (c_username->Text == k->Username ())
					throw "Isti username!";

			 if (tabControl2->SelectedIndex == 0)
			 {
				
				KorisnikOsoba ^ko = gcnew KorisnikOsoba (c_username->Text, c_CBox_paket->SelectedItem->ToString (), c_adresa->Text, c_password->Text, int::Parse (c_telefon->Text), c_chBox_modem->Checked, c_ime->Text, c_prezime->Text, c_broj_licne_karte->Text);
				korisnici->Add (ko);

				c_username->Clear ();
				c_CBox_paket->SelectedIndex = -1; 
				c_adresa->Clear (); 
				c_password->Clear (); 
				c_telefon->Clear ();
				c_chBox_modem->Checked = false; 
				c_ime->Clear (); 
				c_prezime->Clear (); 
				c_broj_licne_karte->Clear ();

				MessageBox::Show ("Uspješno ste unijeli podatke o osobi.", "Unos korisnika", MessageBoxButtons::OK, MessageBoxIcon::Information);

			 }
			 if (tabControl2->SelectedIndex == 1)
			 {
				 KorisnikFirma ^kf = gcnew KorisnikFirma (c_username->Text, c_CBox_paket->SelectedItem->ToString (), c_adresa->Text, c_password->Text, int::Parse (c_telefon->Text), c_chBox_modem->Checked, c_naziv_firme->Text, int::Parse (c_PDV_broj->Text));
				korisnici->Add (kf);

				c_username->Clear ();
				c_CBox_paket->SelectedIndex = -1; 
				c_adresa->Clear (); 
				c_password->Clear (); 
				c_telefon->Clear ();
				c_chBox_modem->Checked = false; 
				c_naziv_firme->Clear (); 
				c_PDV_broj->Clear (); 

				MessageBox::Show ("Uspješno ste unijeli podatke o firmi.", "Unos korisnika", MessageBoxButtons::OK, MessageBoxIcon::Information);
			 }
		}
		catch (const char greska[])
		{	
			MessageBox::Show ("Veæ postoji korisnik sa istim username-mom!", "Greška", MessageBoxButtons::OK, MessageBoxIcon::Error); 

		}
		 catch (...)
		 {
			 MessageBox::Show ("Greška pri unosu. Podaci o korisniku nisu spašeni.", "Unos korisnika", MessageBoxButtons::OKCancel, MessageBoxIcon::Error);
		 }

			
		 }
private: System::Void izaðiToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 Close ();
		 }
private: System::Void toolStripMenuItem2_Click(System::Object^  sender, System::EventArgs^  e) {
			 tabControl1->SelectedIndex = 2;
		 }
private: System::Void unosNovogKorisnikaToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 tabControl1->SelectedIndex = 0;

		 }
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
			 Close ();
		 }
private: System::Void plaæanjeToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 tabControl1->SelectedIndex = 3;
			 
		 }
private: System::Void comboBox6_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
			listBox_pretraga->Items->Clear ();
			unos_pretrazivanje->ReadOnly = false;
			if (cbx_pretrazivanje->SelectedItem == "Aktivni raèuni" || cbx_pretrazivanje->SelectedItem == "Zamrznuti raèuni" || cbx_pretrazivanje->SelectedItem == "Suspendovani raèuni")
				unos_pretrazivanje->ReadOnly = true;

		 }
private: System::Void textBox20_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void button2_Click_1(System::Object^  sender, System::EventArgs^  e) {

			 listBox_pretraga->Items->Clear ();
			 String ^uneseno = unos_pretrazivanje->Text;
			 String ^atribut = cbx_pretrazivanje->SelectedItem->ToString ();

			 unos_pretrazivanje->Clear ();
			 cbx_pretrazivanje->SelectedIndex = -1;

			 

			 if (atribut == "Username")
			 {			 
				 for each (Korisnik ^k in korisnici)
					 if (uneseno == k->Username ())
						 listBox_pretraga->Items->Add (k->Username () + "\t\t" +  k->Print ());			
			 }

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
			
			 if (atribut == "Ime osobe")
			 {			 
				 for each (Korisnik ^korisnik in korisnici)
				 {

					  try
					 {
						 KorisnikOsoba ^k = dynamic_cast <KorisnikOsoba ^> (korisnik);
						 if (uneseno == k->Ime ())
						 listBox_pretraga->Items->Add (k->Username () + "\t\t" +  k->Print ());	
					 }
					 catch (...)
					 {
						 						 
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
						 listBox_pretraga->Items->Add (k->Username () + "\t\t" +  k->Print ());	
					 }
					 catch (...)
					 {
												 
					 } 
				 }
			 }
			 

			 
			 if (listBox_pretraga->Items->Count == 0)
				 MessageBox::Show ("Nema trazenih podataka.");



		 }
private: System::Void tabControl1_Enter(System::Object^  sender, System::EventArgs^  e) {
			 //tabPromjena
		 }
private: System::Void Pretraga_Enter(System::Object^  sender, System::EventArgs^  e) {
			listBox_pretraga->Items->Clear ();
			unos_pretrazivanje->Clear ();
			cbx_pretrazivanje->SelectedIndex = -1;

		 }
private: System::Void toolStripButton2_Click(System::Object^  sender, System::EventArgs^  e) {

			 try{			 
			 if (tabControl2->SelectedIndex == 0)
			 {
				KorisnikOsoba ^ko = gcnew KorisnikOsoba (c_username->Text, c_CBox_paket->SelectedItem->ToString (), c_adresa->Text, c_password->Text, int::Parse (c_telefon->Text), c_chBox_modem->Checked, c_ime->Text, c_prezime->Text, c_broj_licne_karte->Text);
				korisnici->Add (ko);

				c_username->Clear ();
				c_CBox_paket->SelectedIndex = -1; 
				c_adresa->Clear (); 
				c_password->Clear (); 
				c_telefon->Clear ();
				c_chBox_modem->Checked = false; 
				c_ime->Clear (); 
				c_prezime->Clear (); 
				c_broj_licne_karte->Clear ();

				MessageBox::Show ("Uspješno ste unijeli podatke o osobi.", "Unos korisnika", MessageBoxButtons::OK, MessageBoxIcon::Information);

			 }
			 if (tabControl2->SelectedIndex == 1)
			 {
				 KorisnikFirma ^kf = gcnew KorisnikFirma (c_username->Text, c_CBox_paket->SelectedItem->ToString (), c_adresa->Text, c_password->Text, int::Parse (c_telefon->Text), c_chBox_modem->Checked, c_naziv_firme->Text, int::Parse (c_PDV_broj->Text));
				korisnici->Add (kf);

				c_username->Clear ();
				c_CBox_paket->SelectedIndex = -1; 
				c_adresa->Clear (); 
				c_password->Clear (); 
				c_telefon->Clear ();
				c_chBox_modem->Checked = false; 
				c_naziv_firme->Clear (); 
				c_PDV_broj->Clear (); 

				MessageBox::Show ("Uspješno ste unijeli podatke o firmi.", "Unos korisnika", MessageBoxButtons::OK, MessageBoxIcon::Information);
			 }
		}
		 catch (...)
		 {
			 MessageBox::Show ("Greška pri unosu. Podaci o korisniku nisu spašeni.", "Unos korisnika", MessageBoxButtons::OKCancel, MessageBoxIcon::Error);
		 }



		 }
private: System::Void spasiUnosToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 try{			 
			 if (tabControl2->SelectedIndex == 0)
			 {
				KorisnikOsoba ^ko = gcnew KorisnikOsoba (c_username->Text, c_CBox_paket->SelectedItem->ToString (), c_adresa->Text, c_password->Text, int::Parse (c_telefon->Text), c_chBox_modem->Checked, c_ime->Text, c_prezime->Text, c_broj_licne_karte->Text);
				korisnici->Add (ko);

				c_username->Clear ();
				c_CBox_paket->SelectedIndex = -1; 
				c_adresa->Clear (); 
				c_password->Clear (); 
				c_telefon->Clear ();
				c_chBox_modem->Checked = false; 
				c_ime->Clear (); 
				c_prezime->Clear (); 
				c_broj_licne_karte->Clear ();

				MessageBox::Show ("Uspješno ste unijeli podatke o osobi.", "Unos korisnika", MessageBoxButtons::OK, MessageBoxIcon::Information);

			 }
			 if (tabControl2->SelectedIndex == 1)
			 {
				 KorisnikFirma ^kf = gcnew KorisnikFirma (c_username->Text, c_CBox_paket->SelectedItem->ToString (), c_adresa->Text, c_password->Text, int::Parse (c_telefon->Text), c_chBox_modem->Checked, c_naziv_firme->Text, int::Parse (c_PDV_broj->Text));
				korisnici->Add (kf);

				c_username->Clear ();
				c_CBox_paket->SelectedIndex = -1; 
				c_adresa->Clear (); 
				c_password->Clear (); 
				c_telefon->Clear ();
				c_chBox_modem->Checked = false; 
				c_naziv_firme->Clear (); 
				c_PDV_broj->Clear (); 

				MessageBox::Show ("Uspješno ste unijeli podatke o firmi.", "Unos korisnika", MessageBoxButtons::OK, MessageBoxIcon::Information);
			 }
		}
		 catch (...)
		 {
			 MessageBox::Show ("Greška pri unosu. Podaci o korisniku nisu spašeni.", "Unos korisnika", MessageBoxButtons::OKCancel, MessageBoxIcon::Error);
		 }




		 }
private: System::Void Promjena_Enter(System::Object^  sender, System::EventArgs^  e) {
				p_username->Clear ();
				p_paket->SelectedIndex = -1; 
				p_adresa->Clear (); 
				p_password->Clear (); 
				p_telefon->Clear ();
				p_modem->Checked = false; 
				p_ime->Clear ();
				p_prezime->Clear ();
				p_broj_licne_karte->Clear ();
				p_naziv->Clear (); 
				p_PDV_broj->Clear ();
				cBox_odabir->Items->Clear ();
				p_mirovanje->Checked = false;
				p_suspenzija->Checked = false;
				for each (Korisnik ^k in korisnici)
					cBox_odabir->Items->Add (k->Username ());
		 }
private: System::Void cBox_odabir_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
			 //Korisnik ^korisnik = cBox_odabir->SelectedItem->ToString ();
			 for each (Korisnik ^korisnik in korisnici)
				 if (korisnik->Username () == cBox_odabir->SelectedItem->ToString())
				 {
					 p_adresa->Text = korisnik->Adresa ();
					 p_telefon->Text = Convert::ToString (korisnik->Telefon ());
					 p_paket->SelectedItem = korisnik->Naziv_paketa ();
					 p_username->Text = korisnik->Username ();
					 p_password->Text = korisnik->Password ();
					 p_modem->Checked = korisnik->Modem ();
					 p_mirovanje->Checked = korisnik->Mirovanje ();
					 p_suspenzija->Checked = korisnik->Suspenzija ();
					
					
					 try
					 {
						KorisnikOsoba ^k = dynamic_cast <KorisnikOsoba ^> (korisnik);
						 p_ime->Text = k->Ime ();
						 p_prezime->Text = k->Prezime ();
						 p_broj_licne_karte->Text = k->Broj_licne_karte ();
						 tabControl3->SelectedIndex = 0;
					 }
					 catch (...)
					 {
						 KorisnikFirma ^k = dynamic_cast <KorisnikFirma ^> (korisnik);
						 p_naziv->Text = k->Naziv ();
						 p_PDV_broj->Text = Convert::ToString (k->PDV_broj ());
						 tabControl3->SelectedIndex = 1;
					 } 

				 }
		 }
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {

			 for each (Korisnik ^k in korisnici)
			 {
				 if (k->Username () == cBox_odabir->SelectedItem->ToString())
				 {
					 try
					 {
						 k->Adresa (p_adresa->Text);
						 k->Telefon (int::Parse (p_telefon->Text));
						 k->Naziv_paketa (p_paket->SelectedItem->ToString());
						 k->Username (p_username->Text);
						 k->Password (p_password->Text);
						 k->Modem (p_modem->Checked);
						 k->Mirovanje (p_mirovanje->Checked);
						 k->Suspenzija (p_suspenzija->Checked);

						  try
						 {
							KorisnikOsoba ^ko = dynamic_cast <KorisnikOsoba ^> (k);
							 ko->Ime (p_ime->Text);
							 ko->Prezime (p_prezime->Text);
							 ko->Broj_licne_karte (p_broj_licne_karte->Text);
							 
						 }
						 catch (...)
						 {
							 KorisnikFirma ^kf = dynamic_cast <KorisnikFirma ^> (k);
							 kf->Naziv (p_naziv->Text);
							 kf->PDV_broj (int::Parse (p_PDV_broj->Text));
						 } 

						 p_adresa->Clear ();
						 p_telefon->Clear ();
						 p_paket->SelectedIndex = -1;
						 p_username->Clear ();
						 p_password->Clear ();
						 p_modem->Checked = false;
						 p_mirovanje->Checked = false;
						 p_suspenzija->Checked = false;
						 p_ime->Clear ();
						 p_prezime->Clear ();
						 p_broj_licne_karte->Clear ();
						 p_naziv->Clear ();
						 p_PDV_broj->Clear ();
						 //cBox_odabir->SelectedIndex = -1;

						 MessageBox::Show ("Promjene su uspješno spašene.", "Promjena podataka", MessageBoxButtons::OK, MessageBoxIcon::Information);
					 }
					 catch (...)
					 {
						 MessageBox::Show ("Promjene nisu spašene.", "Promjena podataka", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
					 }					 
				 }
			 }

			 

		 }
private: System::Void Placanje_Enter(System::Object^  sender, System::EventArgs^  e) {

				t_korisnici->Items->Clear ();
				t_mjesec->SelectedIndex = -1;
				t_placeno->Checked = false;
				for each (Korisnik ^k in korisnici)
					t_korisnici->Items->Add (k->Username ());
		 }
private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
			 try
			 {				
				Racun ^r = gcnew Racun (t_korisnici->SelectedItem->ToString (), t_mjesec->SelectedItem->ToString (), t_placeno->Checked);
				racuni->Add (r);
				
				for each (Korisnik ^k in korisnici)
					if (k->Username () == t_korisnici->SelectedItem->ToString ())
					{
						if (t_placeno->Checked == false) 
							k->Suspenzija (true);
						else
							k->Suspenzija(false);
					}

				MessageBox::Show ("Izvršen obraèun za mjesec " + t_mjesec->SelectedItem->ToString () + ".", "Raèuni", MessageBoxButtons::OK, MessageBoxIcon::Information);
				
			 }
			 catch (...)
			 {
				 MessageBox::Show ("Greska pri unosu.", "Plaæanje", MessageBoxButtons::OK, MessageBoxIcon::Error);
			 }



		 }
private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
			for each (Paket ^p in paketi)
			{
				c_CBox_paket->Items->Add (p->Naziv_paketa ());
				p_paket->Items->Add (p->Naziv_paketa ());
			};


		 }
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			 Close ();
		 }
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
			 
			 try
			 {
				 Paket ^paketic;
				 Korisnik ^korisnic;
				 for each (Korisnik ^k in korisnici)
					 if (k->Username () == t_korisnici->SelectedItem->ToString ())
					 {
						 korisnic = k;
						 String ^nazivpaketa = k->Naziv_paketa ();
						 for each (Paket ^p in paketi)
							 if (p->Naziv_paketa () == nazivpaketa)
								 paketic = p;
					 }

				 RacunPrint ^rp = gcnew RacunPrint ((Racun ^) (racuni [racuni->Count - 1]), paketic, korisnic); 
				 rp->Show ();
			 }
			 catch (...)
			 {
				 MessageBox::Show ("Morate unijeti podatke za ispis.", "Greska", MessageBoxButtons::OK, MessageBoxIcon::Error);
			 }

			 t_korisnici->SelectedIndex = -1;
			 t_mjesec->SelectedIndex = -1;
			 t_placeno->Checked = false;

}
private: System::Void štampajToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {

			  try
			 {
				 Paket ^paketic;
				 Korisnik ^korisnic;
				 for each (Korisnik ^k in korisnici)
					 if (k->Username () == t_korisnici->SelectedItem->ToString ())
					 {
						 korisnic = k;
						 String ^nazivpaketa = k->Naziv_paketa ();
						 for each (Paket ^p in paketi)
							 if (p->Naziv_paketa () == nazivpaketa)
								 paketic = p;
					 }

				 RacunPrint ^rp = gcnew RacunPrint ((Racun ^) (racuni [racuni->Count - 1]), paketic, korisnic); 
				 rp->Show ();
			 }
			 catch (...)
			 {
				 MessageBox::Show ("Morate unijeti podatke za ispis.", "Greska", MessageBoxButtons::OK, MessageBoxIcon::Error);
			 }

			 t_korisnici->SelectedIndex = -1;
			 t_mjesec->SelectedIndex = -1;
			 t_placeno->Checked = false;

}
private: System::Void toolStripButton1_Click(System::Object^  sender, System::EventArgs^  e) {

			 try
			 {
				 Paket ^paketic;
				 Korisnik ^korisnic;
				 for each (Korisnik ^k in korisnici)
					 if (k->Username () == t_korisnici->SelectedItem->ToString ())
					 {
						 korisnic = k;
						 String ^nazivpaketa = k->Naziv_paketa ();
						 for each (Paket ^p in paketi)
							 if (p->Naziv_paketa () == nazivpaketa)
								 paketic = p;
					 }
				 RacunPrint ^rp = gcnew RacunPrint ((Racun ^) (racuni [racuni->Count - 1]), paketic, korisnic); 
				 rp->Show ();
			 }
			 catch (...)
			 {
				 MessageBox::Show ("Morate unijeti podatke za ispis.", "Greska", MessageBoxButtons::OK, MessageBoxIcon::Error);
			 }

			 t_korisnici->SelectedIndex = -1;
			 t_mjesec->SelectedIndex = -1;
			 t_placeno->Checked = false;

		}






};
}

