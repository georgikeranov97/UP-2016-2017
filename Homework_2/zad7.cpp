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
bool deleteNumber (int* arr, int size)
{
	int n;
	cin >> n;
	for (int i = 0; i < size; i++)
	{
		if (arr[i] == n)
		size--;
		return true;
	}
	return false;
}


int main ()

{
	const int size = 6;
	int arr[size];
	int n;
	array (arr, size);
	cout << deleteNumber(arr, size);
	
	return 0;
}
