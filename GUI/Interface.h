#pragma once
#include"stdafx.h"
#include"LOCK_Dialog.h"
#include"clear_window.h"
#include<string>
#include<sstream>
#include<fstream>
#include<cmath>
#include<msclr/marshal_cppstd.h>
namespace GUI {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections::Generic;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Interface
	/// </summary>
	public ref class Interface : public System::Windows::Forms::Form
	{
	public:
		Interface(String^ ID)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			msclr::interop::marshal_context convert;
			std::string idd=convert.marshal_as<std::string>(ID); 
			std::string id,name,pass;
			std::ifstream File("Employee.txt");
			if(idd=="1010"){
			name="Admin";
			}else{
			while(File>>id>>name>>pass){
					if(idd==id){
						name=name;
						break;
					}
				}
			}
			String^ Name=gcnew String(name.c_str());
			this->Cashier_name->Text=Name;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Interface()
		{
			if (components)
			{
				delete components;
			}
		}
	//	System::Windows::Forms::ListViewItem^ listViewItem;
	protected: 


	private: System::Windows::Forms::ContextMenuStrip^  contextMenuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  lOCKToolStripMenuItem;



	private: System::Windows::Forms::Timer^  timer1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::GroupBox^  Menu;
	private: System::Windows::Forms::Button^  HSandwich;

	private: System::Windows::Forms::Label^  Quant;
	private: System::Windows::Forms::TextBox^  quantity;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  SubTotal;

	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  DiscountText;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  Discount_result;

	private: System::Windows::Forms::Label^  VAT_TEXT;
	private: System::Windows::Forms::Label^  Cashier;
	private: System::Windows::Forms::CheckBox^  Discount;
	private: System::Windows::Forms::CheckBox^  Vat;
	private: System::Windows::Forms::Label^  VatValue;
	private: System::Windows::Forms::Label^  GrandTotal;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Button^  GTotalBtn;
	private: System::Windows::Forms::Label^  Cashier_name;
	private: System::Windows::Forms::TextBox^  Cash_Box;
	private: System::Windows::Forms::Label^  Cash_title;
	private: System::Windows::Forms::Label^  Change_box;
	private: System::Windows::Forms::Label^  Change_text;
	private: System::Windows::Forms::Button^  Checkout_btn;

	private: System::Windows::Forms::ListView^  order_list;
	private: System::Windows::Forms::ColumnHeader^  Order;
	private: System::Windows::Forms::ColumnHeader^  buys;
	private: System::Windows::Forms::ColumnHeader^  Totality;

	private: System::Windows::Forms::ColumnHeader^  Sum;
	private: System::Windows::Forms::Button^  Void_BTN;
	private: System::Windows::Forms::Button^  REMOVE_BTN;


	private: System::Windows::Forms::Button^  Process;
	private: System::Windows::Forms::Button^  Chicken;
	private: System::Windows::Forms::Button^  Water;
	private: System::Windows::Forms::Button^  Waffle;






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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Interface::typeid));
			this->contextMenuStrip1 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->lOCKToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->Menu = (gcnew System::Windows::Forms::GroupBox());
			this->Waffle = (gcnew System::Windows::Forms::Button());
			this->Water = (gcnew System::Windows::Forms::Button());
			this->Chicken = (gcnew System::Windows::Forms::Button());
			this->HSandwich = (gcnew System::Windows::Forms::Button());
			this->Quant = (gcnew System::Windows::Forms::Label());
			this->quantity = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->SubTotal = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->DiscountText = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->Discount_result = (gcnew System::Windows::Forms::Label());
			this->VAT_TEXT = (gcnew System::Windows::Forms::Label());
			this->Cashier = (gcnew System::Windows::Forms::Label());
			this->Discount = (gcnew System::Windows::Forms::CheckBox());
			this->Vat = (gcnew System::Windows::Forms::CheckBox());
			this->VatValue = (gcnew System::Windows::Forms::Label());
			this->GrandTotal = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->GTotalBtn = (gcnew System::Windows::Forms::Button());
			this->Cashier_name = (gcnew System::Windows::Forms::Label());
			this->Cash_Box = (gcnew System::Windows::Forms::TextBox());
			this->Cash_title = (gcnew System::Windows::Forms::Label());
			this->Change_box = (gcnew System::Windows::Forms::Label());
			this->Change_text = (gcnew System::Windows::Forms::Label());
			this->Checkout_btn = (gcnew System::Windows::Forms::Button());
			this->order_list = (gcnew System::Windows::Forms::ListView());
			this->Order = (gcnew System::Windows::Forms::ColumnHeader());
			this->buys = (gcnew System::Windows::Forms::ColumnHeader());
			this->Totality = (gcnew System::Windows::Forms::ColumnHeader());
			this->Sum = (gcnew System::Windows::Forms::ColumnHeader());
			this->Void_BTN = (gcnew System::Windows::Forms::Button());
			this->REMOVE_BTN = (gcnew System::Windows::Forms::Button());
			this->Process = (gcnew System::Windows::Forms::Button());
			this->contextMenuStrip1->SuspendLayout();
			this->Menu->SuspendLayout();
			this->SuspendLayout();
			// 
			// contextMenuStrip1
			// 
			this->contextMenuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) {this->lOCKToolStripMenuItem});
			this->contextMenuStrip1->Name = L"contextMenuStrip1";
			this->contextMenuStrip1->Size = System::Drawing::Size(105, 26);
			// 
			// lOCKToolStripMenuItem
			// 
			this->lOCKToolStripMenuItem->Name = L"lOCKToolStripMenuItem";
			this->lOCKToolStripMenuItem->Size = System::Drawing::Size(104, 22);
			this->lOCKToolStripMenuItem->Text = L"LOCK";
			this->lOCKToolStripMenuItem->Click += gcnew System::EventHandler(this, &Interface::lOCKToolStripMenuItem_Click);
			// 
			// timer1
			// 
			this->timer1->Tick += gcnew System::EventHandler(this, &Interface::timer1_Tick);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(519, 159);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(0, 19);
			this->label1->TabIndex = 1;
			// 
			// Menu
			// 
			this->Menu->BackColor = System::Drawing::Color::Transparent;
			this->Menu->Controls->Add(this->Waffle);
			this->Menu->Controls->Add(this->Water);
			this->Menu->Controls->Add(this->Chicken);
			this->Menu->Controls->Add(this->HSandwich);
			this->Menu->Dock = System::Windows::Forms::DockStyle::Left;
			this->Menu->Font = (gcnew System::Drawing::Font(L"Century Gothic", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Menu->Location = System::Drawing::Point(0, 0);
			this->Menu->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->Menu->Name = L"Menu";
			this->Menu->Padding = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->Menu->Size = System::Drawing::Size(288, 395);
			this->Menu->TabIndex = 2;
			this->Menu->TabStop = false;
			this->Menu->Text = L"Menu";
			// 
			// Waffle
			// 
			this->Waffle->Font = (gcnew System::Drawing::Font(L"Century Gothic", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Waffle->Location = System::Drawing::Point(12, 134);
			this->Waffle->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->Waffle->Name = L"Waffle";
			this->Waffle->Size = System::Drawing::Size(88, 44);
			this->Waffle->TabIndex = 3;
			this->Waffle->Text = L"Hotdog Waffle";
			this->Waffle->UseVisualStyleBackColor = true;
			this->Waffle->Click += gcnew System::EventHandler(this, &Interface::Waffle_Click);
			// 
			// Water
			// 
			this->Water->Font = (gcnew System::Drawing::Font(L"Century Gothic", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Water->Location = System::Drawing::Point(154, 134);
			this->Water->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->Water->Name = L"Water";
			this->Water->Size = System::Drawing::Size(88, 44);
			this->Water->TabIndex = 2;
			this->Water->Text = L"Bottled Water";
			this->Water->UseVisualStyleBackColor = true;
			this->Water->Click += gcnew System::EventHandler(this, &Interface::Water_Click);
			// 
			// Chicken
			// 
			this->Chicken->Font = (gcnew System::Drawing::Font(L"Century Gothic", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Chicken->Location = System::Drawing::Point(154, 65);
			this->Chicken->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->Chicken->Name = L"Chicken";
			this->Chicken->Size = System::Drawing::Size(88, 44);
			this->Chicken->TabIndex = 1;
			this->Chicken->Text = L"Chickendog on Stick";
			this->Chicken->UseVisualStyleBackColor = true;
			this->Chicken->Click += gcnew System::EventHandler(this, &Interface::Chicken_Click);
			// 
			// HSandwich
			// 
			this->HSandwich->Font = (gcnew System::Drawing::Font(L"Century Gothic", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->HSandwich->Location = System::Drawing::Point(12, 65);
			this->HSandwich->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->HSandwich->Name = L"HSandwich";
			this->HSandwich->Size = System::Drawing::Size(88, 44);
			this->HSandwich->TabIndex = 0;
			this->HSandwich->Text = L"Hotdog Sandwich";
			this->HSandwich->UseVisualStyleBackColor = true;
			this->HSandwich->Click += gcnew System::EventHandler(this, &Interface::HSandwich_Click);
			// 
			// Quant
			// 
			this->Quant->AutoSize = true;
			this->Quant->BackColor = System::Drawing::Color::Transparent;
			this->Quant->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Quant->Location = System::Drawing::Point(305, 174);
			this->Quant->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->Quant->Name = L"Quant";
			this->Quant->Size = System::Drawing::Size(45, 20);
			this->Quant->TabIndex = 4;
			this->Quant->Text = L"Qty : ";
			// 
			// quantity
			// 
			this->quantity->Location = System::Drawing::Point(354, 176);
			this->quantity->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->quantity->Name = L"quantity";
			this->quantity->Size = System::Drawing::Size(56, 20);
			this->quantity->TabIndex = 5;
			this->quantity->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(550, 184);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(85, 21);
			this->label2->TabIndex = 6;
			this->label2->Text = L"Subtotal: ";
			// 
			// SubTotal
			// 
			this->SubTotal->AutoSize = true;
			this->SubTotal->BackColor = System::Drawing::Color::Transparent;
			this->SubTotal->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->SubTotal->Location = System::Drawing::Point(642, 184);
			this->SubTotal->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->SubTotal->Name = L"SubTotal";
			this->SubTotal->Size = System::Drawing::Size(25, 21);
			this->SubTotal->TabIndex = 7;
			this->SubTotal->Text = L"---";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(494, 217);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(25, 22);
			this->label3->TabIndex = 9;
			this->label3->Text = L"%";
			// 
			// DiscountText
			// 
			this->DiscountText->Location = System::Drawing::Point(430, 217);
			this->DiscountText->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->DiscountText->Name = L"DiscountText";
			this->DiscountText->Size = System::Drawing::Size(58, 20);
			this->DiscountText->TabIndex = 10;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(550, 213);
			this->label4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(82, 21);
			this->label4->TabIndex = 11;
			this->label4->Text = L"Discount:";
			// 
			// Discount_result
			// 
			this->Discount_result->AutoSize = true;
			this->Discount_result->BackColor = System::Drawing::Color::Transparent;
			this->Discount_result->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Discount_result->Location = System::Drawing::Point(642, 213);
			this->Discount_result->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->Discount_result->Name = L"Discount_result";
			this->Discount_result->Size = System::Drawing::Size(25, 21);
			this->Discount_result->TabIndex = 12;
			this->Discount_result->Text = L"---";
			// 
			// VAT_TEXT
			// 
			this->VAT_TEXT->AutoSize = true;
			this->VAT_TEXT->BackColor = System::Drawing::Color::Transparent;
			this->VAT_TEXT->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->VAT_TEXT->Location = System::Drawing::Point(555, 244);
			this->VAT_TEXT->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->VAT_TEXT->Name = L"VAT_TEXT";
			this->VAT_TEXT->Size = System::Drawing::Size(50, 21);
			this->VAT_TEXT->TabIndex = 14;
			this->VAT_TEXT->Text = L"VAT: ";
			// 
			// Cashier
			// 
			this->Cashier->AutoSize = true;
			this->Cashier->BackColor = System::Drawing::Color::Transparent;
			this->Cashier->Location = System::Drawing::Point(599, 381);
			this->Cashier->Name = L"Cashier";
			this->Cashier->Size = System::Drawing::Size(45, 13);
			this->Cashier->TabIndex = 15;
			this->Cashier->Text = L"Cashier:";
			// 
			// Discount
			// 
			this->Discount->AutoSize = true;
			this->Discount->BackColor = System::Drawing::Color::Transparent;
			this->Discount->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Discount->Location = System::Drawing::Point(309, 213);
			this->Discount->Name = L"Discount";
			this->Discount->Size = System::Drawing::Size(106, 25);
			this->Discount->TabIndex = 16;
			this->Discount->Text = L"Discount\?";
			this->Discount->UseVisualStyleBackColor = false;
			this->Discount->CheckedChanged += gcnew System::EventHandler(this, &Interface::Discount_CheckedChanged);
			// 
			// Vat
			// 
			this->Vat->AutoSize = true;
			this->Vat->BackColor = System::Drawing::Color::Transparent;
			this->Vat->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Vat->Location = System::Drawing::Point(309, 244);
			this->Vat->Name = L"Vat";
			this->Vat->Size = System::Drawing::Size(70, 25);
			this->Vat->TabIndex = 17;
			this->Vat->Text = L"VAT\?";
			this->Vat->UseVisualStyleBackColor = false;
			this->Vat->CheckedChanged += gcnew System::EventHandler(this, &Interface::Vat_CheckedChanged);
			// 
			// VatValue
			// 
			this->VatValue->AutoSize = true;
			this->VatValue->BackColor = System::Drawing::Color::Transparent;
			this->VatValue->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->VatValue->Location = System::Drawing::Point(609, 244);
			this->VatValue->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->VatValue->Name = L"VatValue";
			this->VatValue->Size = System::Drawing::Size(40, 21);
			this->VatValue->TabIndex = 18;
			this->VatValue->Text = L"12%";
			this->VatValue->Visible = false;
			// 
			// GrandTotal
			// 
			this->GrandTotal->AutoSize = true;
			this->GrandTotal->BackColor = System::Drawing::Color::Transparent;
			this->GrandTotal->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->GrandTotal->Location = System::Drawing::Point(671, 275);
			this->GrandTotal->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->GrandTotal->Name = L"GrandTotal";
			this->GrandTotal->Size = System::Drawing::Size(25, 21);
			this->GrandTotal->TabIndex = 20;
			this->GrandTotal->Text = L"---";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(555, 275);
			this->label6->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(112, 21);
			this->label6->TabIndex = 19;
			this->label6->Text = L"Grand Total :";
			// 
			// GTotalBtn
			// 
			this->GTotalBtn->Location = System::Drawing::Point(554, 300);
			this->GTotalBtn->Name = L"GTotalBtn";
			this->GTotalBtn->Size = System::Drawing::Size(81, 30);
			this->GTotalBtn->TabIndex = 21;
			this->GTotalBtn->Text = L"Total";
			this->GTotalBtn->UseVisualStyleBackColor = true;
			this->GTotalBtn->Click += gcnew System::EventHandler(this, &Interface::GTotalBtn_Click);
			// 
			// Cashier_name
			// 
			this->Cashier_name->AutoSize = true;
			this->Cashier_name->BackColor = System::Drawing::Color::Transparent;
			this->Cashier_name->Location = System::Drawing::Point(650, 381);
			this->Cashier_name->Name = L"Cashier_name";
			this->Cashier_name->Size = System::Drawing::Size(0, 13);
			this->Cashier_name->TabIndex = 22;
			// 
			// Cash_Box
			// 
			this->Cash_Box->Location = System::Drawing::Point(354, 300);
			this->Cash_Box->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->Cash_Box->Name = L"Cash_Box";
			this->Cash_Box->Size = System::Drawing::Size(56, 20);
			this->Cash_Box->TabIndex = 24;
			this->Cash_Box->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// Cash_title
			// 
			this->Cash_title->AutoSize = true;
			this->Cash_title->BackColor = System::Drawing::Color::Transparent;
			this->Cash_title->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Cash_title->Location = System::Drawing::Point(305, 298);
			this->Cash_title->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->Cash_title->Name = L"Cash_title";
			this->Cash_title->Size = System::Drawing::Size(58, 20);
			this->Cash_title->TabIndex = 23;
			this->Cash_title->Text = L"Cash : ";
			// 
			// Change_box
			// 
			this->Change_box->AutoSize = true;
			this->Change_box->BackColor = System::Drawing::Color::Transparent;
			this->Change_box->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Change_box->Location = System::Drawing::Point(397, 323);
			this->Change_box->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->Change_box->Name = L"Change_box";
			this->Change_box->Size = System::Drawing::Size(25, 21);
			this->Change_box->TabIndex = 26;
			this->Change_box->Text = L"---";
			// 
			// Change_text
			// 
			this->Change_text->AutoSize = true;
			this->Change_text->BackColor = System::Drawing::Color::Transparent;
			this->Change_text->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Change_text->Location = System::Drawing::Point(305, 323);
			this->Change_text->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->Change_text->Name = L"Change_text";
			this->Change_text->Size = System::Drawing::Size(79, 21);
			this->Change_text->TabIndex = 25;
			this->Change_text->Text = L"Change:";
			// 
			// Checkout_btn
			// 
			this->Checkout_btn->Location = System::Drawing::Point(646, 300);
			this->Checkout_btn->Name = L"Checkout_btn";
			this->Checkout_btn->Size = System::Drawing::Size(81, 30);
			this->Checkout_btn->TabIndex = 27;
			this->Checkout_btn->Text = L"Checkout";
			this->Checkout_btn->UseVisualStyleBackColor = true;
			this->Checkout_btn->Click += gcnew System::EventHandler(this, &Interface::button1_Click);
			// 
			// order_list
			// 
			this->order_list->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(4) {this->Order, this->buys, 
				this->Totality, this->Sum});
			this->order_list->Location = System::Drawing::Point(309, 12);
			this->order_list->Name = L"order_list";
			this->order_list->Size = System::Drawing::Size(358, 144);
			this->order_list->TabIndex = 28;
			this->order_list->UseCompatibleStateImageBehavior = false;
			this->order_list->View = System::Windows::Forms::View::Details;
			// 
			// Order
			// 
			this->Order->Text = L"Order";
			this->Order->Width = 185;
			// 
			// buys
			// 
			this->buys->Text = L"Quantity";
			this->buys->Width = 59;
			// 
			// Totality
			// 
			this->Totality->Text = L"Price";
			this->Totality->Width = 50;
			// 
			// Sum
			// 
			this->Sum->Text = L"Sum";
			// 
			// Void_BTN
			// 
			this->Void_BTN->Location = System::Drawing::Point(683, 12);
			this->Void_BTN->Name = L"Void_BTN";
			this->Void_BTN->Size = System::Drawing::Size(75, 23);
			this->Void_BTN->TabIndex = 29;
			this->Void_BTN->Text = L"Void All";
			this->Void_BTN->UseVisualStyleBackColor = true;
			this->Void_BTN->Click += gcnew System::EventHandler(this, &Interface::button2_Click);
			// 
			// REMOVE_BTN
			// 
			this->REMOVE_BTN->Location = System::Drawing::Point(683, 41);
			this->REMOVE_BTN->Name = L"REMOVE_BTN";
			this->REMOVE_BTN->Size = System::Drawing::Size(75, 23);
			this->REMOVE_BTN->TabIndex = 30;
			this->REMOVE_BTN->Text = L"Remove";
			this->REMOVE_BTN->UseVisualStyleBackColor = true;
			this->REMOVE_BTN->Click += gcnew System::EventHandler(this, &Interface::button3_Click);
			// 
			// Process
			// 
			this->Process->Location = System::Drawing::Point(309, 347);
			this->Process->Name = L"Process";
			this->Process->Size = System::Drawing::Size(81, 30);
			this->Process->TabIndex = 31;
			this->Process->Text = L"Process";
			this->Process->UseVisualStyleBackColor = true;
			this->Process->Click += gcnew System::EventHandler(this, &Interface::Process_Click);
			// 
			// Interface
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(770, 395);
			this->ContextMenuStrip = this->contextMenuStrip1;
			this->Controls->Add(this->Process);
			this->Controls->Add(this->REMOVE_BTN);
			this->Controls->Add(this->Void_BTN);
			this->Controls->Add(this->order_list);
			this->Controls->Add(this->Checkout_btn);
			this->Controls->Add(this->Change_box);
			this->Controls->Add(this->Change_text);
			this->Controls->Add(this->Cash_Box);
			this->Controls->Add(this->Cash_title);
			this->Controls->Add(this->Cashier_name);
			this->Controls->Add(this->GTotalBtn);
			this->Controls->Add(this->GrandTotal);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->VatValue);
			this->Controls->Add(this->Vat);
			this->Controls->Add(this->Discount);
			this->Controls->Add(this->Cashier);
			this->Controls->Add(this->VAT_TEXT);
			this->Controls->Add(this->Discount_result);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->DiscountText);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->SubTotal);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->quantity);
			this->Controls->Add(this->Quant);
			this->Controls->Add(this->Menu);
			this->Controls->Add(this->label1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"Interface";
			this->Text = L"Interface";
			this->Load += gcnew System::EventHandler(this, &Interface::Interface_Load);
			this->contextMenuStrip1->ResumeLayout(false);
			this->Menu->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		static bool Checked=false;
		static float sub=0;
		static int quanti=0;
		static float DISC=0.0;
		static int hbuys=0,wbuys=0,cbuys=0,hwbuys=0;
private: System::Void lOCKToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		 LOCK_DIALOG ^ld=gcnew LOCK_DIALOG();
		 ld->ShowDialog();
			 }
private: System::Void fILEToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void Interface_Load(System::Object^  sender, System::EventArgs^  e) {
			 this->timer1->Start();
			 sub=0.0;
		 }
private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) {
		  DateTime datetime=DateTime::Now;
			 this->label1->Text=datetime.ToString();
		 }
private: System::Void HSandwich_Click(System::Object^  sender, System::EventArgs^  e) {
			 msclr::interop::marshal_context convert;
			 std::ifstream File("Inventory.txt");
			 std::string product,quantity;
			 int hcount=0,bcount=0;
			 while(File>>product>>quantity){
				 if(product=="Hotdog"){
					hcount=atoi(quantity.c_str());
				 }
				 if(product=="Buns"){
				 	bcount=atoi(quantity.c_str());
				 }
			 }
			 if(bcount==0){
			 MessageBox::Show("Error No Buns ","POS System",MessageBoxButtons::OK,MessageBoxIcon::Error);
			 }
			 if(hcount==0){
			 MessageBox::Show("Error No Hotdogs","POS System",MessageBoxButtons::OK,MessageBoxIcon::Error);
			 }
			 if(hcount>0||bcount>0){
				 if((hcount<=10)||(bcount<=10)){
				 MessageBox::Show("WARNING LOW ON SUPPLIES","POS System",MessageBoxButtons::OK,MessageBoxIcon::Exclamation);
				 }
			 const int price=20;
			 if(this->quantity->Text!=""){
			 std::string quantity=convert.marshal_as<std::string>(this->quantity->Text);
			 quanti=atoi(quantity.c_str());
			 //counting on how many buyed in total for database
			 hbuys+=quanti;
			 //=========================================
			 //Listview control
	
			 ListViewItem ^ rc=gcnew Windows::Forms::ListViewItem("Hotdog Sandwich");
			 rc->SubItems->Add(quanti.ToString());
			 rc->SubItems->Add(price.ToString());
			 rc->SubItems->Add((quanti*price).ToString());
			 this->order_list->Items->Add(rc);
			 
			 //====================================================
			//Accumulator
					sub+=(quanti*price);
			 //=========================================================
			 }else{
				MessageBox::Show("Error Please put Quantity","POS System",MessageBoxButtons::OK,MessageBoxIcon::Error);
			 }
			 this->SubTotal->Text=(sub).ToString(); 
			 this->quantity->Text="";
			 }
		 }
private: System::Void Discount_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			 if(Discount->Checked==true){
				this->DiscountText->Visible=true;
				this->label3->Visible=true;
				this->Discount_result->Text=(this->DiscountText->Text)+" %";
			 }else{
				this->Discount_result->Text="---";
			 }
		 }
private: System::Void Vat_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			 if(this->Vat->Checked==true){
			 this->VatValue->Visible=true;
			 }else{
				this->VatValue->Visible=false;
			 }
		 }
private: System::Void GTotalBtn_Click(System::Object^  sender, System::EventArgs^  e) {
			 //variables
			 const int price=20;
			 const float VAT=(float)0.12;
			 float Grand=sub;
			 float discount=0.0;
			 float vatable=0.0;
			 std::string substring;
			 std::stringstream substream;
			 //===============================================
			 //convertions 1
			 msclr::interop::marshal_context convert;
			 std::string disc=convert.marshal_as<std::string>(this->DiscountText->Text);
			 DISC=(float)(atoi(disc.c_str()));
			 DISC=DISC/100;
			 String^discount_Text=gcnew String(disc.c_str());
			 //============================================================================
			 if(Discount->Checked==true&& Vat->Checked==true){
			 //Grand=(sub*DISC*VAT);
			 discount=(sub*DISC);
			 vatable=((sub-discount)*VAT);
			 Grand=((sub-discount)+vatable);
			 }
			 else if(Discount->Checked==true){
					discount=(sub*DISC);
					Grand=(sub-discount);
			 }else if(Vat->Checked==true){
			 //Grand=(sub*VAT);
			 vatable=(sub*VAT);
			 Grand=(sub+vatable);
			 }
			 
			 //convertion 2
			 substream<<Grand;
			 substring=substream.str();
			 String^ subtotal=gcnew String(substring.c_str());
			//==========================================================
			 this->GrandTotal->Text=subtotal;
		 }
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		if(MessageBox::Show("Are you Sure? ","POS System",MessageBoxButtons::YesNo,MessageBoxIcon::Exclamation)==System::Windows::Forms::DialogResult::Yes){
		 	clear_window^clear=gcnew clear_window();
			 clear->ShowDialog();
			if(clear->textBox1->Text=="1010" && clear->textBox2->Text=="admin_access1899"){
			 order_list->Items->Clear();
			sub=0.0;
			hbuys=cbuys=hwbuys=wbuys=0;
			this->SubTotal->Text="---";
			}
		 }
	}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
			 msclr::interop::marshal_context convert;
			 int cur_price;
			 if(order_list->Items->Count==0 || order_list->SelectedItems->Count<=0){
			 MessageBox::Show("Empty List","POS System",MessageBoxButtons::OK,MessageBoxIcon::Error);
			 }else{
			 std::string item = convert.marshal_as<std::string>(order_list->SelectedItems[0]->SubItems[3]->Text);
			 std::string quant = convert.marshal_as<std::string>(order_list->SelectedItems[0]->SubItems[1]->Text);
			 std::string name = convert.marshal_as<std::string>(order_list->SelectedItems[0]->SubItems[0]->Text);
			 if(name=="Hotdog Sandwich"){
			 hbuys-=(atoi(quant.c_str()));
			 }else if(name=="ChickenDog on Stick"){
			 cbuys-=(atoi(quant.c_str()));
			 }else if(name=="Hotdog Waffle"){
			 hwbuys-=(atoi(quant.c_str()));
			 }else if(name=="Bottled Water"){
			 wbuys-=(atoi(quant.c_str()));
			 }
			 order_list->SelectedItems[0]->Remove();
			cur_price=atoi(item.c_str());
			sub=sub-cur_price;
			if(sub==0.0){
			this->SubTotal->Text="---"; 
			}else{
			this->SubTotal->Text=(sub).ToString(); 
			}
		}
		 }
private: System::Void Process_Click(System::Object^  sender, System::EventArgs^  e) {
			 msclr::interop::marshal_context convert;
			 std::string out;
			 std::stringstream ss;
			 std::string strcash = convert.marshal_as<std::string>(Cash_Box->Text);
			 std::string strGrand = convert.marshal_as<std::string>(this->GrandTotal->Text);
			 float cash=(float)atoi(strcash.c_str()),change,grand=(float)atoi(strGrand.c_str());
			 //conditionals
			 if(this->GrandTotal->Text=="---"){
			 MessageBox::Show("Please Total First","POS System",MessageBoxButtons::OK,MessageBoxIcon::Error);
			 change=0.0;
			 this->Change_box->Text="---";
			 }else if(cash<0){
			 MessageBox::Show("Invalid Amount Less than 0","POS System",MessageBoxButtons::OK,MessageBoxIcon::Error);
			 change=0.0;
			 this->Change_box->Text="---";
			 } else if(cash<grand){
			 MessageBox::Show("Invalid Amount need to add : "+(grand-cash),"POS System",MessageBoxButtons::OK,MessageBoxIcon::Error);
			 change=0.0;
			 this->Change_box->Text="---";
			 }else{
			 //=================================
			 //Start of computation
			 change=cash-grand;
			 ss<<change;
			 out=ss.str();
			 String^CHANGE=gcnew String(out.c_str());
			 this->Change_box->Text=CHANGE;
				} 
		}
private: System::Void Chicken_Click(System::Object^  sender, System::EventArgs^  e) {
			 msclr::interop::marshal_context convert;
			 std::ifstream File("Inventory.txt");
			 std::string product,quantity;
			 int ccount=0,scount;
			 while(File>>product>>quantity){
				 if(product=="ChickenDog"){
					ccount=atoi(quantity.c_str());
				 }
				 if(product=="Sticks"){
				 	scount=atoi(quantity.c_str());
				 }
			 }
			 if(ccount==0){
			 MessageBox::Show("Error No ChickenDog ","POS System",MessageBoxButtons::OK,MessageBoxIcon::Error);
			 }
			 if(scount==0){
			 MessageBox::Show("Error No Sticks","POS System",MessageBoxButtons::OK,MessageBoxIcon::Error);
			 }
			 			 if(scount>0||ccount>0){
				 if((scount<=10)||(ccount<=10)){
				 MessageBox::Show("WARNING LOW ON SUPPLIES","POS System",MessageBoxButtons::OK,MessageBoxIcon::Exclamation);
				 }
			 const int price=18;
			 if(this->quantity->Text!=""){
			 std::string quantity=convert.marshal_as<std::string>(this->quantity->Text);
			 quanti=atoi(quantity.c_str());
			 //counting on how many buyed in total for database
			 cbuys+=quanti;
			 //=========================================
			 //Listview control
	
			 ListViewItem ^ rc=gcnew Windows::Forms::ListViewItem("ChickenDog on Stick");
			 rc->SubItems->Add(quanti.ToString());
			 rc->SubItems->Add(price.ToString());
			 rc->SubItems->Add((quanti*price).ToString());
			 this->order_list->Items->Add(rc);
			 
			 //====================================================
			//Accumulator
					sub+=(quanti*price);
			 //=========================================================
			 }else{
				MessageBox::Show("Error Please put Quantity","POS System",MessageBoxButtons::OK,MessageBoxIcon::Error);
			 }
			 this->SubTotal->Text=(sub).ToString(); 
			 this->quantity->Text="";
			}
		 }
private: System::Void Water_Click(System::Object^  sender, System::EventArgs^  e) {
			 msclr::interop::marshal_context convert;
			 std::ifstream File("Inventory.txt");
			 std::string product,quantity;
			 int wcount=0;
			 while(File>>product>>quantity){
				 if(product=="BottledWater"){
					wcount=atoi(quantity.c_str());
				 }
			 }
			 if(wcount==0){
			 MessageBox::Show("Error No Bottled Water ","POS System",MessageBoxButtons::OK,MessageBoxIcon::Error);
			 }
			 			 if(wcount>0){
				 if(wcount<=10){
				 MessageBox::Show("WARNING LOW ON SUPPLIES","POS System",MessageBoxButtons::OK,MessageBoxIcon::Exclamation);
				 }
			 const int price=15;
			 if(this->quantity->Text!=""){
			 std::string quantity=convert.marshal_as<std::string>(this->quantity->Text);
			 quanti=atoi(quantity.c_str());
			 //counting on how many buyed in total for database
			 wbuys+=quanti;
			 //=========================================
			 //Listview control
	
			 ListViewItem ^ rc=gcnew Windows::Forms::ListViewItem("Bottled Water");
			 rc->SubItems->Add(quanti.ToString());
			 rc->SubItems->Add(price.ToString());
			 rc->SubItems->Add((quanti*price).ToString());
			 this->order_list->Items->Add(rc);
			 
			 //====================================================
			//Accumulator
					sub+=(quanti*price);
			 //=========================================================
			 }else{
				MessageBox::Show("Error Please put Quantity","POS System",MessageBoxButtons::OK,MessageBoxIcon::Error);
			 }
			 this->SubTotal->Text=(sub).ToString(); 
			 this->quantity->Text="";
			}
		 }
private: System::Void Waffle_Click(System::Object^  sender, System::EventArgs^  e) {
			 msclr::interop::marshal_context convert;
			 std::ifstream File("Inventory.txt");
			 std::string product,quantity;
			 int pcount=0,hwcount;
			 while(File>>product>>quantity){
				 if(product=="HotdogWaffle"){
					hwcount=atoi(quantity.c_str());
				 }
				 if(product=="Sticks"){
				 	pcount=atoi(quantity.c_str());
				 }
			 }
			 if(hwcount==0){
			 MessageBox::Show("Error No Hotdog Waffle ","POS System",MessageBoxButtons::OK,MessageBoxIcon::Error);
			 }
			 if(pcount==0){
			 MessageBox::Show("Error No Pancake Mix","POS System",MessageBoxButtons::OK,MessageBoxIcon::Error);
			 }
			 			 if(hwcount>0||pcount>0){
				 if((hwcount<=10)||(pcount<=10)){
				 MessageBox::Show("WARNING LOW ON SUPPLIES","POS System",MessageBoxButtons::OK,MessageBoxIcon::Exclamation);
				 }
			 const int price=18;
			 if(this->quantity->Text!=""){
			 std::string quantity=convert.marshal_as<std::string>(this->quantity->Text);
			 quanti=atoi(quantity.c_str());
			 //counting on how many buyed in total for database
			 hwbuys+=quanti;
			 //=========================================
			 //Listview control
	
			 ListViewItem ^ rc=gcnew Windows::Forms::ListViewItem("HotDog Waffle");
			 rc->SubItems->Add(quanti.ToString());
			 rc->SubItems->Add(price.ToString());
			 rc->SubItems->Add((quanti*price).ToString());
			 this->order_list->Items->Add(rc);
			 
			 //====================================================
			//Accumulator
					sub+=(quanti*price);
			 //=========================================================
			 }else{
				MessageBox::Show("Error Please put Quantity","POS System",MessageBoxButtons::OK,MessageBoxIcon::Error);
			 }
			 this->SubTotal->Text=(sub).ToString(); 
			 this->quantity->Text="";
						 }
		 }
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			 msclr::interop::marshal_context convert;
			 if(order_list->Items->Count==0 || sub == 0 ){
			 MessageBox::Show("No Items","POS System",MessageBoxButtons::OK,MessageBoxIcon::Error);
			 }
			std::ifstream File("Inventory.txt");
			std::ofstream Filewrite("temp.txt");
			std::ifstream File1("Sales.txt");
			std::ofstream Filewrite1("temp1.txt");
			std::string product;
			std::string quant;
			std::string new_quant;
			while(File>>product>>quant){
//====================================================
			if(product=="Hotdog"){
					if(hbuys>=0 || hwbuys>=0){
					int new_quant=((atoi(quant.c_str()))-((hbuys+hwbuys)));
					Filewrite<<product<<" "<<new_quant<<"\n";
					}
			}
				if(product =="Buns"){
					if(hbuys>=0){
					int new_quant=(atoi(quant.c_str())-(hbuys));
					Filewrite<<product<<" "<<new_quant<<"\n";
					}
				}
			if(product=="ChickenDog" || product =="Sticks"){
					if(cbuys>=0){
					int new_quant=(atoi(quant.c_str())-cbuys);
					Filewrite<<product<<" "<<new_quant<<"\n";
					}
				}				
			if(product =="PancakeMix"){
					if(hwbuys>=0){
					int new_quant=(atoi(quant.c_str())-hwbuys);
					Filewrite<<product<<" "<<new_quant<<"\n";
					}
				}
			if(product=="BottledWater"){
					if(wbuys>=0){
					int new_quant=(atoi(quant.c_str())-wbuys);
					Filewrite<<product<<" "<<new_quant<<"\n";
					}
				}
//===============================================================================
			}
			File.close();
			 Filewrite.close();
			 remove("Inventory.txt");
			 rename("temp.txt","Inventory.txt");
//===================================================================================
			 while(File1>>product>>quant){
			if(product=="HotdogSandwich"){
					if(hbuys>=0){
					int new_quant=(atoi(quant.c_str())+hbuys);
					Filewrite1<<product<<" "<<new_quant<<"\n";
					}
				}
			if(product=="ChickenDog"){
					if(cbuys>=0){
					int new_quant=(atoi(quant.c_str())+cbuys);
					Filewrite1<<product<<" "<<new_quant<<"\n";
					}

				}
			if(product=="HotdogWaffle"){
					if(hwbuys>=0){
					int new_quant=(atoi(quant.c_str())+hwbuys);
					Filewrite1<<product<<" "<<new_quant<<"\n";
					}
				}			 	
			if(product=="BottledWater"){
					if(wbuys>=0){
					int new_quant=(atoi(quant.c_str())+wbuys);
					Filewrite1<<product<<" "<<new_quant<<"\n";
					}
				}
			 
			 }
			 File1.close();
			 Filewrite1.close();
			 remove("Sales.txt");
			 rename("temp1.txt","Sales.txt");
			 // Reciept Printing

			 std::ofstream File3("Reciept.txt");
			 std::string gRand = convert.marshal_as<std::string>(this->GrandTotal->Text);
			File3<<"\t Hotdog Corner"<<"\n";
		 File3<<"\t Mini POS"<<"\n";
		 File3<<"Orders: "<<"\n";
		 for(int i=0;i<order_list->Items->Count;i++){
			 std::string item = convert.marshal_as<std::string>(order_list->Items[i]->SubItems[3]->Text);
			 std::string quant = convert.marshal_as<std::string>(order_list->Items[i]->SubItems[1]->Text);
			 std::string name = convert.marshal_as<std::string>(order_list->Items[i]->SubItems[0]->Text);
			 std::string price = convert.marshal_as<std::string>(order_list->Items[i]->SubItems[2]->Text);
			 File3<<name+" "+quant+" "+price+" "+item<<"\n";
		 }
		 std::stringstream ss,sss;
		  if(Discount->Checked==true){
			  ss<<DISC;
			  std::string discount=ss.str();
		 File3<<"Discount: "+discount<<"\n";
		  }else{
		  File3<<"Discount: 0%"<<"\n";
		  }
		  if(this->Vat->Checked==true){
		 File3<<"VAT: 12%"<<"\n";
		  }else{
		  File3<<"VAT: 0.0"<<"\n";
		  }
		    sss<<sub;
			  std::string subb=sss.str();
		 File3<<"SubTotal: "+subb<<"\n";
		 File3<<"GrandTotal: "+gRand<<"\n";

			File3.close();
			 //===============================================================
			 order_list->Items->Clear();
			sub=0.0;
			hbuys=cbuys=hwbuys=wbuys=0;
			this->SubTotal->Text="---";
			this->GrandTotal->Text="---";
			this->Change_box->Text="---";
		 }
};
}
				