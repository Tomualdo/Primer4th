#include <iostream>
#include<string>

using namespace std;

void printTxt(string &txt);

int main()
{	
	string text = "Tomas";

	printTxt(text);


	return 0;
}

void printTxt(string &txt) {
	
	
	cout << txt << endl;
}