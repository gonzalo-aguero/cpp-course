#include <iostream>
using namespace std;

#define dev true //development mode

void requestInfo(int peopleCount);

int main(int argc, char *argv[]) {
	
	requestInfo(8);
	
	return 0;
}

void requestInfo(int peopleCount){
	float time, minor, higher, timeSum = 0, average; //in minutes
	char gender, winnerGender;// F or M;
	int i = 1, men = 0, women = 0;
	
	cin >> time >> gender;
	minor = time;
	higher = time;
	winnerGender = gender;
	timeSum += time;
	if(gender == 'F') women++;
	else if(gender == 'M') men++;
	
	while(i < peopleCount){
		
		cin >> time >> gender;
		
		if(time > higher) higher = time;
		
		if(time < minor){
			minor = time; 
			winnerGender = gender;
		}
		
		timeSum += time;
		
		if(gender == 'F') women++;
		else if(gender == 'M') men++;
		
		i++;
	}
	
	average = timeSum / peopleCount;
	
	if(dev){
		cout 
			<< "Diferencia menor-mayor tiempo, en segundos = " << (higher*60) - (minor*60) << endl
			<< "Promedio, en minutos = " << average << endl
			<< "Tiempo en minutos y sexo del ganador = " << minor << "' " << winnerGender << endl
			<< "Tiempo último participante en llegar, en segundos: " << higher*60 << endl
			<< "Hombres participantes: " << men << endl
			<< "Mujeres particpantes: " << women << endl;
		
	}else{
		cout << (higher*60) - (minor*60) << endl;
		cout << average << endl;
	}
}

