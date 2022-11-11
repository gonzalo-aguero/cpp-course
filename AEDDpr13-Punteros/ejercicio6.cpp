#include <iostream>
#define SIZE_NAME 20
#define SIZE 3

using namespace std;
struct picture_info{
    char name[SIZE_NAME];
    int date_time;
};
void cargarDatos(picture_info pictures[], picture_info* dirs[]){
    for(int i = 0; i < SIZE; i++){
        cout << "Ingrese el nombre de la imagen: ";
        cin >> pictures[i].name;
        cout << "Ingrese la fecha de la imagen: ";
        cin >> pictures[i].date_time;

        dirs[i] = &pictures[i];
    }
}
int main(){
    picture_info pictures[SIZE];
    picture_info* dirs[SIZE];
    cargarDatos(pictures, dirs);
    cout << "Fin de requerimientos del programa :v"<<endl;
    return 0;
}
