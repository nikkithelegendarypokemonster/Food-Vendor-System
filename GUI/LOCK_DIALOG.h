#pragma once
#include <fstream>
#include <string>
#include<msclr/marshal_cppstd.h>
namespace GUI {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for LOCK_DIALOG
	/// </summary>
	public ref class LOCK_DIALOG : public System::Windows::Forms::Form
	{
	public:
		LOCK_DIALOG(void)
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
		~LOCK_DIALOG()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	protected: 
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  ID_CHK;
	private: System::Windows::Forms::TextBox^  PASS_CHK;


	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Button^  Lck_btn;

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
			this->ID_CHK = (gcnew System::Windows::Forms::TextBox());
			this->PASS_CHK = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->Lck_btn = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(196, 57);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(53, 52);
			this->label1->TabIndex = 0;
			this->label1->Text = L"STATUS:\r\n\r\n\r\nLOCKED";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(151, 126);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(168, 39);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Enter Employee ID and Password \r\nor\r\nAdmin ID and Password";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// ID_CHK
			// 
			this->ID_CHK->Location = System::Drawing::Point(154, 177);
			this->ID_CHK->Name = L"ID_CHK";
			this->ID_CHK->Size = System::Drawing::Size(150, 20);
			this->ID_CHK->TabIndex = 2;
			// 
			// PASS_CHK
			// 
			this->PASS_CHK->Location = System::Drawing::Point(154, 203);
			this->PASS_CHK->Name = L"PASS_CHK";
			this->PASS_CHK->Size = System::Drawing::Size(150, 20);
			this->PASS_CHK->TabIndex = 3;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(111, 177);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(21, 13);
			this->label3->TabIndex = 4;
			this->label3->Text = L"ID:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(75, 206);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(73, 13);
			this->label4->TabIndex = 5;
			this->label4->Text = L"PASSWORD:";
			// 
			// Lck_btn
			// 
			this->Lck_btn->Location = System::Drawing::Point(300, 229);
			this->Lck_btn->Name = L"Lck_btn";
			this->Lck_btn->Size = System::Drawing::Size(75, 23);
			this->Lck_btn->TabIndex = 6;
			this->Lck_btn->Text = L"Confirm";
			this->Lck_btn->UseVisualStyleBackColor = true;
			this->Lck_btn->Click += gcnew System::EventHandler(this, &LOCK_DIALOG::Lck_btn_Click);
			// 
			// LOCK_DIALOG
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(465, 308);
			this->ControlBox = false;
			this->Controls->Add(this->Lck_btn);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->PASS_CHK);
			this->Controls->Add(this->ID_CHK);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"LOCK_DIALOG";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"LOCK_DIALOG";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Lck_btn_Click(System::Object^  sender, System::EventArgs^  e) {
				 msclr::interop::marshal_context convert;
				 std::ifstream File("Employee.txt");
				 std::string id;
				 std::string name;
				 std::string pass;
				 std::string idd=convert.marshal_as<std::string>(this->ID_CHK->Text);
				 std::string password=convert.marshal_as<std::string>(this->PASS_CHK->Text);

				 while(File>>id>>name>>pass){
					 if(((idd==id)&&(password==pass))||((idd=="1010")&&(password=="admin_access1899"))){
						this->Close();
						break;
					 }else{
					 MessageBox::Show("Wrong Credentials","POS System",MessageBoxButtons::OK,MessageBoxIcon::Error);
					 break;
					 }
				 }
					 
				 
				 
			 }
};
}
