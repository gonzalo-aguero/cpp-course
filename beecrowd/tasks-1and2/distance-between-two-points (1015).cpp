#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
	
	double x1, y1, x2, y2, addition, distance;
	string msg;
	
	cin >> x1 >> y1;
	cin >> fixed >> setprecision(1) >> x2 >> y2;
	
	addition = pow((x2 - x1), 2) + pow((y2 - y1), 2);
	distance = sqrt(addition);
	
	cout << fixed << setprecision(4) << distance << endl; 
	
	return 0;
}

