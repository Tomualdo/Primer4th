#include <iostream>
#include <string>

using namespace std;

struct CandyBar {
	string name;
	double weight;
	int cal;
};

void candySet( CandyBar &candy, string name , double weight, int cal);
void candyPrint(CandyBar candy);

int main() {
	CandyBar strCan1 = {"sdgs",5.877,4};

	candyPrint(strCan1);
	candySet(strCan1,"tom",55.6,7);
	candyPrint(strCan1);

	system("PAUSE");
	return 0;
}

void candySet(CandyBar &candy, string name, double weight, int cal) {

	candy.name = name;
	candy.weight = weight;
	candy.cal = cal;

	/*
	cout << "nazov: " ;	cin.getline(candy.name, 50);
	cout << "hmot: ";	cin >> candy.weight;
	cout << "cal: ";	cin >> candy.cal;*/
}

void candyPrint(CandyBar candy) {
	cout << candy.name << " " << candy.weight << " " << candy.cal << " " << endl;
}