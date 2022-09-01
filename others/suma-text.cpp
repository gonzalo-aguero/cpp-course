#include <iostream>

using namespace std;

int main(){
	int numA;
	int numB;
	int result;
	
	cout << "Please, write the first number: ";
	cin >> numA;
	cout << "Please, now write the second number: ";
	cin >> numB;
	
	result = numA + numB;
	
	cout << "The result of " << numA << " + " << numB << " is ---> " << result;
	
	return 0;
}
