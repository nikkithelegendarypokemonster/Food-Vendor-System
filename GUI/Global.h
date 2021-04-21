#include"Form1.h"
#include<msclr/marshal_cppstd.h>
#include<string>
#include<fstream>
using namespace GUI;
int  getPASS(String^ PASSWORD){
	msclr::interop::marshal_context convert;
	std::string password=convert.marshal_as<std::string>(PASSWORD);
				 std::ifstream File("Employee.txt");
			 std::string id,name,pass,snum;
			 while(File>>id>>name>>pass){
				 if(password==pass){
					 return 1;
				 }
			 }

	return 0;
}

int  getID(String^ ID){
		msclr::interop::marshal_context convert;
	std::string ids=convert.marshal_as<std::string>(ID);
				 std::ifstream File("Employee.txt");
			 std::string id,name,pass,snum;
			 while(File>>id>>name>>pass){
				 if(ids==id){
					 return 1;
				 }
			 }
	return 0;
}