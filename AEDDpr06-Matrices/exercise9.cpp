/**
 * @file exercise9.cpp
 * @author Gonzalo Agüero (gonzaloaguerodev@gmail.com)
 * @version 0.1
 * @date 2022-09-05
 * 
 * @copyright Copyright (c) 2022
 * 
 * PROBLEM DEFINITION
 * Problema 9: Una empresa distribuidora posee 4 sucursales y comercializa 25 artículos. Para analizar el
 * desempeño de cada sucursal se ingresan los datos correspondientes a las ventas efectuadas en cierto
 * período de la siguiente manera: código sucursal, código artículo, cantidad unidades vendidas.
 * La carga de datos finaliza cuando el código de sucursal es igual a 0 (cero).
 *  Informar:
 *      a) Las cantidades de unidades vendidas por la empresa de cada artículo.
 *      b) El total de unidades vendidas por la sucursal 3, sumando todos los artículos.
 *      c) La cantidad vendida por la sucursal 1 del artículo 6.
 *      d) La sucursal que vendió más unidades del artículo 8.
 *      Emplee funciones para resolver cada caso.
 * 
 * 
 *
 *  ========== CÓDIGO NO TESTEADO ==========
 */
#include <iostream>
using namespace std;

#define CA 25 //Cantidad Articulos
#define CS 4 //Cantidad Sucursales

/**
 * @brief Ingreso de datos (precios de los artículos).
 */
void requirePrices(float prices[]){
    int i = 0;
    cout << "Por favor, ingrese los precios por unidad de cada artículo:"<<endl;
    while (i < CA){
        cout <<"Ingrese el precio del artículo N°"<<i+1<<"... $";
        cin >> prices[i];
        cout <<"El precio ingresado es: $"<<prices[i]<<endl;
        i++;
    }
}
/**
 * @brief Ingreso de datos (ventas por artículo y sucursal.
 */
void requireSales(int data[][CA]){
    int i = 0, numSucursal;
    cout << "A continuación, ingrese las ventas de cada artículo que ha realizado cada sucursal:"<<endl;
    numSucursal = 0;
    do{
        cout << "Ingrese el número de sucursal: N°";
        cin >> numSucursal;
        if(numSucursal != 0){
            while(i < CA){
                cout << "Ingrese las ventas que ha realizado la sucursal N°"<<numSucursal<<" del artículo N°"<<i+1<<endl<<": ";
                cin >> data[numSucursal-1][i];
                i++;
            }
        }
    }while(numSucursal != 0);
}
/**
 * @brief unidades vendidas por artículo
 * @param data 
 */
void getSales(int sales[], int data[CS][CA]){
    int i = 0, j;
    while(i < CS){
        j = 0;
        while(j < CA){
            sales[j] += data[i][j];
            j++;
        }
        i++;
    }    
}
/**
 * @brief El total de unidades vendidas por la sucursal 3 (i=2), sumando todos los artículos.
 * 
 */
void totalSalesSucursal3(int data[CS][CA]){
    int i = 0, sales = 0;
    while (i < CA){
        sales += data[2][i];
        i++;
    }
    cout << "Cantidad de ventas de la sucursal 3: "<<sales<<endl;
}
/**
 * @brief La cantidad vendida por la sucursal 1(i=0) del artículo 6(j=5).
 * 
 */
void salesSucursal1Art6(int data[CS][CA]){
    cout << "Cantidad de ventas de la sucursal 1 del artículo 6 es: "<<data[0][5]<<endl;
}
/**
 * @brief  La sucursal que vendió más unidades del artículo 8(j=7).
 * 
 */
void mostUnitsArt8Branch(int data[CS][CA]){
    int i = 1, branch = 0;
    while (i < CS){
        if(data[i][7] > data[i-1][7]) branch = i;
        i++;
    }
    cout << "La sucursal que más ventas ha realizado del artículo 8 es la sucursal N°"<<branch+1<<endl;
}

int main(){
    int data[CS][CA] = {},
        sales[CA] = {};
    float prices[CA];
    
    requirePrices(prices);
    requireSales(data);

    getSales(sales, data);
    totalSalesSucursal3(data);
    salesSucursal1Art6(data);
    mostUnitsArt8Branch(data);
    

    return 0;
}