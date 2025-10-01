#include <iostream>
#include <string>

using namespace std;

void grupo(int edad, string nombre = "Invitado") {
    if (edad < 13) {
        cout << "Bienvenido " << nombre << " estas en el grupo A" << endl; 
    } else if (edad >= 13 && edad < 18) {
        cout << "Bienvenido " << nombre << " estas en el grupo B" << endl; 
    } else if (edad >= 18 && edad < 65) {
        cout << "Bienvenido " << nombre << " estas en el grupo C" << endl; 
    } else {
        cout << "Bienvenido " << nombre << " estas en el grupo D" << endl; 
    }
}

int main() 
{
    string nombre;
    cout << "Ingrese su nombre: ";
    cin >> nombre;
    int edad;
    cout << "Ingrese su edad: ";
    cin >> edad;
    grupo(edad, nombre);
};