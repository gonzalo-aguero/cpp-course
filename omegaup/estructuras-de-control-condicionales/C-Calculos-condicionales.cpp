#include <iostream>
 
using namespace std;
 
int main() {
    int N, counter = 0;
    cin >> N;

    if(N%2 == 0){
        //N es par
        N /= 2; 
    }else{
        N++;
    }
    counter++;


    if((N/100)%10 != 0 || (N/1000)%10 != 0){
        // 3 o más cifras
        N /= 100;
        counter++;
    }else{
        if((N/10)%10 != 0){
            // 2 cifras
            N /= 10;
            counter++;
        }
    }



    if(N%3 == 0){
        // N es multiplo de 3 (o es divisible por 3).
        N--;
        counter++;
    }

    cout << N << " " << counter << endl;

    return 0;
}