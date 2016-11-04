#include <iostream>
#include <cmath>
using namespace std;
int main ()

{
	double a, b;
	cout << "Enter two numbers:";
	cin >> a >> b;
	
	double c = (a > b ? a : b);
	
	cout << (c < 0 ? c * -1: c) << endl;

	return 0;
}
