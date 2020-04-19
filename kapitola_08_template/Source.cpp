#include <iostream>

using namespace std;

template <typename Any>
Any max5(Any t[]);

int main() {

	int a[] = { 102,4,150,8,190,200,201,202,203};
	double b[] = { 211.5,40.5,6.5,8.5,1000.5 };

	cout << max5(a) << endl;
	cout << max5(b) << endl;

	return 0;
}

template <typename Any>
Any max5(Any t[]) {

	Any result = t[0];
	
		for (int i = 0; i < 5; i++)
	{
		
		if (result<t[i])
		{
			result = t[i];
		}
		
	}

	return result;
}