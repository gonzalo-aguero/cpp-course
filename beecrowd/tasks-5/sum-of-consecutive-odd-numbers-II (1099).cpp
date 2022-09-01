#include <iostream>
using namespace std;

int sumOddNums(int X, int Y){
	int sum = 0, i;
	
	if(Y < X){
		int aux = X;
		X = Y;
		Y = aux;
	}
	i = X + 1;
	
	while(i < Y){
		if(i%2 != 0) sum += i;
		i++;
	}
	
	return sum;
}

int main(int argc, char *argv[]) {
	int N, counter = 1, X, Y, sum;
	
	cin >> N;
	
	while(counter <= N){
		cin >> X >> Y;
		sum = sumOddNums(X, Y);
		cout << sum << endl;
		counter++;
	}
	
	return 0;
}

