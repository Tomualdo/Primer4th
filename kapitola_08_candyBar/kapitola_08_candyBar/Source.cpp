#include <iostream>
#include <string>

using namespace std;

struct CandyBar {
	char name[50];
	double weight;
	int cal;
};

void candySet(CandyBar &candy,  char *name,  double weight,  int cal);
void candyPrint(CandyBar candy);

int main(){
	CandyBar strCan1 = {};

	candySet(strCan1);
	candyPrint(strCan1);
	
	system("PAUSE");
	return 0;
}

void candySet(CandyBar &candy,  char *name,  double weight,  int cal){



	/*
	cout << "nazov: " ;	cin.getline(candy.name, 50);
	cout << "hmot: ";	cin >> candy.weight;
	cout << "cal: ";	cin >> candy.cal;*/
}

void candyPrint(CandyBar candy){
	cout << candy.name << " " << candy.weight << " " << candy.cal << " " << endl;
}