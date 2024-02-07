#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <math.h>
using namespace std;

// Declaración de funciones que realizan las operaciones matemáticas
void suma(int a, int b);
void resta(int a, int b);
void multiplicacion(int a, int b);
void division(int a, int b);

int main() {
    int valor1, valor2;
	// Solicita al usuario que ingrese el primer número
    cout << "Ingrese el primer valor" << endl;
    cin >> valor1;
	// Solicita al usuario que ingrese el segundo número
    cout << "Ingrese el segundo valor" << endl;
    cin >> valor2;
	// Llamadas a las funciones para realizar las operaciones matemáticas
    suma(valor1, valor2);
    resta(valor1, valor2);
    multiplicacion(valor1, valor2);
    division(valor1, valor2);

    return 0;
}

// Definiciones de las funciones declaradas anteriormente
void suma(int a, int b) {
    int resultado = a + b; // Realiza la suma de a y b
    cout << "Suma: " << resultado << endl;
}

void resta(int a, int b) {
    int resultado = a - b; // Realiza la resta de a y b
    cout << "Resta: " << resultado << endl;
}

void multiplicacion(int a, int b) {
    int resultado = a * b; // Realiza la multiplicación de a y b
    cout << "Multiplicacion: " << resultado << endl;
}

void division(int a, int b) {
    if (b != 0) {
        int resultado = a / b; // Realiza la división de a y b
        cout << "Division: " << resultado << endl;
    } else {
    	// Si el divisor es cero, muestra un mensaje de error
        cout << "No es posible dividir por cero." << endl;
    }
}
