#include <iostream>
#include <string>
#define DEBUG true
#define TF 200
using namespace std;
int indexInCharArray(char array[TF], char value, int TL){
	int i = 0, index = -1;
	
	while(i < TL && index == -1){
		if(array[i] == value) index = i;
		i++;
	}
	return index;
}
/**
 * Retorna el mayor valor encontrado en el arreglo de enteros.
 **/
int higherValue(int numbers[TF], int TL){
	int value = numbers[0];
	for(int i=1;i<TL;i++) { 
		if(numbers[i] > value) value = numbers[i];
	}
	if(DEBUG) cout << "Higher value of repetitions: "<<value<<endl;
	return value;
}
void orderCharArr(char array[], int TL){
	int movimientos = -1;
	char aux;
	while(movimientos != 0){
		movimientos = 0;
		for(int i=1;i<TL;i++) { 
			if(array[i] < array[i-1]){//se los ordena
				aux = array[i-1];
				array[i-1] = array[i];
				array[i] = aux;
				movimientos++;
			}//else ya estan ordenados
		}
	}
}
int main(int argc, char *argv[]) {
	string line;
	int reps[TF], //Number of repetitions for each different character
		repsCount,//different characters
		N, //number of test cases
		test = 0;//current test number
	char repsLetters[TF];
	
	if(DEBUG) cout<<"Please enter the number of test cases: ";
	cin >> N;
	cin.ignore();
	
	while(test < N){
		repsLetters[TF] = {'\0'};
		reps[TF] = {0};
		repsCount = 0;
		
		
		if(DEBUG){
			cout << "TEST N°"<<test+1<<endl<<"Please enter a phrase: ";
		}
		getline(cin, line);
		if(DEBUG) cout << "INPUT: "<<line<<endl;
		int size = line.size();//size of the phrase
		
		for(int i=0;i<size;i++) { 
			char currentChar = line[i];
			if(isalpha(currentChar)){
				currentChar = tolower(line[i]);
				int index = indexInCharArray(repsLetters, currentChar, repsCount);
			
				if(index != -1){//ya esta agregado
					reps[index]++;
				}else{//Se lo agrega
					repsLetters[repsCount] = currentChar;
					reps[repsCount] = 1;
					repsCount++;
				}
			}
		}
		
		if(DEBUG){
			for(int i=0;i<repsCount;i++) { 
				cout << "Char: "<<repsLetters[i]<<" |Repeticiones: "<<reps[i]<<endl;
			}
		}
		
		
		//Print Frequent Letters
		int higher = higherValue(reps, repsCount),//mayor numero de repeticiones en una letra
		   frequentCount = 0;//cantidad de letras distintas que tienen el mayor numero de repeticiones
		char frequent[TF] = {'\0'};//arreglo con dichas letras mencionadas
		for(int i=0;i<repsCount;i++) { 
			if(reps[i] == higher) 
				frequent[frequentCount++] = repsLetters[i];
			
		}
		orderCharArr(frequent, frequentCount);//ordenar alfabeticamente
		//PRINT
		for(int i=0;i<frequentCount;i++) { 
			cout << frequent[i];
		}
		cout << endl;
		
		test++;
	}
	
	return 0;
}

