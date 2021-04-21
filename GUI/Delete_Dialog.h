#pragma once
#include"stdafx.h"
#include<msclr/marshal_cppstd.h>
#include<string>
#include<fstream>
#include<stdio.h>
#include<iostream>
#include<sstream>
namespace GUI {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Delete_Dialog
	/// </summary>
	public ref class Delete_Dialog : public System::Windows::Forms::Form
	{
	public:
		Delete_Dialog(void)
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
		~Delete_Dialog()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	protected: 
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  Del;
	private: System::Windows::Forms::ListBox^  list_emp;
	private: System::Windows::Forms::Label^  label2;







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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->Del = (gcnew System::Windows::Forms::TextBox());
			this->list_emp = (gcnew System::Windows::Forms::ListBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(167, 212);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(93, 27);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Confirm";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Delete_Dialog::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(116, 31);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(192, 13);
			this->label1->TabIndex = 1;
			this->label1->Text = L"What employee do you want to delete\?";
			// 
			// Del
			// 
			this->Del->Location = System::Drawing::Point(167, 186);
			this->Del->Name = L"Del";
			this->Del->Size = System::Drawing::Size(93, 20);
			this->Del->TabIndex = 2;
			// 
			// list_emp
			// 
			this->list_emp->FormattingEnabled = true;
			this->list_emp->Location = System::Drawing::Point(75, 52);
			this->list_emp->Name = L"list_emp";
			this->list_emp->Size = System::Drawing::Size(288, 108);
			this->list_emp->TabIndex = 3;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(164, 170);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(107, 13);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Enter ID of Employee";
			// 
			// Delete_Dialog
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(421, 281);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->list_emp);
			this->Controls->Add(this->Del);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Name = L"Delete_Dialog";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Delete_Dialog";
			this->Load += gcnew System::EventHandler(this, &Delete_Dialog::Delete_Dialog_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			msclr::interop::marshal_context convert;
			std::string idd=convert.marshal_as<std::string>(this->Del->Text);
			std::string name;
			std::string  password;
			std::string id;
			 std::ifstream File("Employee.txt");
			 std::ofstream Temp("temp.txt");
			 while(File>>id>>name>>password){
				 if(id!=idd){
					Temp<<id<<' '<<name<<' '<<password<<"\n";
				 }
			 }
			 File.close();
			 Temp.close();
			 remove("Employee.txt");
			 rename("temp.txt","Employee.txt");
			 this->Close();
		}
	private: System::Void Delete_Dialog_Load(System::Object^  sender, System::EventArgs^  e) {
				 std::string id;
				 std:: string name;
				 std::string pass;
					 std::ifstream File("Employee.txt",std::ios::app);
				 while(File>>id>>name>>pass){
					 String^ ID=gcnew String(id.c_str());
					 String^ Name=gcnew String(name.c_str());
					 String^ PASS=gcnew String(pass.c_str());
					this->list_emp->Items->Add(ID+" "+Name+" "+PASS+"\n");
				 }
			 }
};
}
