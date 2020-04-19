#include<iostream>

void test(int *arr, int arrSize) {
	int temp1, temp2 ;	

	for (int i = 0; i < arrSize; i++)
	{
		std::cout << arr[i] << " ";
	}
	std::cout << std::endl;
	
	int j = arrSize-1;
	std::cout << arr[0] << " "<< arr[arrSize-1]<<std::endl;
	for (int i = 0; i < (arrSize/2)+1; i++)
	{
		temp1 = arr[i];
		temp2 = arr[j];
		arr[i] = temp2;
		arr[j] = temp1;
		j--;

	}
	/*temp1 = arr[0];
	temp2 = arr[4];
	arr[0] = temp2;
	arr[4] = temp1;
	temp1 = arr[1];
	temp2 = arr[3];
	arr[1] = temp2;
	arr[3] = temp1;*/

	for (int i = 0; i < arrSize; i++)
	{
		std::cout << arr[i] << " ";
	}
	std::cout << std::endl;
}
int main() {
	int arr[] = { 1,2,3,4,5,6,7,8,9,10,11};
	int arrSize = sizeof(arr) / sizeof(arr[0]);

	test(&arr[0],arrSize);
	
	system("PAUSE");
	return 0;
}