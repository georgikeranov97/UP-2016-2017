#include <iostream>
using namespace std;
int main ()

{
	const int ROWS = 4, COLS = 4;
    double matrix[ROWS][COLS];

    for (int i = 0; i < ROWS; i++) 
        for (int j = 0; j < COLS; j++) 
        {
            cout << "matrix[" << i << "][" << j << "] = ";
            cin >> matrix[i][j];
        }
        for (int i = 0; i < ROWS; i++)
        {
        	for (int j = i; j < COLS; j++)
        	if (i == j)
        	cout << matrix[i][j] << endl;
		}
        for (int i = 0; i < ROWS; i++)
        {
        	for (int j = COLS; j >= 0; j--)
        	if (i + j == COLS - 1)
        	cout << matrix[i][j] << endl;
		}
	
	return 0;
}
