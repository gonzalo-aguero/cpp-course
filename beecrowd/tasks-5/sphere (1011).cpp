#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main(int argc, char *argv[]) {
	double result, radius, PI = 3.14159;
	cin >> radius;
	
	result = (4.0/3.0) * PI * pow(radius, 3.0);
	
	cout << "VOLUME = "
		 << fixed << setprecision(3) << result << endl;
	return 0;
}

