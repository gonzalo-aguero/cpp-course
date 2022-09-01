#include <iostream>
using namespace std;
#define TF 3
bool esCuadradoMagico(int array[TF][TF]);
int main(){
    int array[TF][TF] = {
        {2,7,6},
        {9,5,1},
        {4,3,8}
    };

    cout << "Es cuadrado mágico? "<<esCuadradoMagico(array)<<endl;
}

bool esCuadradoMagico(int array[TF][TF]){
    int i = 0, j;
    bool output = true;
    int sums[2*TF + 2] = {0};
    cout << endl;

    // sumatories of the rows
    while (i < TF){
        j=0;
        while (j < TF){
            sums[i] += array[i][j];
            j++;
        }
        i++;
    }

    // sumatories of the columns
    j = 0;
    while (j < TF){
        i=0;
        while (i < TF){
            sums[j + TF-1] += array[i][j];
            i++;
        }
        j++;
    }
    
    // sumatories of diagonals
    i = 0;
    while (i < TF){
        sums[1 + (TF-1)*2] += array[i][i];// diagonal "\"
        sums[2 + (TF-1)*2] += array[(TF-1)-i][(TF-1)-i];// diagonal "/"
        cout << array[i][i] << "  " << array[(TF-1)-i][i] << endl;
        i++;
    }

    i = 1;
    while (i < TF){
        if(array[i] == array[i-1]) cout << "Sumatoria N°"<<i<<" es igual"<<endl;
        else output = false; break;
        i++;
    }
    

    return output;
}