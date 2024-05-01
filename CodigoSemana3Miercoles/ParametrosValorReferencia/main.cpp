#include <iostream>
#include <conio.h>

using namespace std;

void SumaNumeros(int a, int b, int& suma) {
    suma = a + b;
}

int RestaNumero(int a, int b, int& resta) {
    resta = a - b;
    return a + b;
}

void main() {
    int num1 = 0, num2 = 0, sum = 0;
    cout << "Ingrese numero 1: ";
    cin >> num1;
    cout << "Ingrese numero 2: ";
    cin >> num2;

    SumaNumeros(num1, num2, sum);

    cout << "La suma es: " << sum;

    getch();
}



