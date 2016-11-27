#include <iostream>
using namespace std;
int main() 


{
	const int ROWS = 4;
    const int COLS = 4;
	int arr[ROWS][COLS] = {
	{1, 2, 3, 4},
	{5, 6, 7, 8},
	{9, 10,11,12},
	{13,14,15,16}
	 };
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = i + 1; j < COLS; j++)
		{
			int temp = arr[ROWS][COLS];
			arr[ROWS][COLS] = arr[COLS][ROWS];
			arr[COLS][ROWS] = temp;
		}
	}
	
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = COLS - 1; j >= 0; j--)
		
			cout << arr[j][i] << " ";
		cout << endl;
		
	}
	
	return 0;
}
