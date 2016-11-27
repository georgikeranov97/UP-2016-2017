#include <iostream>
using namespace std;
int main() 


{
	const int ROWS = 6;
    const int COLS = 5;
	int arr[ROWS][COLS] = {
	{48,72,13,14,15},
	{21,22,54,24,75},
	{31,57,33,34,35},
	{41,95,43,44,45},
	{59,52,53,54,55},
	{61,69,63,64,65},
	};
	int sum = arr[0][0];
	double avg;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (arr[i][j])
			sum += arr[i][j];
			
			avg = sum / (ROWS * COLS);
		}
	}
	cout << "Sum of numbers is: " << sum << " " << "Average is: " << avg << endl;
	
	return 0;
}
