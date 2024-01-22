#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <math.h>
using namespace std;

// Declaración de funciones
void suma(int a, int b);
void resta(int a, int b);
void multiplicacion(int a, int b);
void division(int a, int b);

int main() {
    int valor1, valor2;

    cout << "Ingrese el primer valor" << endl;
    cin >> valor1;

    cout << "Ingrese el segundo valor" << endl;
    cin >> valor2;

    suma(valor1, valor2);
    resta(valor1, valor2);
    multiplicacion(valor1, valor2);
    division(valor1, valor2);

    return 0;
}

// Definición de funciones
void suma(int a, int b) {
    int resultado = a + b;
    cout << "Suma: " << resultado << endl;
}

void resta(int a, int b) {
    int resultado = a - b;
    cout << "Resta: " << resultado << endl;
}

void multiplicacion(int a, int b) {
    int resultado = a * b;
    cout << "Multiplicacion: " << resultado << endl;
}

void division(int a, int b) {
    if (b != 0) {
        int resultado = a / b;
        cout << "Division: " << resultado << endl;
    } else {
        cout << "No es posible dividir por cero." << endl;
    }
}
