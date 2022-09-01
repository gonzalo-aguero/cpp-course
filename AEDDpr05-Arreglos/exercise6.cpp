#include <iostream>
#include <iomanip>
using namespace std;

void contarApariciones();

int main(int argc, char *argv[]) {
	contarApariciones();
	return 0;
}


void contarApariciones(){
	const int N = 26;
	int letters[N] = {};//initialize all elements in 0.
	char letter;
	
	while(!cin.eof() && letter != '.'){
		cout << "Ingrese una letra minúscula (\".\" para terminar): ";
		cin >> letter;
		letters[letter - 97]++;
	}
	
	for(int i = 0; i< 26; i++){
		cout 
			<< "[" << i 
			<< "] \"" << (char)(i+97) << "\":" 
			<< letters[i] << endl;
	}
}
