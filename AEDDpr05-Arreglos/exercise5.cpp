#include <iostream>
using namespace std;

void readValues();

int main(int argc, char *argv[]) {
	readValues();
	return 0;
}

int countDigits(int n){
	int digits = 0;
	
	if(n == 0) digits = 1;
	else {
		while(n != 0){
			n = n/10;
			digits++;
		};
	}
	
	return digits;
}

int sumDigits(int n){
	int sum = 0;
	
	while(n != 0){
		sum += n%10;
		n = n/10;
	};
	
	return sum;
}

void readValues(){
	const int N = 10;
	int values[N], i = 0, number, sum;
	bool matchFound = false;
	
	while(i < N){
		cin >> values[i];
		i++;
	}
	
	do{
		i = 0;
		cout << "dime un numero: " <<endl;
		cin >> number;
		sum = sumDigits(number);
		
		//check that the sum of the digits of "number" is in values[];
		while(i < N){
			bool is;
			if(sum == values[i]){
				matchFound = true;
				break;
			}
			i++;
		}
	} while(!matchFound);
	
	cout << "Numero que cumlió: " << number << endl;
}
