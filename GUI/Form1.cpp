#include"Form1.h"
	private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) {
				 this->bar->Increment(1);
			 text1->Text = this->bar->Value.ToString() + "% Completed";
			 if(this->bar->Value==this->bar->Maximum){
				this->timer1->Stop();
				 this->Hide();
				 Interface^ MAIN= gcnew Interface();
				 MAIN->ShowDialog();
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
private: System::Void sign_up_Click(System::Object^  sender, System::EventArgs^  e) {
						 
		}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			 String ^ Id=this->id->Text;
			 String ^ Pass=this->pass->Text;
			 if(Id=="ronald" && Pass=="apines"){
				 bar->Visible=true;
				 this->bar->ForeColor = System::Drawing::Color::DeepSkyBlue;
				 this->timer1->Start();
			 }else{
			 label2->ForeColor=System::Drawing::Color::Red;
			 if(MessageBox::Show("Error","POS System",MessageBoxButtons::OK,MessageBoxIcon::Error)==System::Windows::Forms::DialogResult::OK){
						id->Text="";
						pass->Text="";
						label2->ForeColor=System::Drawing::Color::Navy;
					}
			 }
		 }
