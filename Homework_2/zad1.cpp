#include <iostream>
using namespace std;

void swap (int* ptr1, int* ptr2)
{
	int temp = *ptr1;
	*ptr1 = *ptr2;
	*ptr2 = temp;	
}

int main ()

{
	int x = 2, y = 3;
	swap (&x, &y);
	cout << "x = " << x << endl;
	cout << "y = " << y << endl;
	
	return 0;
}
