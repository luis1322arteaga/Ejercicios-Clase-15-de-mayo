#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a, b, c, discriminante, raiz1, raiz2;

    cout << "Ingrese el valor de a: ";
    cin >> a;
    cout << "Ingrese el valor de b: ";
    cin >> b;
    cout << "Ingrese el valor de c: ";
    cin >> c;

    if(a == 0 && b == 0) {
        cout << "No es una ecuación válida.";
    } else if(a == 0) {
        raiz1 = -c / b;
        cout << "La raíz es: " << raiz1;
    } else {
        discriminante = b*b - 4*a*c;
        if(discriminante > 0) {
            raiz1 = (-b + sqrt(discriminante)) / (2*a);
            raiz2 = (-b - sqrt(discriminante)) / (2*a);
            cout << "Las raíces son: " << raiz1 << " y " << raiz2;
        } else if(discriminante == 0) {
            raiz1 = -b / (2*a);
            cout << "La raíz es: " << raiz1;
        } else {
            cout << "Las raíces son complejas.";
        }
    }

    return 0;
}
