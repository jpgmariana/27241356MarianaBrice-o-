#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main() {
    string nombreCliente, producto;
    double precio, total, descuento;
    int cantidad;

    cout << "Ingrese el nombre del cliente: ";
    getline(cin, nombreCliente);

    cout << "Ingrese el producto comprado: ";
    getline(cin, producto);

    cout << "Ingrese el precio unitario del producto: ";
    cin >> precio;

    cout << "Ingrese la cantidad comprada: ";
    cin >> cantidad;

    total = precio * cantidad;

    if (total > 1000 && (producto == "frutas" || producto == "verduras" || producto == "abarrotes")) {
        descuento = 0.2 * total;
        total -= descuento;
    } else {
        descuento = 0;
    }

    cout << fixed << setprecision(2);
    cout << "Nombre del cliente: " << nombreCliente << endl;
    cout << "Producto: " << producto << endl;
    cout << "Precio unitario: $" << precio << endl;
    cout << "Cantidad comprada: " << cantidad << endl;
    cout << "Descuento aplicado: $" << descuento << endl;
    cout << "Total a pagar: $" << total << endl;

    return 0;
}
