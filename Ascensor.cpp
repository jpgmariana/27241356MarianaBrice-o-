#include <iostream>

using namespace std;

// Función para simular el ascensor subiendo
void ascensorSubiendo(int pisoActual, int pisoDestino) {
    cout << "El ascensor se encuentra en el piso " << pisoActual << endl;
    cout << "Ingrese el piso al que desea ir: " << endl;

    if (pisoActual < pisoDestino) {
        cout << "El ascensor va subiendo..." << endl;
    } else {
        cout << "El ascensor va bajando..." << endl;
    }

    cout << "Se han abierto las puertas." << endl;
    cout << "Se han cerrado las puertas." << endl;
}

int main() {
    int pisoActual, pisoDestino;

    cout << "Ingrese el piso actual del ascensor: ";
    cin >> pisoActual;

    cout << "Ingrese el piso al que desea ir: ";
    cin >> pisoDestino;

    // Simulamos el proceso del ascensor
    ascensorSubiendo(pisoActual, pisoDestino);

    return 0;
}
