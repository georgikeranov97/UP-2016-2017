#include <iostream>
using namespace std;

const int ROWS = 4;
const int COLUMNS = 4;

void array (int arr[][COLUMNS])
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLUMNS; j++)
		{
			cout << "arr[" << i << "][" << j << "]= ";
			cin >> arr[i][j];
		}
	}
}

void print (int arr[][COLUMNS])
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLUMNS; j++)
		{
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
}

void tempArray (int arr[][COLUMNS], int tempArr[][COLUMNS])
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLUMNS; j++)
		{
			tempArr[j][i] = arr[i][j];
		}
	}
}


int main()
{
	int array1[ROWS][COLUMNS];
	int array2[ROWS][COLUMNS];
	array (array1);
	print (array1);
	tempArray (array1, array2);
	print (array2);
    
    return 0;
}
