#include <iostream>
using namespace std;

int main() {
    float angulo;
    
    cout << "Ingrese un ángulo: ";
    cin >> angulo;

    if (angulo < 90) {
        cout << "El ángulo es agudo." << endl;
    } else if (angulo > 90) {
        cout << "El ángulo es obtuso." << endl;
    } else {
        cout << "El ángulo es recto." << endl;
    }

    return 0;
}
