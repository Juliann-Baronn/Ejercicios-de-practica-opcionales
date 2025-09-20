#include <iostream>
using namespace std;

int main() {
    const int NUM_CONDUCTORES = 10;
    float distancias[NUM_CONDUCTORES]; // Arreglo para almacenar distancias
    float suma = 0.0;
    int indiceMax = 0;

    // Entrada de datos
    for (int i = 0; i < NUM_CONDUCTORES; i++) {
        cout << "Ingrese la distancia recorrida por el conductor " << i + 1 << " (en km): ";
        cin >> distancias[i];
        suma += distancias[i];

        // Verificar si este conductor tiene la distancia máxima
        if (distancias[i] > distancias[indiceMax]) {
            indiceMax = i;
        }
    }

    // Calcular promedio
    float promedio = suma / NUM_CONDUCTORES;

    // Mostrar resultados
    cout << "\n=== Resultados ===" << endl;
    cout << "Distancia total recorrida por todos los conductores: " << suma << " km" << endl;
    cout << "Distancia promedio recorrida: " << promedio << " km" << endl;
    cout << "El conductor con mayor distancia es el numero " << (indiceMax + 1)
         << " con " << distancias[indiceMax] << " km" << endl;

    return 0;
}
