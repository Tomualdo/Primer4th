#include<iostream>
#include<cstring>
#include<string>


using namespace std;


const int dlzka = 256;
void velkepismena(char *veta, const int dlzka);

int main() {

	char input[dlzka];

	do
	{
		cout << "Enter a string (q to quit): ";
		cin.getline(input, dlzka);
		velkepismena(input,dlzka);
	
	} while (true);

	return 0;
}

void velkepismena(char *veta,const int dlzka) {

	char temp[256];

	if (veta[0]== 'q' && int(strlen(veta))==1)
	{
		exit(0);
	}

	cout << veta << endl;
	cout << int(strlen(veta)) << endl;

	int len = int(strlen(veta));
	for (int i = 0; i < dlzka; i++)
	{

		temp[i] = veta[i];
		temp[i] = toupper(veta[i]);
		if (i > len)
		{
			temp[i] = '\0';
		}
	}

	cout << temp<<" : toto je temporary" << endl;

}

