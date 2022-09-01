#include <iostream>
#include <iomanip>
using namespace std;

float product_subtotal(float price, int units);
	
int main(int argc, char *argv[]) {
	int productCode, productUnits;
	float productPrice, total;
	
	cin >> productCode >> productUnits >> productPrice;
	total = product_subtotal(productPrice, productUnits);
	
	cin >> productCode >> productUnits >> productPrice;
	total += product_subtotal(productPrice, productUnits);
	
	cout << "VALOR A PAGAR: R$ " << fixed << setprecision(2) <<total << endl;
	
	return 0;
}

float product_subtotal(float price, int units){
	return price * units;
}
