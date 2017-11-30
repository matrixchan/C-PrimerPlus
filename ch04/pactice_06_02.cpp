// pacetice_06.cpp
//Created by John on 30/11/2017

//Create a CandyBar structure contains three members: brand name,weight(float),calories(int)
//creates an array of three CandyBar structures, ini- tializes them to values of your choice, and then displays the contents of each struc- ture.

#include <iostream>
//using namespace std;

struct CandyBar
{	
	std::string name;
	float weight;
	int calories;
	
};

int main(){
	using namespace std;

	// CandyBar candybar[3] = {
	// 	{ "Mocha Munch",2.4,350 },
	// 	{ "Mocha Munch02",2.5,360 },
	// 	{ "Mocha Munch03",2.6,370 },

	// };


	// cout << "The CandyBar of snack contains three members: "<<endl;
	// cout << "Name: " << snack.name << endl;
	// cout << "Weight: " << snack.weight << endl;
	// cout << "Calories: " << snack.calories << endl;
	CandyBar candybar[2];

	for(int i = 0; i < sizeof(candybar) / sizeof(candybar[0]); i++){
		//cout << i << ": " << candybar[i].name << ", " << candybar[i].weight << ", " << candybar[i].calories << endl;
		cout << i << endl;
		cout << "Please enter the name of candybar[" << i << "]: ";
		getline(cin,candybar[i].name);
		cout << "Please enter the weight of candybar[" << i << "]: ";
		cin >> candybar[i].weight;
		cout << "Please enter the calories of candybar[" << i << "]: ";
		cin >> candybar[i].calories;
		cin.get(); //读取下次输入前扔掉换行符
		//cout << endl;
	}

	cout << "Displays: " << endl;
	for(int i = 0; i < sizeof(candybar) / sizeof(candybar[0]); i++){
		cout << i << ": " << candybar[i].name << ", " << candybar[i].weight << ", " << candybar[i].calories << endl;
	}




	return 0;
}