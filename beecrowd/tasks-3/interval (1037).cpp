#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	// intervals: [0,25] (25,50], (50,75], (75,100];
	float value;
	cin >> value;
	
	if(value >= 0 && value <= 100){
		if(value <= 25){
			cout << "Intervalo [0,25]" << endl;
		}else{
			//greather than 25
			if(value <= 50){
				cout << "Intervalo (25,50]" << endl;
			}else{
				//greather than 50
				if(value <= 75){
					cout << "Intervalo (50,75]" << endl;
				}else{
					//greather than 75
					cout << "Intervalo (75,100]" << endl;
				}
			}
		}
	}else{
		cout << "Fora de intervalo" << endl;
	}
	
	return 0;
}
