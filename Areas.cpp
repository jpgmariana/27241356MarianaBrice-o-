#include <iostream>
#include <cmath>

using namespace std;

// Método para calcular el área de un triángulo
double calcularAreaTriangulo(double base, double altura) {
    return (base * altura) / 2;
}

// Método para calcular el área de un círculo
double calcularAreaCirculo(double radio) {
    const double PI = 3.14159265359;
    return pow(radio, 2) * PI;
}

// Método para calcular el área de un cuadrado
double calcularAreaCuadrado(double lado) {
    return lado * lado;
}

int main() {
    int opcion;
    double base, altura, radio, lado;

    cout << "Seleccione la figura de la que desea calcular el área:" << endl;
    cout << "1. Triángulo" << endl;
    cout << "2. Círculo" << endl;
    cout << "3. Cuadrado" << endl;
    cin >> opcion;

    switch (opcion) {
        case 1:
            cout << "Ingrese la base del triángulo: ";
            cin >> base;
            cout << "Ingrese la altura del triángulo: ";
            cin >> altura;
            cout << "El área del triángulo es: " << calcularAreaTriangulo(base, altura) << endl;
            break;

        case 2:
            cout << "Ingrese el radio del círculo: ";
            cin >> radio;
            cout << "El área del círculo es: " << calcularAreaCirculo(radio) << endl;
            break;

        case 3:
            cout << "Ingrese el lado del cuadrado: ";
            cin >> lado;
            cout << "El área del cuadrado es: " << calcularAreaCuadrado(lado) << endl;
            break;

        default:
            cout << "Opción inválida. Por favor seleccione una figura válida." << endl;
            break;
    }

    return 0;
}
