#include <iostream>
#include <conio.h>
#include <math.h>


using namespace std;

int main() {
	int n;
	cout << "Ingresa el valor: ";
	cin >> n;
	cout << "El numero elevado al cuadrado es: " << pow(n, 2) << endl;
	cout << "La raiz cuadrada del numero es: " << sqrt(n) << endl;
	_getch();

	return 0;
}