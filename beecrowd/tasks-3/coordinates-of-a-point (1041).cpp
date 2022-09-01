#include <iostream>
using namespace std;

int main() {
	double x,y;
	
	cin >> x;
	cin >> y;
	
	if(x == 0 && y == 0){
		cout << "Origem" << endl;
	}else{
		if(x == 0){
			cout << "Eixo Y" << endl;
			return 0;
		}

		if(y == 0){
			cout << "Eixo X" << endl;
			return 0;
		}

		if(x > 0){
			if(y > 0){
				cout << "Q1" << endl;
			}else{
				// y < 0
				cout << "Q4" << endl;
			}
		}else{
			// x < 0
			if(y > 0){
				cout << "Q2" << endl;
			}else{
				// y < 0
				cout << "Q3" << endl;
			}
		}
	}
	
	return 0;
}

