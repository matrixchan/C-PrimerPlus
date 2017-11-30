// pacetice_04.cpp
//Created by John on 29/11/2017

//Asks the user to enter his or her first name and then last name.
//Constructs,stores and displays a third string.

#include <iostream>

int main(){
	using namespace std;
	const int ArrSize = 20;
	char firtName[ArrSize];
	char lastName[ArrSize];

	cout << "Enter your first name: ";
	//getline(cin,firtName);
	cin.getline(firtName,ArrSize);
	cout << "Enter your last name: ";
	cin.getline(lastName,ArrSize);


	cout << "Here’s the information in a single string: " 
			<< firtName << ", "  << lastName << endl;

	return 0;
}