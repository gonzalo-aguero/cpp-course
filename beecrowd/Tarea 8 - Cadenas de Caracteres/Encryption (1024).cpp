#include <iostream>
#include <string>
using namespace std;

#define DEBUG false
void shiftLetters(string & str, int positions){
	int size = str.size();
	if(DEBUG){
		cout << "--------------- shiftLowChars() ---------------"<<endl;
		cout << "shiftLowChars() INPUT = "<<str<<endl;
	}
	
	for(int i=0;i<size;i++) { 
		if(isalpha(str[i])){
			str[i] += positions;
		}
	}
	
	if(DEBUG){
		cout << "shiftLowChars() RESULT: "<<str<<endl;
		cout << "--------------- shiftLowChars() END ---------------"<<endl;
	}
}
void strReverse(string & str){
	int size = str.size(), times;
	char aux;
	
	if(size%2 == 0) times = size/2;
	else times = (size-1)/2;
	
	if(DEBUG){
		cout << "--------------- streReverse() ---------------"<<endl;
		cout << "strReverse() INPUT = "<<str<<endl;
	}
	
	for(int i=0;i<times;i++) { 
		aux = str[i];
		str[i] = str[size-1-i];
		str[size-1-i] = aux;
	}
	
	if(DEBUG){
		cout << "strReverse() RESULT: "<<str<<endl;
		cout << "--------------- streReverse() END ---------------"<<endl;
	}
}
void shiftFromMiddle(string & str, int positions, bool toRight){
	int size = str.size(), startAt;
	if(size%2==0) startAt = size/2;
	else startAt = (size)/2;
	
	if(DEBUG){
		cout << "--------------- shiftFromMiddle() ---------------"<<endl;
		cout << "shiftFromMiddle() INPUT = "<<str<<endl;
	}
	
	for(int i = startAt; i < size; i++) { 
		if(toRight) str[i] += positions;
		else str[i] -= positions;
	}
	
	if(DEBUG){
		cout << "shiftFromMiddle() RESULT: "<<str<<endl;
		cout << "--------------- shiftFromMiddle() END ---------------"<<endl;
	}
}
int main(int argc, char *argv[]) {
	string word = "";//initialize in '\0'
	bool run = true;
	char answer;
	int N, i = 0;
	
	cin >> N;
	cin.ignore();
	while(run && i < N){
		if(DEBUG){
			cout << endl <<"===========================================" <<endl;
			cout << "Write the password: "<<endl;
		}
		getline(cin, word);
		
		if(DEBUG) cout << "Word entrante: "<<word<<endl;
		
		shiftLetters(word, 3);
		strReverse(word);
		shiftFromMiddle(word, 1, false);
		
		if(DEBUG){
			cout << "Word Saliente: "<<word<<endl;
			cout << endl <<"===========================================" <<endl;
			cout << "Do you want to continue? Y/n";
			cin >> answer;
			if(answer == 'n'){
				run = false;
			}
			cin.ignore();
		}else{
			cout <<word<<endl;
		}
		
		i++;
	}
	
	return 0;
}

