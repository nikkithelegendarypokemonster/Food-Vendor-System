#pragma once
#include"Add_Inventory.h"
#include"SignUp.h"
#include"admin_DASHBOARD.h"
#include<fstream>
#include<string>
#include<cstdlib>
#include<sstream>
#include"Delete_Dialog.h"
namespace GUI {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for admin_DASHBOARD
	/// </summary>
	public ref class admin_DASHBOARD : public System::Windows::Forms::Form
	{
	public:
		admin_DASHBOARD(void)
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
		~admin_DASHBOARD()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Label^  ADD_Employee;
	private: System::Windows::Forms::Button^  Refresh;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  Num;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::PictureBox^  pictureBox3;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^  chart1;
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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(admin_DASHBOARD::typeid));
			System::Windows::Forms::DataVisualization::Charting::ChartArea^  chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^  legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^  series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->ADD_Employee = (gcnew System::Windows::Forms::Label());
			this->Refresh = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->Num = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->chart1))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox1->Location = System::Drawing::Point(31, 83);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(39, 40);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &admin_DASHBOARD::pictureBox1_Click);
			this->pictureBox1->MouseEnter += gcnew System::EventHandler(this, &admin_DASHBOARD::pictureBox1_MouseEnter);
			this->pictureBox1->MouseLeave += gcnew System::EventHandler(this, &admin_DASHBOARD::pictureBox1_MouseLeave);
			// 
			// ADD_Employee
			// 
			this->ADD_Employee->AutoSize = true;
			this->ADD_Employee->BackColor = System::Drawing::Color::Transparent;
			this->ADD_Employee->Font = (gcnew System::Drawing::Font(L"HoloLens MDL2 Assets", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->ADD_Employee->ForeColor = System::Drawing::Color::Lime;
			this->ADD_Employee->Location = System::Drawing::Point(26, 53);
			this->ADD_Employee->Name = L"ADD_Employee";
			this->ADD_Employee->Size = System::Drawing::Size(142, 27);
			this->ADD_Employee->TabIndex = 1;
			this->ADD_Employee->Text = L"Add Employee";
			// 
			// Refresh
			// 
			this->Refresh->Location = System::Drawing::Point(31, 419);
			this->Refresh->Name = L"Refresh";
			this->Refresh->Size = System::Drawing::Size(75, 23);
			this->Refresh->TabIndex = 2;
			this->Refresh->Text = L"Refresh";
			this->Refresh->UseVisualStyleBackColor = true;
			this->Refresh->Click += gcnew System::EventHandler(this, &admin_DASHBOARD::Refresh_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"HoloLens MDL2 Assets", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Lime;
			this->label1->Location = System::Drawing::Point(26, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(170, 27);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Active Employees";
			// 
			// Num
			// 
			this->Num->AutoSize = true;
			this->Num->BackColor = System::Drawing::Color::Transparent;
			this->Num->Font = (gcnew System::Drawing::Font(L"HoloLens MDL2 Assets", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Num->ForeColor = System::Drawing::Color::Lime;
			this->Num->Location = System::Drawing::Point(202, 9);
			this->Num->Name = L"Num";
			this->Num->Size = System::Drawing::Size(0, 27);
			this->Num->TabIndex = 4;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"HoloLens MDL2 Assets", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::Lime;
			this->label2->Location = System::Drawing::Point(26, 150);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(162, 27);
			this->label2->TabIndex = 6;
			this->label2->Text = L"Delete Employee";
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox2.BackgroundImage")));
			this->pictureBox2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox2->Location = System::Drawing::Point(31, 180);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(39, 40);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->pictureBox2->TabIndex = 5;
			this->pictureBox2->TabStop = false;
			this->pictureBox2->Click += gcnew System::EventHandler(this, &admin_DASHBOARD::pictureBox2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"HoloLens MDL2 Assets", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::Lime;
			this->label3->Location = System::Drawing::Point(26, 250);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(135, 27);
			this->label3->TabIndex = 8;
			this->label3->Text = L"Add Inventory";
			// 
			// pictureBox3
			// 
			this->pictureBox3->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox3.BackgroundImage")));
			this->pictureBox3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox3->Location = System::Drawing::Point(31, 290);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(39, 40);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->pictureBox3->TabIndex = 7;
			this->pictureBox3->TabStop = false;
			this->pictureBox3->Click += gcnew System::EventHandler(this, &admin_DASHBOARD::pictureBox3_Click);
			// 
			// chart1
			// 
			this->chart1->BackColor = System::Drawing::Color::LightGray;
			this->chart1->BackImageTransparentColor = System::Drawing::Color::DimGray;
			this->chart1->BackSecondaryColor = System::Drawing::Color::Transparent;
			this->chart1->BorderlineColor = System::Drawing::Color::Black;
			this->chart1->BorderSkin->BackColor = System::Drawing::Color::White;
			this->chart1->BorderSkin->BorderColor = System::Drawing::Color::Maroon;
			this->chart1->BorderSkin->PageColor = System::Drawing::Color::Black;
			chartArea1->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea1);
			legend1->Name = L"Legend1";
			this->chart1->Legends->Add(legend1);
			this->chart1->Location = System::Drawing::Point(431, 127);
			this->chart1->Name = L"chart1";
			series1->ChartArea = L"ChartArea1";
			series1->Legend = L"Legend1";
			series1->Name = L"Sales";
			this->chart1->Series->Add(series1);
			this->chart1->Size = System::Drawing::Size(326, 203);
			this->chart1->TabIndex = 9;
			this->chart1->Text = L"chart1";
			this->chart1->Click += gcnew System::EventHandler(this, &admin_DASHBOARD::chart1_Click);
			// 
			// admin_DASHBOARD
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(793, 485);
			this->Controls->Add(this->chart1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->Num);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->Refresh);
			this->Controls->Add(this->ADD_Employee);
			this->Controls->Add(this->pictureBox1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->Name = L"admin_DASHBOARD";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"DASHBOARD";
			this->Load += gcnew System::EventHandler(this, &admin_DASHBOARD::admin_DASHBOARD_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->chart1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void pictureBox1_MouseEnter(System::Object^  sender, System::EventArgs^  e) {
				this->pictureBox1->Size = System::Drawing::Size(55, 56);
			 }
	private: System::Void pictureBox1_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
				 this->pictureBox1->Size = System::Drawing::Size(39, 40);
			 }
	private: System::Void pictureBox1_Click(System::Object^  sender, System::EventArgs^  e) {
				 SignUp ^ su=gcnew SignUp();
				 su->ShowDialog();
				 this->Show();
			 }

private: System::Void Refresh_Click(System::Object^  sender, System::EventArgs^  e) {
			this->Update();
		 }
private: System::Void admin_DASHBOARD_Load(System::Object^  sender, System::EventArgs^  e) {	
			 std::ifstream File("Employee.txt");
			 std::ifstream File1("Sales.txt");
			 std::string id,name,pass,snum;
			 int i=0;
			 while(File>>id>>name>>pass){
				i++;
			 }
			 std::stringstream num;
			 num<<i;
			 snum=num.str();
			String^ employee_number = gcnew String(snum.c_str());
			 this->Num->Text=employee_number;
			 std::string nname;
				 std::string sale;
				 double ssale;
				 double sname;
			 while(File1>>nname>>sale){
				 ssale=atof(sale.c_str());
				 sname=atof(nname.c_str());
				 if(nname=="BottledWater"){
					break;
				 }
				  if(nname=="HotdogSandwich"){
					  this->chart1->Series["Sales"]->Points->AddXY("HotdogSandwich",(ssale));
				 }
				   if(nname=="HotdogWaffle"){
					this->chart1->Series["Sales"]->Points->AddXY("HotdogWaffle",(ssale));
				 }
				    if(nname=="ChickenDog"){
					this->chart1->Series["Sales"]->Points->AddXY("ChickenDog",(ssale));
				 }
			 }
		}
private: System::Void pictureBox2_Click(System::Object^  sender, System::EventArgs^  e) {
			 Delete_Dialog^ dg=gcnew Delete_Dialog();
			 dg->ShowDialog();

		 }
private: System::Void pictureBox3_Click(System::Object^  sender, System::EventArgs^  e) {
			Add_Inventory^ add=gcnew Add_Inventory();
			 add->ShowDialog();
		 }
private: System::Void chart1_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
};
}
