#include <iostream>
#include <string>
using namespace std;

int main() {
    string nombre;
    float corto1, corto2, parcial1, parcial2, laboratorio, proyecto, promedio;

    cout << "Ingrese su nombre: ";
    getline(cin, nombre);

    cout << "Ingrese la nota del Corto 1: ";
    cin >> corto1;

    cout << "Ingrese la nota del Corto 2: ";
    cin >> corto2;

    cout << "Ingrese la nota del 1° Parcial: ";
    cin >> parcial1;

    cout << "Ingrese la nota del 2° Parcial: ";
    cin >> parcial2;

    cout << "Ingrese la nota del Laboratorio: ";
    cin >> laboratorio;

    cout << "Ingrese la nota del Proyecto: ";
    cin >> proyecto;

    promedio = (corto1 * 0.10) + (corto2 * 0.10) + (parcial1 * 0.15) + (parcial2 * 0.20) + (laboratorio * 0.20) + (proyecto * 0.25);

    if (promedio >= 6.0) {
        cout << nombre << ", usted ha pasado la materia con un promedio de " << promedio << "." << endl;
    } else {
        cout << nombre << ", usted no ha pasado la materia. Su promedio es " << promedio << "." << endl;
    }

    return 0;
}
