#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int a,b,c;
	
	cin >> a >> b >> c;
	
	int greatestAB = (a + b + abs(a-b)) / 2;
	int greatestABC = (greatestAB + c + abs(greatestAB-c)) / 2;
	
	cout << greatestABC << " eh o maior" << endl;
	
	return 0;
}

