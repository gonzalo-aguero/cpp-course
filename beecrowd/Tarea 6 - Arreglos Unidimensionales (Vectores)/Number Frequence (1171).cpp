#include <iostream>

using namespace std;

#define DEBUG false
#define TF 2000
void intOrderAsc(int arr[], int times[], int TL);
int main()
{
    int N, i = 0, j = 0, TL = 0, currentNum;
    int numbers[TF], times[TF] = {0};
    bool inArray = false; //the current number is in the array
    
    cin >> N;

    while (i < N){
        cin >> currentNum;
        
        /** busca el numero actual. Si está en el array, en el If siguiente le suma uno a la cantidad de veces aparecido.
          * Si no, lo agrega al array.
          **/
        while (j < TL){
            if(numbers[j] == currentNum){
                inArray = true;
                times[j]++;
                if(DEBUG)
                    cout <<" está en el arreglo, en la pos: ["<<j<<"] = "<<numbers[j]<<" / "<<times[j]<<" veces registradas."<< endl;
                break;
            }else inArray = false;
            j++;
        }
        j = 0;

        if(!inArray){
            numbers[TL] = currentNum;
            times[TL]++;
            if(DEBUG)
                cout << " no está en el array, se lo agrega en la pos: ["<<TL<<"] = "<< numbers[TL]<<" / "<<times[TL]<<" veces registradas."<< endl;
            TL++;
        }

        i++;
    }
    if(DEBUG) cout << endl;

    intOrderAsc(numbers, times, TL);
    
    for (int k = 0; k < TL; k++){
        cout << numbers[k] << " aparece " << times[k] << " vez(es)" << endl;
    }

    return 0;
}
void intOrderAsc(int arr[], int times[], int TL){
    int i = 0, aux;
    bool movido = false;

    while(i < TL-1){
        if(arr[i] > arr[i+1]){
            //swap numbers
            aux = arr[i];
            arr[i] = arr[i+1];
            arr[i+1] = aux;
            //swap times
            aux = times[i];
            times[i] = times[i+1];
            times[i+1] = aux;

            movido = true;
        }

        if(i == TL-2 && movido) {
            i = 0;
            movido = false;
        }else i++;
    }
    
}