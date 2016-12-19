#include <iostream>
using namespace std;

void array (int arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << "arr[" << i << "] = ";
		cin >> arr[i];
	}
}

void array1 (int* arr, int size)
{
	for (int i = size - 1; i >= 0; i--)
	{
		cout << arr[i] << " ";
	}
}

int main ()

{
	const int SIZE = 5;
	int arr[SIZE], size;
	cout << "Input a size: ";
	cin >> size;
	array (arr, size);
	array1 (arr, size);
	
	return 0;
}
