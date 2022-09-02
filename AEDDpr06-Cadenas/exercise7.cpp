/**
 * @file exercise7.cpp
 * @author Gonzalo Agüero (gonzaloaguerodev@gmail.com)
 * @version 0.1
 * @date 2022-09-01
 * 
 * @copyright Copyright (c) 2022
 * 
 * PROBLEM DEFINITION
 * Se dice que la palabra α es un anagrama de la palabra β si es posible obtener α cambiando el
 * orden de las letras de β. Por ejemplo, “MORA” y ” ROMA” son anagramas de RAMO.
 * Realizar una función que compruebe si dos palabras son anagramas entre sí. Las palabras pueden contener
 * letras mayúsculas y minúsculas.
 */

#include <iostream>
#include <string>

using namespace std;
bool sonAnagramas(string a, string b);

int main(){
    string a, b;
    
    cout << "Ingrese dos palabras para saber si son anagramas entre sí: ";
    cin >> a >> b;

    if(sonAnagramas(a,b)) cout <<"¡Sí, son anagramas!"<<endl;
    else cout <<"No, no son anagramas."<<endl;

    return 0;
}

bool sonAnagramas(string a, string b){
    bool anagramas = false;
    int i = 0, j = 0, coincidentes = 0;
    bool encontrado = true; //letra actual de a encontrada en b

    if(a.size() == b.size()){
        while(i < a.size() && encontrado){
            j = 0;
            encontrado = false;
            while (j < b.size() && !encontrado){
                if(a[i] == b[j] && b[j] != '\0'){
                    encontrado = true;
                    coincidentes++; 
                    b[j] = '\0'; //se asigna este valor para no volver a considerar este caracter.
                }
                j++;
            }
            i++;
        }

        if (coincidentes == a.size()) anagramas = true;
    }

    return anagramas;
}
