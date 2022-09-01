#include <iostream>

using namespace std;

#define TF 20

int main(){
    int N[TF] = {};
    int i = 0, i_a, i_b, aux;
    
    while (i < TF){
        cin >> N[i];
        i++;
    }

    for (size_t i = 0; i < TF/2; i++)
    {
        i_a = i;//index a
        i_b = TF-i-1;//index b
        
        //do swap
        aux = N[i_a];
        N[i_a] = N[i_b];
        N[i_b] = aux;
    }
    
    i = 0;
    while (i < TF){
        cout << "N["<<i<<"] = "<<N[i]<<endl;
        i++;
    }

    return 0;
}
