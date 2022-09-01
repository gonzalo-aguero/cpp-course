#include <iostream>

using namespace std;

int main(){
    int M = 1, N = 1;

    while(0 < M && 0 < N){
        int number = M - 1;
        int sum = 0;
        
        cin >> M >> N;

        if(!(0 < M && 0 < N)){
            break;
        }

        if(M > N){
            //sort values in ascending order.
            int aux = M;
            M = N;
            N = aux;
        }

        number = M;

        while (number <= N){
            cout << number << " ";
            sum += number;
            number++;
        }
        
        cout << "Sum=" << sum << endl;
    }

    return 0;
}
