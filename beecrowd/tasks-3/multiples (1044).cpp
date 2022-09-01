#include <iostream>

using namespace std;

int main(int argc, char const *argv[]){
    int A, B;

    cin >> A >> B;
    
    if(A%B == 0 || B%A == 0){
        cout << "Sao Multiplos" << endl;
    }else{
        cout << "Nao sao Multiplos" << endl;
    }

    return 0;
}
