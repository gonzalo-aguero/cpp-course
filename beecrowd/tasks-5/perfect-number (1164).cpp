#include <iostream>
using namespace std;

bool isPerfectNumber(int X);

int main(int argc, char *argv[]) {
	int number, N, i = 0;
	cin >> N;
	
	while(i < N){
		cin >> number;
		
		if(isPerfectNumber(number))
			cout << number << " eh perfeito" << endl;
		else
			cout << number << " nao eh perfeito" << endl;
		
		i++;
	}
	
	return 0;
}

bool isPerfectNumber(int X){
	int sum = 0, num = 1;
	bool perfectNumber = false;
	
	while(num < X){
		if(X%num == 0)
			sum += num;
		num++;
	}
	
	if(sum == X) perfectNumber = true;
	
	return perfectNumber;
}
