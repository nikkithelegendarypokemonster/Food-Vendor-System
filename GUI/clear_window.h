#pragma once
#include<string>
#include<sstream>
#include<fstream>
#include<cmath>
#include<msclr/marshal_cppstd.h>
namespace GUI {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for clear_window
	/// </summary>
	public ref class clear_window : public System::Windows::Forms::Form
	{
	public:
		clear_window(void)
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
		~clear_window()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	protected: 
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	public: System::Windows::Forms::TextBox^  textBox1;
	public: System::Windows::Forms::TextBox^  textBox2;

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
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(254, 193);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Confirm";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &clear_window::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(146, 37);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(148, 13);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Enter Admin ID and Password";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(108, 95);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(18, 13);
			this->label2->TabIndex = 2;
			this->label2->Text = L"ID";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(90, 142);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(53, 13);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Password";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(149, 92);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(180, 20);
			this->textBox1->TabIndex = 4;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(149, 139);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(180, 20);
			this->textBox2->TabIndex = 5;
			// 
			// clear_window
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(421, 270);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Name = L"clear_window";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Void";
			this->Load += gcnew System::EventHandler(this, &clear_window::clear_window_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

private: System::Void clear_window_Load(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			 msclr::interop::marshal_context convert;
			 std::string id=convert.marshal_as<std::string>(this->textBox1->Text);
			 std::string pass=convert.marshal_as<std::string>(this->textBox2->Text);
			 if(id=="1010"&& pass=="admin_access1899"){
				this->Hide();
			 }else{
			 MessageBox::Show("Error Pleasu put Right Credentials","POS System",MessageBoxButtons::OK,MessageBoxIcon::Exclamation);
			 }
		 }
};
}
