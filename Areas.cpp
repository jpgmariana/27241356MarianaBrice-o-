#include <iostream>
#include <cmath>

using namespace std;

// M�todo para calcular el �rea de un tri�ngulo
double calcularAreaTriangulo(double base, double altura) {
    return (base * altura) / 2;
}

// M�todo para calcular el �rea de un c�rculo
double calcularAreaCirculo(double radio) {
    const double PI = 3.14159265359;
    return pow(radio, 2) * PI;
}

// M�todo para calcular el �rea de un cuadrado
double calcularAreaCuadrado(double lado) {
    return lado * lado;
}

int main() {
    int opcion;
    double base, altura, radio, lado;

    cout << "Seleccione la figura de la que desea calcular el �rea:" << endl;
    cout << "1. Tri�ngulo" << endl;
    cout << "2. C�rculo" << endl;
    cout << "3. Cuadrado" << endl;
    cin >> opcion;

    switch (opcion) {
        case 1:
            cout << "Ingrese la base del tri�ngulo: ";
            cin >> base;
            cout << "Ingrese la altura del tri�ngulo: ";
            cin >> altura;
            cout << "El �rea del tri�ngulo es: " << calcularAreaTriangulo(base, altura) << endl;
            break;

        case 2:
            cout << "Ingrese el radio del c�rculo: ";
            cin >> radio;
            cout << "El �rea del c�rculo es: " << calcularAreaCirculo(radio) << endl;
            break;

        case 3:
            cout << "Ingrese el lado del cuadrado: ";
            cin >> lado;
            cout << "El �rea del cuadrado es: " << calcularAreaCuadrado(lado) << endl;
            break;

        default:
            cout << "Opci�n inv�lida. Por favor seleccione una figura v�lida." << endl;
            break;
    }

    return 0;
}
