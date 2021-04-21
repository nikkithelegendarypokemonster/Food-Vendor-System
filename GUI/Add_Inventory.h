#pragma once
#include<msclr\marshal_cppstd.h>
#include<string>
#include<sstream>
#include<fstream>
namespace GUI {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Add_Inventory
	/// </summary>
	public ref class Add_Inventory : public System::Windows::Forms::Form
	{
	public:
		Add_Inventory(void)
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
		~Add_Inventory()
		{
			if (components)
			{
				delete components;
			}
		}

	protected: 

	protected: 
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  quantity;
	private: System::Windows::Forms::Button^  Add;





	private: System::Windows::Forms::ListView^  list;
	private: System::Windows::Forms::ColumnHeader^  columnHeader1;
	private: System::Windows::Forms::ColumnHeader^  columnHeader2;

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
			this->quantity = (gcnew System::Windows::Forms::TextBox());
			this->Add = (gcnew System::Windows::Forms::Button());
			this->list = (gcnew System::Windows::Forms::ListView());
			this->columnHeader1 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader2 = (gcnew System::Windows::Forms::ColumnHeader());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(143, 30);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(97, 13);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Choose which Item";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(156, 205);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(64, 13);
			this->label2->TabIndex = 2;
			this->label2->Text = L"How Many\?";
			// 
			// quantity
			// 
			this->quantity->Location = System::Drawing::Point(136, 221);
			this->quantity->Name = L"quantity";
			this->quantity->Size = System::Drawing::Size(104, 20);
			this->quantity->TabIndex = 3;
			// 
			// Add
			// 
			this->Add->Location = System::Drawing::Point(146, 247);
			this->Add->Name = L"Add";
			this->Add->Size = System::Drawing::Size(75, 23);
			this->Add->TabIndex = 4;
			this->Add->Text = L"Add";
			this->Add->UseVisualStyleBackColor = true;
			this->Add->Click += gcnew System::EventHandler(this, &Add_Inventory::Add_Click);
			// 
			// list
			// 
			this->list->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(2) {this->columnHeader1, this->columnHeader2});
			this->list->Location = System::Drawing::Point(61, 46);
			this->list->Name = L"list";
			this->list->Size = System::Drawing::Size(280, 142);
			this->list->TabIndex = 8;
			this->list->UseCompatibleStateImageBehavior = false;
			this->list->View = System::Windows::Forms::View::Details;
			// 
			// columnHeader1
			// 
			this->columnHeader1->Text = L"Supply";
			this->columnHeader1->Width = 136;
			// 
			// columnHeader2
			// 
			this->columnHeader2->Text = L"Quantity";
			// 
			// Add_Inventory
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(378, 307);
			this->Controls->Add(this->list);
			this->Controls->Add(this->Add);
			this->Controls->Add(this->quantity);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"Add_Inventory";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Add_Inventory";
			this->Load += gcnew System::EventHandler(this, &Add_Inventory::Add_Inventory_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void listBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
			 }
private: System::Void Add_Inventory_Load(System::Object^  sender, System::EventArgs^  e) {
			 msclr::interop::marshal_context convert;
			 std::string name;
			 std::string num;
			 std::ifstream File("Inventory.txt");
			 while(File>>name>>num){
				 String^ Nam=gcnew String(name.c_str());
				 String^ Num=gcnew String(num.c_str());
			 ListViewItem^ rc=gcnew Windows::Forms::ListViewItem(Nam);
			 rc->SubItems->Add(Num);
			 this->list->Items->Add(rc);
			 }
		 }
private: System::Void Add_Click(System::Object^  sender, System::EventArgs^  e) {
			 msclr::interop::marshal_context convert;
			 int new_quant;
			 std::stringstream ss;
			 std::string newq;
			 std::string Quant=convert.marshal_as<std::string>(this->quantity->Text);
			 std::string number = convert.marshal_as<std::string>(list->SelectedItems[0]->SubItems[1]->Text);
			 std::string name1 = convert.marshal_as<std::string>(list->SelectedItems[0]->SubItems[0]->Text);
			 std::string name;
			 std::string num;
			 std::ifstream File("Inventory.txt");
			 std::ofstream File1("temp.txt");
			 while(File>>name>>num){
				if(name==name1){
					new_quant=atoi(Quant.c_str())+atoi(number.c_str());
					ss<<new_quant;
					newq=ss.str();
					File1<<name<<" "<<new_quant<<"\n";
				}else{
				File1<<name<<" "<<num<<"\n";
				}
			 }
			 File.close();
			 File1.close();
			 remove("Inventory.txt");
			 rename("temp.txt","Inventory.txt");
			 this->Close();
		 }
};
}
