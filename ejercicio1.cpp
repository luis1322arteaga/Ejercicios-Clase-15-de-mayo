#include <iostream>
using namespace std;

int main() {
    float angulo1, angulo2, angulo3;

    cout << "Ingrese el primer ángulo: ";
    cin >> angulo1;
    cout << "Ingrese el segundo ángulo: ";
    cin >> angulo2;

    angulo3 = 180 - (angulo1 + angulo2);

    cout << "El tercer ángulo es: " << angulo3 << "°" << endl;

    return 0;
}
