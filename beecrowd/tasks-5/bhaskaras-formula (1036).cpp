#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

double bhaskara2(double a, double b, double c, double roots[]);

int main(int argc, char *argv[]) {
	double a, b, c, roots[2]; 
	
	cin >> a >> b >> c;
	
	if(bhaskara2(a, b, c, roots)){
		cout << fixed << setprecision(5)
			<< "R1 = " << roots[0] << endl
			<< "R2 = " << roots[1] << endl;
	}
	
	return 0;
}

double bhaskara2(double a, double b, double c, double roots[]){
	const double radicand = pow(b, 2) - (4*a*c);
	bool calculable;
	
	if(a == 0 || radicand < 0){
		cout << "Impossivel calcular" << endl;
		calculable = false;
	}else{
		roots[0] = (-b + sqrt(radicand)) / (2*a);
		roots[1] = (-b - sqrt(radicand)) / (2*a);
		calculable = true;
	}
	
	return calculable;
}
