#include <iostream>
#include <cstdlib> // Librer�a para generaci�n de n�meros aleatorios
#include <ctime>   // Librer�a para obtener la hora actual

using namespace std;

// M�todo para generar un n�mero aleatorio dentro de un rango
int generarNumeroAleatorio(int minimo, int maximo) {
    return rand() % (maximo - minimo + 1) + minimo;
}

int main() {
    int cantidadNumeros, minimo, maximo;

    cout << "Ingrese la cantidad de n�meros enteros aleatorios a generar: ";
    cin >> cantidadNumeros;

    cout << "Ingrese el valor m�nimo del rango: ";
    cin >> minimo;

    cout << "Ingrese el valor m�ximo del rango: ";
    cin >> maximo;

    // Inicializamos la semilla para los n�meros aleatorios
    srand(time(0));

    cout << "N�meros enteros aleatorios generados:" << endl;
    for (int i = 0; i < cantidadNumeros; i++) {
        int numero = generarNumeroAleatorio(minimo, maximo);
        cout << numero << " ";
    }

    cout << endl;

    return 0;
}
