#include <iostream>

using namespace std;

void sayHelloWorld(){
    cout << "Hello World!" << endl;
}
void intOrderAsc(int arr[], int TL){
    int i = 0, aux;
    bool movido = false;

    while(i < TL-1){
        if(arr[i] > arr[i+1]){
            aux = arr[i];
            arr[i] = arr[i+1];
            arr[i+1] = aux;
            movido = true;
        }
        
        if(i == TL-2 && movido) {
            i = 0;
            movido = false;
        }else i++;
    }
    
}
