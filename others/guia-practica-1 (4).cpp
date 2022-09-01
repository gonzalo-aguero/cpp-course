#include <iostream>
using namespace std;
int main (void) {
	int m, v, total;
	float mPercent, vPercent;
	
	cout << "Ingrese la cantidad de mujeres: ";
	cin >> m;
	
	cout << "Ingrese la cantidad de varones: ";
	cin >> v;
	
	total = m + v;
	mPercent = (float) m / total * 100;
	vPercent = (float) v / total * 100;
	
	cout << "En la comisión hay un " << mPercent << "% de mujeres y un " << vPercent << "% de varones.";
	
	return 0;
}
