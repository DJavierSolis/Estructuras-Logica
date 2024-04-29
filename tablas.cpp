#include <iostream>
#include <cmath>

using namespace std;

void Tablas();
int guardar = 2;

int main() {
    Tablas();
    return 0;
}

void Tablas() {
    int numeroFilas = pow(2, guardar);
    int vTablas[numeroFilas][guardar];
    
    // Generar valores para la matriz representando números binarios incrementados en uno
    for (int i = 0; i < numeroFilas; i++) {
        int num = i;
        for (int j = guardar - 1; j >= 0; j--) {
            vTablas[i][j] = num % 2;
            num /= 2;
        }
    }
    
    // Imprimir la matriz con un espacio entre cada número
    for (int i = 0; i < numeroFilas; i++) {
        for (int j = 0; j < guardar; j++) {
            cout << vTablas[i][j] << " ";
        }
        cout << endl;
    }
}