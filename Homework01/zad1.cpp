#include <iostream>
using namespace std;
int main ()

{
	double a, b, c, d, e;
	cout << "Enter 5 numbers:";
	cin >> a >> b >> c >> d >> e;
	
	if (a > b && a > c && a > d && a > e)
	cout << "The biggest number is a =" << " " << a;
	
	else if (b > a && b > c && b > d && b > e)
	cout << "The biggest number is b =" << " " << b;
	
	else if (c > a && c > b && c > d && c > e)
	cout << "The biggest number is c =" << " " << c;
	
	else if (d > a && d > b && d > c && d > e)
	cout << "The biggest number is d =" << " " << d;
	
	else 
	cout << "The biggest number is e =" << " " << e;
	
	return 0;
}
