#include <iostream>
using namespace std;
#define TF 5 // cantidad servidores
#define M 250 //limite kb
int main(){
	int correo[TF][TF] = {
		{50,60,0,20,100},
		{50,60,0,20,100},
		{50,60,0,20,100},
		{50,60,0,20,100},
		{50,60,0,20,100}
		};
	int total, //total enviados por servidor actual
		i_mayor = 0,
		mayorTotal = 0,
		recibidos[TF] = {0};
	
	for(int i =0; i<TF;i++){
		total =0;
		for(int j=0;j<TF;j++){
			total += correo[i][j];
			recibidos[j] += correo[i][j];
		}
		
		cout <<"Total de kB enviadas por el servidor "<<i<<": "<<total<<endl;
        if(total > mayorTotal){
            mayorTotal = total;
            i_mayor = i;
        }
	}

    cout << "El servidor "<<i_mayor<<" es el que más kB ha enviado."<<endl;
    for (int j = 0; j < TF; j++){
        if(recibidos[j] > M)
            cout << "El servidor "<<j<<" ha superado el límite de "<<M<<" kB de bajada."<<endl;
    }
}