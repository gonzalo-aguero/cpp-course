#include <iostream>
using namespace std;

int product(int num1, int num2);

int main(int argc, char *argv[]) {
	int a, b, PROD;
	
	cin	>> a >> b;
	
	PROD = product(a, b);
	
	cout << "PROD = " << PROD << endl;
	
	return 0;
}

int product(int num1, int num2){
	return num1 * num2;
}
