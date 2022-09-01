#include <iostream>
 
using namespace std;
 
int main() {
    int l;
    cin >> l;

    if(l < 4){
        cout << "BEBE" << endl;
    }else if(l < 15){
        cout << "NINO" << endl;
    }else if(l < 19){
        cout << "JOVEN" << endl;
    }else if(l < 65){
        cout << "ADULTO" << endl;
    }else{
        cout << "ADULTO 3RA" << endl;
    }

}