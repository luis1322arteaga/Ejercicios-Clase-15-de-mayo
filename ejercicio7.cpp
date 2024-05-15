#include <iostream>
using namespace std;

int main() {
    int sector, cantidad;
    double costo;

    cout << "Seleccione un sector del estadio:\n";
    cout << "1. Sol general\n";
    cout << "2. Sol preferente\n";
    cout << "3. Sombra\n";
    cout << "4. Tribuna\n";
    cout << "5. Platea\n";
    cin >> sector;

    cout << "Ingrese la cantidad de entradas solicitadas: ";
    cin >> cantidad;

    switch(sector) {
        case 1:
            costo = 3.0;
            break;
        case 2:
            costo = 5.0;
            break;
        case 3:
            costo = 8.0;
            break;
        case 4:
            costo = 15.0;
            break;
        case 5:
            costo = 20.0;
            break;
        default:
            cout << "No existe un valor válido para el sector del estadio";
            return 0;
    }

    double total = costo * cantidad;
    cout << "El total a pagar por las entradas es: $" << total;

    return 0;
}
