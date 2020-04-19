#include <iostream>

int sum(int* ptr, int len);

int main() {

	int arr[] = { 1,1,1,1,1,1,1,1,1,5,1,1,1,1 };
	int* ptr = arr;
	int ptrEnd = sizeof(arr) / sizeof(ptr); //calculate array length

	// access to array values test
	//std::cout << ptr[1];
	//std::cout << ptrEnd;
	
	std::cout << sum(ptr, ptrEnd) << std::endl;

	system("PAUSE");

	return 0;
}

int sum(int* ptr, int len) {

	int sum = 0;
	for (int i = 0; i < len; i++)
	{
		sum = sum + ptr[i];
	}
	return sum;
}