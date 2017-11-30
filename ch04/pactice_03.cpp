// pacetice_03.cpp
//Created by John on 29/11/2017

//Asks the user to enter his or her first name and then last name.
//Constructs,stores and displays a third string.

#include <iostream>

int main(){
	using namespace std;
	
	string firtName;
	string lastName;
	string displays;

	cout << "Enter your first name: ";
	getline(cin,firtName);
	cout << "Enter your last name: ";
	getline(cin,lastName);

	displays = "Here’s the information in a single string: " + firtName + "," + lastName;

	cout << displays << endl;

	return 0;
}