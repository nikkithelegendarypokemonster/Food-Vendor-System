#pragma once
#include"stdafx.h"
#include"Interface.h"
#include"SignUp.h"
#include"Global.h"
#include"admin_DASHBOARD.h"
#include<string>
namespace GUI {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
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
		}

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
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Panel^  panel1;



	private: System::Windows::Forms::TextBox^  id;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::ProgressBar^  bar;
	private: System::Windows::Forms::Timer^  timer1;
	private: System::Windows::Forms::Label^  text1;
	private: System::Windows::Forms::TextBox^  pass;
	private: System::Windows::Forms::Label^  label4;

	private: System::Windows::Forms::Button^  button1;


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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->pass = (gcnew System::Windows::Forms::TextBox());
			this->id = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->bar = (gcnew System::Windows::Forms::ProgressBar());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->text1 = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::Navy;
			this->label2->Location = System::Drawing::Point(90, 124);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(120, 39);
			this->label2->TabIndex = 1;
			this->label2->Text = L"LOGIN";
			this->label2->MouseEnter += gcnew System::EventHandler(this, &Form1::label2_MouseEnter);
			this->label2->MouseLeave += gcnew System::EventHandler(this, &Form1::label2_MouseLeave);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::Transparent;
			this->panel1->Controls->Add(this->button1);
			this->panel1->Controls->Add(this->label4);
			this->panel1->Controls->Add(this->pass);
			this->panel1->Controls->Add(this->id);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Location = System::Drawing::Point(250, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(335, 178);
			this->panel1->TabIndex = 2;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::LightGray;
			this->button1->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Gray;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button1->Location = System::Drawing::Point(226, 109);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 32);
			this->button1->TabIndex = 6;
			this->button1->Text = L"Login";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label4->Location = System::Drawing::Point(39, 70);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(130, 19);
			this->label4->TabIndex = 4;
			this->label4->Text = L"ENTER PASSWORD";
			// 
			// pass
			// 
			this->pass->Location = System::Drawing::Point(201, 70);
			this->pass->Name = L"pass";
			this->pass->PasswordChar = '*';
			this->pass->Size = System::Drawing::Size(100, 20);
			this->pass->TabIndex = 3;
			// 
			// id
			// 
			this->id->Location = System::Drawing::Point(201, 28);
			this->id->MaxLength = 6;
			this->id->Name = L"id";
			this->id->Size = System::Drawing::Size(100, 20);
			this->id->TabIndex = 1;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label3->Location = System::Drawing::Point(39, 29);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(140, 19);
			this->label3->TabIndex = 0;
			this->label3->Text = L"ENTER EMPLOYEE ID";
			// 
			// bar
			// 
			this->bar->ForeColor = System::Drawing::Color::DeepSkyBlue;
			this->bar->Location = System::Drawing::Point(266, 184);
			this->bar->Name = L"bar";
			this->bar->Size = System::Drawing::Size(319, 10);
			this->bar->TabIndex = 3;
			this->bar->Visible = false;
			// 
			// timer1
			// 
			this->timer1->Tick += gcnew System::EventHandler(this, &Form1::timer1_Tick);
			// 
			// text1
			// 
			this->text1->AutoSize = true;
			this->text1->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->text1->Location = System::Drawing::Point(410, 200);
			this->text1->Name = L"text1";
			this->text1->Size = System::Drawing::Size(0, 13);
			this->text1->TabIndex = 4;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(597, 289);
			this->Controls->Add(this->text1);
			this->Controls->Add(this->bar);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->label2);
			this->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"Form1";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Login";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) {
				 this->bar->Increment(1);
				 this->text1->Visible=true;
			 this->text1->Text = this->bar->Value.ToString() + "% Completed";
			 if(this->bar->Value==this->bar->Maximum){
				 this->timer1->Stop();
				 Interface^ MAIN= gcnew Interface(this->id->Text);
				 this->id->Text="";
			 this->pass->Text="";
				 this->Hide();
				 MAIN->ShowDialog();
				 bar->Visible=false;
				 this->text1->Visible=false;
				 this->Show();
				 this->bar->Value=0;
				 }
			 }
private: System::Void label2_MouseEnter(System::Object^  sender, System::EventArgs^  e) {
			 this->label2->ForeColor=System::Drawing::Color::Red;
			 this->label2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 24, System::Drawing::FontStyle::Underline, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
		 }
private: System::Void label2_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
			 this->label2->ForeColor=System::Drawing::Color::Navy;
			 this->label2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
		 }
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			 String ^  Id=this->id->Text;
			 String ^  Pass=this->pass->Text;
			 int   PASS=getPASS(Pass);
			 int  ID=getID(Id);
//ADMIN KEY
			 if(Id=="1010" && Pass=="admin_access1899"){
				admin_DASHBOARD^ ad=gcnew admin_DASHBOARD();
				this->id->Text="";
			 this->pass->Text="";
				this->Hide();
				ad->ShowDialog();
				this->Show();
			 }


//==============================================
			 else if((PASS == 1 && ID==1)){
				 bar->Visible=true;
				 this->bar->ForeColor = System::Drawing::Color::DeepSkyBlue;
				 this->timer1->Start();
			 }else if(Id==""||Pass==""){
				 if(MessageBox::Show("Please fill Up all important information","POS System",MessageBoxButtons::OK,MessageBoxIcon::Exclamation)==System::Windows::Forms::DialogResult::OK){
					 id->Text="";
					 pass->Text="";
				 }
			 }else{
			 label2->ForeColor=System::Drawing::Color::Red;
			 if(MessageBox::Show("Error","POS System",MessageBoxButtons::OK,MessageBoxIcon::Error)==System::Windows::Forms::DialogResult::OK){
						this->id->Text="";
						this->pass->Text="";
						this->label2->ForeColor=System::Drawing::Color::Navy;
					}
			 }

		 }
private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
			 this->id->Text="";
			 this->pass->Text="";
		 }
};
}

