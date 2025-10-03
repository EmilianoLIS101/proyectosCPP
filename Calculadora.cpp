// Este programa recibira dos valores a y b, posteriormente pedira un signo, "+, -, /, *" y mostrara el resultado ed la operacion

#include <iostream>

using namespace std;

int main() {
    int a, b;
    char signo;
    cout << "Ingrese el valor de a: ";
    cin >> a;
    cout << "Ingrese el valor de b: ";
    cin >> b;
    cout << "Ingrese el signo de la operacion (+, -, /, *): ";
    cin >> signo;
    switch (signo) {
        case '+':
            cout << "El resultado de la suma es: " << a + b << endl;
            break;
        case '-':
            cout << "El resultado de la resta es: " << a - b << endl;
            break;
        case '*':
            cout << "El resultado de la multiplicacion es: " << a * b << endl;
            break;
        case '/':
            if (b != 0) {
                cout << "El resultado de la division es: " << a / b << endl;
            } else {
                cout << "Error: Division por cero no permitida." << endl;
            }
            break;
        default:
            cout << "Error: Signo no valido." << endl;
    }
}