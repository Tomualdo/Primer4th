#include <iostream>

using namespace std;

struct box
{
	char maker[40];
	float height, width, length, volume;
};

void showBox(box a);
void calcVol(box &vol);

int main()
{
	box test = { "anno",1,2,3,4 };
	//box test = {};
	showBox(test);
	calcVol(test);
	showBox(test);
	return 0;
}

void showBox(box a) {
	cout << "maker: " << a.maker << endl;
	cout << "maker: " << a.height << endl;
	cout << "width: " << a.width << endl;
	cout << "length: " << a.length << endl;
	cout << "volume: " << a.volume << endl << endl << endl;
}

void calcVol(box &vol) {
	vol.volume = vol.height*vol.length*vol.width;
}
