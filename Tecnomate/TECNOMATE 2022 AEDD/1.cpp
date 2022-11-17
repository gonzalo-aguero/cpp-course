#include <iostream>
using namespace std;
//dimelo con una frase
int main(int argc, char const *argv[]){
    float p;
    cin >> p;
    if(p == 0){
        cout << "Nada"<<endl;
    }else if(p > 0 && p <= 20){
        cout << "Poco"<<endl;
    }else if(p > 20 && p<=30){
        cout << "Un cuarto maso"<<endl;
    }else if(p > 30 && p <= 45){
        cout << "Un tercio maso"<<endl;
    }else if(p > 45 && p <=55){
        cout << "La mitad maso"<<endl;
    }else if(p > 55 && p<= 75){
        cout << "Mas de la mitad"<<endl;
    }else if(p > 75 && p < 100){
        cout << "Casi todo"<<endl;
    }else if(p == 100){
        cout << "14 dias"<<endl;
    }
    return 0;
}
