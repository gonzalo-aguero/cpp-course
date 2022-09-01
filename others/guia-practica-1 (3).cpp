#include <iostream>
using namespace std;
int main (void) {
	int a, b, temporal;
	
	cout << "Ingrese valor de a: ";
	cin >> a;
	
	cout << "Ingrese valor de b: ";
	cin >> b;
	
	cout << "--Intercambiamos a y b--" << endl;
	
	temporal = a;
	a = b;
	b = temporal;
	
	cout << "a: " << a << endl;
	cout << "b: " << b << endl;
	
	return 0;
}
