// pacetice_05.cpp
//Created by John on 30/11/2017

//Create a CandyBar structure contains three members: brand name,weight(float),calories(int)

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

	CandyBar snack = {
		"Mocha Munch",
		2.4,
		350
	};


	cout << "The CandyBar of snack contains three members: "<<endl;
	cout << "Name: " << snack.name << endl;
	cout << "Weight: " << snack.weight << endl;
	cout << "Calories: " << snack.calories << endl;

	return 0;
}