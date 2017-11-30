//
//  practice_01.cpp
//  CppPrimerPlus
//
//  Created by John on 29/11/2017.
//  Copyright © 2017 John. All rights reserved.
//
#include <iostream>

int main(){
    using namespace std;
    const int ArSize = 20;
    char firstName[ArSize];
    char lastName[ArSize];
    int age = 0;
    char grade;
    
    cout << "What's your first name? ";
    cin.getline(firstName, ArSize);
    cout << "What's your last name? ";
    cin.getline(lastName, ArSize);
    cout << "What letter grade do you deserve? ";
    cin >> grade;
    cout << "What's your age? ";
    cin >> age;
    
    cout << "Name: " << lastName << "," << firstName << endl;
    cout << "Grade: " << char(grade + 1) << endl;
    cout << "Age: " << age << endl;
    return 0;
}


