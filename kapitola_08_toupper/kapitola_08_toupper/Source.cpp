#include<iostream>
#include<cstring>
#include<string>
#include <algorithm>

using namespace std;

void velkepismena(string veta);

int main() {

	string input;

	do
	{
		cout << "Enter a string (q to quit): ";
		getline(cin, input);

		if (input == "q" || input == "Q")
		{
			break;
		}
		velkepismena(input);
	} while (true);


	return 0;
}

void velkepismena(string veta) {
	
	transform(veta.begin(), veta.end(), veta.begin(), ::toupper);
	cout<< veta <<endl << endl;

}

