#include <iostream>
#include <cmath>
using namespace std;
int main ()

{
	int a, b;
	cout << "Enter two integers:";
	cin >> a >> b;
	
	cout << ((a + b) % 2 == 0 ? (a + b) * 2 : (a + b) /2) << endl;
	
	return 0;
}
