#include <iostream>
#include <string>
using namespace std;
string desplazarStringUpper(string str, int posiciones){
    int size = str.size();
    char aux;
    for (int i = 0; i < size; i++)
    {
        if(isalpha(str[i])){
            if(islower(str[i])) str[i] = toupper(str[i]);
            
            aux = str[i] + posiciones;
            if(aux > 'Z'){
                cout << "Caracter antes: "<<str[i];
                str[i] = 'A' + (posiciones - ('Z'-str[i])) - 1;
                cout << " Caracter desp: "<<str[i]<<endl;
            }else str[i] = aux;
        }

    }
    
    return str;
}
int main(){
    string str;
    int n;
    cout << "Indique la cantidad de desplazamientos: ";
    cin >> n;
    cout << "Ingrese el texto a desplazar: ";
    cin.ignore();
    getline(cin, str);
    str = desplazarStringUpper(str, n);
    cout << "Resultado: "<<str<<endl;
    return 0;
}