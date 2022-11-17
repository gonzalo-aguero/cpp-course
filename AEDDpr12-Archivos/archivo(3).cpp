#include <iostream>
#include <fstream>
using namespace std;

int main(int argc, char *argv[]) {
	char letter;
	int wordsCounter = 0, cwordsCounter = 0, wordSize, mayorTam = 0;
	string word;
	ifstream f;//file to read
	
	cout << "Ingrese una letra para evaluar el comienzo y terminación de las palabras: ";
	cin >> letter;
	
	f.open("exercise3.txt");
	
	if(f){
		while(f >> word){
			cout << word << endl;
			
			wordsCounter++;//a)
			
			wordSize = word.size();
			if(wordSize > mayorTam) mayorTam = wordSize;//b)
			
			if(word[0] == letter && word[wordSize - 1] == letter) cwordsCounter++;
			
		}
		
		cout 
			<< "a. El archivo contiene "<<wordsCounter<<" palabras."<<endl
			<< "b. La palabra más larga tiene "<<mayorTam<<" caracteres."<<endl
			<< "c. Se han encontrado "<<cwordsCounter<<" palabras que comienzan y terminan con \""<<letter<<"\"."<<endl;
	}else cout << "Error el abrir el archivo"<<endl;
	return 0;
}

