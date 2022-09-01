#include <iostream>
#include <iomanip>

using namespace std;

int main(int argc, char *argv[]) {
	const double PI = 3.14159;
	double R, A = 0;
	
	cin >> R;
	
	A = PI * (R*R);
	
	cout << "A=" << fixed << setprecision(4) << A << endl; 
	
	return 0;
}

