#include <iostream>
#include <string>
#define TF 2500
using namespace std;
struct Fecha{
    int day;
    int month;
    int year;
};
struct Direccion{
    string calle;
    int altura;
    int dpto;
};
struct Paciente{
    string nombreCompleto;
    Direccion direccion;
    long int documento;
    long int telefono;
    Fecha nacimiento;
};
struct IngresoAlHospital{
    Paciente paciente;
    string motivo;//Estudio, Emergencia, Consulta.
    string sector;//Traumatología, Ultrasonografía, Radiología, Toxicología.
    Fecha ingreso;
    Fecha egreso;
};
int main(int argc, char const *argv[]){
    IngresoAlHospital registros[TF], ingreso;
    int n;
    cout << "¿Cuantos ingresos desea registrar? ";
    cin >> n;
    for (int i = 0; i < n; i++){
        cout << "========= INGRESO N°"<<(i+1)<<" ========="<<endl;

        cout << "--------- Datos del Paciente ---------" << endl;
        cout << "Por favor, ingrese los siguientes datos:"<<endl;
        cout << "Nombre completo del paciente: ";
        cin >> ingreso.paciente.nombreCompleto;
        cout << "Número de documento: ";
        cin >> ingreso.paciente.documento;
        cout << "Fecha de nacimiento: "<<endl;
        cout << " dia: ";
        cin >> ingreso.paciente.nacimiento.day;
        cout << " mes: ";
        cin >> ingreso.paciente.nacimiento.month;
        cout << " año: ";
        cin >> ingreso.paciente.nacimiento.year;
        cout << "Número de teléfono: ";
        cin >> ingreso.paciente.telefono;
        cout << "Calle donde vive: ";
        cin >> ingreso.paciente.direccion.calle;
        cout << "Altura o número de vivienda: ";
        cin >> ingreso.paciente.direccion.altura;
        cout << "Departamento: ";
        cin >> ingreso.paciente.direccion.dpto;

        cout << "--------- Datos del ingreso ---------" << endl;
        cout << "Por favor, ingrese los siguientes datos:"<<endl;
        cout << "Motivo del ingreso (Consulta/Estudio/Emergencia): ";
        cin >> ingreso.motivo;
        cout << "Sector que involucra (Traumatología/Ultrasonografía/Radiología/Toxicología): ";
        cin >> ingreso.sector;
        cout << "Fecha de ingreso: "<<endl;
        cout << " dia: ";
        cin >> ingreso.ingreso.day;
        cout << " mes: ";
        cin >> ingreso.ingreso.month;
        cout << " año: ";
        cin >> ingreso.ingreso.year;
        cout << "Fecha de egreso: "<<endl;
        cout << " dia: ";
        cin >> ingreso.egreso.day;
        cout << " mes: ";
        cin >> ingreso.egreso.month;
        cout << " año: ";
        cin >> ingreso.egreso.year;
    }
    
    cout << "Información cargada exitosamente!"<<endl;
    return 0;
}