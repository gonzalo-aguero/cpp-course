/**
 * @file exercise9.cpp
 * @author Gonzalo Agüero (gonzaloaguerodev@gmail.com)
 * @version 0.1
 * @date 2022-09-04
 * 
 * @copyright Copyright (c) 2022
 * 
 * PROBLEM DEFINITION
 * Escribir un programa que convierta una fecha en formato "MMDDYYYY" al formato "DD de month
 * del YYYY". Por ejemplo, para "12072006" debería devolver "7 de diciembre del 2006".
 */

#include <iostream>
#include <string>

using namespace std;

int main(){
    string date, day = "", month, year = "";

    cout << "Ingrese una fecha en formato \"MMDDYYYY\": ";
    cin >> date;

    cout << date[0] << date[1] << endl << day << year;
    switch (date[1]){
        case '1': 
            if(date[0] == '0'){
                month = "enero";
            }else if(date[0] == '1') month = "noviembre";
            break;
        case '2': 
            if(date[0] == '0'){
                month = "febrero";
            }else if(date[0] == '1') month = "diciembre";
            break;
        case '3': month = "marzo"; break;
        case '4': month = "abril"; break;
        case '5': month = "mayo"; break;
        case '6': month = "junio"; break;
        case '7': month = "julio"; break;
        case '8': month = "agosto"; break;
        case '9': month = "septiembre"; break;
        case '0': month = "octubre"; break;
        default:
            break;
    }

    if(date[2] == '0') day += date[3];
    else{
        day += date[2];
        day += date[3];
    }

    year += date[4];
    year += date[5];
    year += date[6];
    year += date[7];

    cout << day<<" de "<<month<<" del "<<year<<endl;


    return 0;
}