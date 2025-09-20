#include <iostream>
#include <cmath> // Para round()
using namespace std;

int main() {
    int n;
    cout << "Ingrese el numero de productos: ";
    cin >> n;

    double subtotal = 0.0;

    // Bucle para leer precio y cantidad de cada producto
    for (int i = 0; i < n; i++) {
        double precio;
        int cantidad;
        cout << "Ingrese el precio del producto " << i + 1 << ": ";
        cin >> precio;
        cout << "Ingrese la cantidad del producto " << i + 1 << ": ";
        cin >> cantidad;

        subtotal += precio * cantidad; // Sumar al subtotal
    }

    // Calcular el impuesto (8%)
    double impuesto = subtotal * 0.08;
    double total = subtotal + impuesto;

    // Verificar si aplica descuento
    if (total > 100) {
        double descuento = total * 0.10;
        total -= descuento;
        cout << "Se aplico un descuento del 10% por compras mayores a $100.\n";
    }

    // Redondear resultados a 2 decimales
    subtotal = round(subtotal * 100.0) / 100.0;
    impuesto = round(impuesto * 100.0) / 100.0;
    total = round(total * 100.0) / 100.0;

    // Mostrar resultados
    cout << "Subtotal: $" << subtotal << endl;
    cout << "Impuesto (8%): $" << impuesto << endl;
    cout << "Costo total: $" << total << endl;

    return 0;
}
