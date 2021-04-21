#pragma once
#include"stdafx.h"
#include<iostream>
#include<ctime>
#include<cstdlib>
#include<sstream>
#include<string>
#include<fstream>
#include<msclr\marshal_cppstd.h>
namespace GUI {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for SignUp
	/// </summary>
	public ref class SignUp : public System::Windows::Forms::Form
	{
	public:
		SignUp(void)
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
		~SignUp()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	protected: 
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Button^  Confirm;

	private: System::Windows::Forms::TextBox^  name;
	private: System::Windows::Forms::TextBox^  password;
	private: System::Windows::Forms::Label^  id_tag;




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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->Confirm = (gcnew System::Windows::Forms::Button());
			this->name = (gcnew System::Windows::Forms::TextBox());
			this->password = (gcnew System::Windows::Forms::TextBox());
			this->id_tag = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(37, 45);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(24, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"ID :";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(37, 91);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(41, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Name :";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(37, 142);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(59, 13);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Password :";
			// 
			// Confirm
			// 
			this->Confirm->Location = System::Drawing::Point(204, 213);
			this->Confirm->Name = L"Confirm";
			this->Confirm->Size = System::Drawing::Size(75, 23);
			this->Confirm->TabIndex = 3;
			this->Confirm->Text = L"Confirm";
			this->Confirm->UseVisualStyleBackColor = true;
			this->Confirm->Click += gcnew System::EventHandler(this, &SignUp::Confirm_Click);
			// 
			// name
			// 
			this->name->Location = System::Drawing::Point(110, 88);
			this->name->Name = L"name";
			this->name->Size = System::Drawing::Size(100, 20);
			this->name->TabIndex = 4;
			// 
			// password
			// 
			this->password->Location = System::Drawing::Point(110, 139);
			this->password->Name = L"password";
			this->password->Size = System::Drawing::Size(100, 20);
			this->password->TabIndex = 5;
			// 
			// id_tag
			// 
			this->id_tag->AutoSize = true;
			this->id_tag->Location = System::Drawing::Point(107, 45);
			this->id_tag->Name = L"id_tag";
			this->id_tag->Size = System::Drawing::Size(0, 13);
			this->id_tag->TabIndex = 6;
			// 
			// SignUp
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Ivory;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(291, 248);
			this->Controls->Add(this->id_tag);
			this->Controls->Add(this->password);
			this->Controls->Add(this->name);
			this->Controls->Add(this->Confirm);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"SignUp";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"SignUp";
			this->Load += gcnew System::EventHandler(this, &SignUp::SignUp_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

 		}
#pragma endregion
	private: System::Void SignUp_Load(System::Object^  sender, System::EventArgs^  e) {
				 int max_no=9;
				 int min_num=0;
				 this->name->Text="";
				 this->password->Text="";
				 srand((unsigned)time(NULL));
				//convert syntax from [1] string to String^ [2]String^ to string
				 //String^ MyString = gcnew String("insert string name here".c_str());
				 //std::string NAME=context.marshal_as<std::string> (name->Text);
				 //==============================================
				 //putt random value in id
				 int id_rand[200];
				 std::string id_string;
				 A:for(int i=0;i<6;i++){
					 id_rand[i]=rand()%max_no+min_num;
				 }
				 //conversion int to string to String^
				 std::stringstream idstream;
				 for(int k=0;k<6;k++){
					idstream<<id_rand[k];
				 }
				 id_string=idstream.str();
				 std::ifstream FileScan ("Employee.txt");
				 std::string id;
				 std::string name;
				 std::string password;
				 while(FileScan>>id>>name>>password){
					 // comparing if idstring and the current id is same if same then reapeat process  
					 if(id_string==id){
						 id_string="";
						 goto A;
					 }
				 }
				 String^ id_conf = gcnew String(id_string.c_str());
				 // label show convert string
				 this->id_tag->Text=id_conf;
				 //===================================================

			 }
private: System::Void Confirm_Click(System::Object^  sender, System::EventArgs^  e) {
			 msclr::interop::marshal_context context;
			 //string formats 
			 std::string ID=context.marshal_as<std::string>(id_tag->Text);
			 std::string NAME=context.marshal_as<std::string> (this->name->Text);
			 std::string PASS=context.marshal_as<std::string> (this->password->Text);
			//================================================================
			 //put the converted strings to database
			 std::ofstream DATA("Employee.txt",std::ios::app);
					DATA<<ID<<' '<<NAME<<' '<<PASS<<"\n";
				DATA.close();
				this->Close();
		 }
		 
};
}
