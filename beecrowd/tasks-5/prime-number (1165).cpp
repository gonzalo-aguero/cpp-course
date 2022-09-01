#include <iostream>
using namespace std;

bool isPrimeNumber(int X);

int main(int argc, char *argv[]) {
	int number, N, i = 0;
	cin >> N;
	
	while(i < N){
		cin >> number;
		
		if(isPrimeNumber(number))
			cout << number << " eh primo" << endl;
		else
			cout << number << " nao eh primo" << endl;
		
		i++;
	}
	
	return 0;
}

bool isPrimeNumber(int X){
	int dividers = 0, // divisors other than 1 and X
		num = 2;
	bool primeNumber = false;
	
	while(num < X){
		if(X%num == 0)
			dividers++;
		num++;
	}
	
	if(dividers == 0) primeNumber = true;
	
	return primeNumber;
}
	
