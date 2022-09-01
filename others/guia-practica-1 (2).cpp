#include <iostream>
using namespace std;
int main (void) {
	int a, b, c;
	
	cin >> a >> b >> c;
	
	a = a + a%10;
	b = b + b%10;
	c = c + c%10;
	
	cout << c << "-" << b << "-" << a << endl;
	
	return 0;
}
