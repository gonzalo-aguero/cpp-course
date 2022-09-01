#include <iostream>
#include <iomanip>

using namespace std;

int main(int argc, char *argv[]) {
	int product0_code, product0_units, product1_code, product1_units;
	float product0_price, product1_price, subtotal0, subtotal1, total;
	
	cin >> product0_code >> product0_units >> product0_price;
	cin >> product1_code >> product1_units >> product1_price;
	
	subtotal0 = product0_units * product0_price;
	subtotal1 = product1_units * product1_price;
	
	total = subtotal0 + subtotal1;
	
	cout << "VALOR A PAGAR: R$ ";
	cout << fixed << setprecision(2) <<  total << endl;
	
	return 0;
}

