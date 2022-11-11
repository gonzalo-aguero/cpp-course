/**
 * @file E2_2018.cpp
 * @author your name (you@domain.com)
 * @brief https://www.beecrowd.com.br/judge/es/problems/view/1872?origem=1
 * @version 0.1
 * @date 2022-11-10
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <iostream>
#include <string>
using namespace std;
int posicionPunto(string value){
    int i = 0, posPunto = -1, size = value.size();
    while (posPunto == -1 && i < size){
        if(value[i] != '.'){
            i++;
        }else posPunto = i;
    } 

    return posPunto;
}
void separarCifras(string value, string valueSeparado[2]){
    int size = value.size(), i, index;   

    //parte entera
    index = 0;
    for (i = 0; i < posicionPunto(value); i++){
        valueSeparado[0] += "0";
        valueSeparado[0][index] = value[i];
        index++;
    }

    //parte decimal
    index = 0;
    for (i = posicionPunto(value) + 1; i < size; i++){
        valueSeparado[1] += "0";
        valueSeparado[1][index] = value[i];
        index++;
    }
}
void invertirStr(string str, string &invertido){
    int size = str.size();

    for (int i = 0; i < size; i++){
        invertido += "0";
        invertido[i] = str[size-1-i];
    }
    
}
bool palindromoReal(string value){
    bool palindromo = true;
    int uni, dec, i = 0, posPunto, size = value.size(); // uni, dec ---> indices para recorrer unidades y decimales

    posPunto = posicionPunto(value);
    if(posPunto != -1){
        uni = posPunto-1;
        dec = posPunto+1;
    }else palindromo = false;//ya que no tiene digitos decimales
    

    while (palindromo && dec < size){
        if(value[uni] == value[dec]){
            uni--;
            dec++;
        }else palindromo = false;
    }

    return palindromo;
}
int main(){
    int n, test = 0;
    string value, retDec;//decimales del retorno
    double ret = 0;

    cin >> n;
    while (test < n){
        cout << "Prueba N°"<<test+1<<": ";
        cin >> value;
        cout << "¿Es palindromo? " << palindromoReal(value) << endl;

        if(!palindromoReal(value)){
            int size = value.size();
            // double value_d = stof(value); 

            //Separar parte entera de decimal:
            string separadas[2], enteraInvertida;// Parte entera invertida es como deberia ser la decimal
            separarCifras(value, separadas);
            invertirStr(separadas[0], enteraInvertida);
            cout << "Entera Invertida:" <<stof(enteraInvertida)<<endl;
            cout << "Decimal Separada:" <<stof(separadas[1])<<endl;

            //calculamos cuanto hay que sumarle para que sea palindromo real
            if(stof(enteraInvertida) > stof(value)){
                retDec = to_string((int) (stof(enteraInvertida) - stof(separadas[1])));
                cout << "retDec:"<<retDec<<endl;
                ret = stof(retDec);
                for (int i = 0; i < retDec.size(); i++) ret /= 10; // p.e: de 101 a 0.101
            }


        }
        
        test++;
    }
    
    cout << "RESULTADO: " << ret << endl;
	return 0;
}

