#include <iostream>
#include <cstdlib> // Librería para generación de números aleatorios
#include <ctime>   // Librería para obtener la hora actual

using namespace std;

// Método para generar un número aleatorio dentro de un rango
int generarNumeroAleatorio(int minimo, int maximo) {
    return rand() % (maximo - minimo + 1) + minimo;
}

int main() {
    int cantidadNumeros, minimo, maximo;

    cout << "Ingrese la cantidad de números enteros aleatorios a generar: ";
    cin >> cantidadNumeros;

    cout << "Ingrese el valor mínimo del rango: ";
    cin >> minimo;

    cout << "Ingrese el valor máximo del rango: ";
    cin >> maximo;

    // Inicializamos la semilla para los números aleatorios
    srand(time(0));

    cout << "Números enteros aleatorios generados:" << endl;
    for (int i = 0; i < cantidadNumeros; i++) {
        int numero = generarNumeroAleatorio(minimo, maximo);
        cout << numero << " ";
    }

    cout << endl;

    return 0;
}
