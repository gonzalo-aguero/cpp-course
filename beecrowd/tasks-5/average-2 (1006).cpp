#include <iostream>
#include <iomanip>
using namespace std;

float average(double a, double b, double c);

int main(int argc, char *argv[]) {
	double a,b,c;
	
	cin >> a >> b >> c;
	
	cout << "MEDIA = "
		<< fixed << setprecision(1) 
		<< average(a,b,c) << endl;	
	
	return 0;
}

float average(double a, double b, double c){
	return (a*2 + b*3 + c*5)/10;
}
