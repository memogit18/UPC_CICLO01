#include <iostream>
#include <conio.h>

using namespace std;

int main() {

	float altura;
	float base;
	float ancho;
	float costo;
	float costo_total;

	cout << "Ingresa la altura: ";
	cin >> altura;

	cout << "Ingresa la base: ";
	cin >> base;

	cout << "Ingresa el ancho: ";
	cin >> ancho;

	cout << "Ingresa el costo por m2: ";
	cin >> costo;

	cout << "El costo para llenar la piscina es de: " << (altura * base * ancho) * costo << endl;
	cin >> costo_total;

	return 0;
}