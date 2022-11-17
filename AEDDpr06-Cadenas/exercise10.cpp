/**
 * @file exercise10.cpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-11-16
 * 
 * @copyright Copyright (c) 2022
 * 
 * Dado un texto que contiene un telegrama que termina en punto, desarrollar una función que:
 *  - informe la cantidad de veces que aparece cada vocal.
 *  - informe el porcentaje de espacios en blanco.
 *  - cuente y muestre la cantidad de palabras que posean más de 7 letras.
 *  - informe el costo del telegrama sabiendo que cada palabra cuesta $5,2.
 */
#include <iostream>
#include <iomanip>
using namespace std;
int main(int argc, char const *argv[])
{
    int vocales[5] = {}, vocalesTotales = 0, blancos = 0, letras = 0, masde7 = 0, palabras = 0, size;
    string str;

    cout << "Leyendo el telegrama..." <<endl;
    str = "En breve evaluacion de Algoritmos a estudiar.";
    cout << str << endl;
    size = str.size();
    for (int i = 0; i < size; i++)
    {   
        if(iswspace(str[i])) blancos++;
        else if(isalnum(str[i])){
            letras++;
            switch (toupper(str[i])){
                case 'A': vocales[0]++; break;
                case 'E': vocales[1]++; break;
                case 'I': vocales[2]++; break;
                case 'O': vocales[3]++; break;
                case 'U': vocales[4]++; break;
                default: break;
            }
        }

        if(iswspace(str[i]) || str[i] == '.'){
            palabras++;
            if(letras > 7){
                masde7++;
            }
            letras = 0;
        }
    }
    
    for (int i = 0; i < 5; i++) vocalesTotales += vocales[i];

    cout << "El telegrama ingresado consta de:"<<endl;
    cout << "---> "<<masde7<<" palabra(s) con más de 7 letras"<<endl;
    cout << "---> Ocurrencias de vocales: "<<vocalesTotales<<endl;
    cout << "   ---> A: "<<vocales[0]<<endl;
    cout << "   ---> E: "<<vocales[1]<<endl;
    cout << "   ---> I: "<<vocales[2]<<endl;
    cout << "   ---> O: "<<vocales[3]<<endl;
    cout << "   ---> U: "<<vocales[4]<<endl;
    cout << "---> "<< fixed << setprecision(2) <<(blancos/(float)size)*100<<"% de espacios en blanco"
    <<" sobre el total de caracteres."<<endl;
    cout << fixed << setprecision(2) << "---> Costo del telegrama: $"<<palabras*5.2<<"."<<endl;

    return 0;
}
