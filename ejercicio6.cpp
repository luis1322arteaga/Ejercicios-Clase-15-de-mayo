#include <iostream>
using namespace std;

int main() {
    int tipoMotor;

    cout << "Ingrese el tipo de motor: ";
    cin >> tipoMotor;

    switch(tipoMotor) {
        case 0:
            cout << "No esta establecido un valor definido para el tipo de bomba";
            break;
        case 1:
            cout << "La bomba es una bomba de agua";
            break;
        case 2:
            cout << "La bomba es una bomba de gasolina";
            break;
        case 3:
            cout << "La bomba es una bomba de hormigón";
            break;
        case 4:
            cout << "La bomba es una bomba de pasta alimenticia";
            break;
        default:
            cout << "No existe un valor válido para tipo de bomba";
    }

    return 0;
}
