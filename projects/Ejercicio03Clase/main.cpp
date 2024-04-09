#include<iostream>
#include<conio.h>
#include<math.h>

using namespace std;

int main() {

	double dolar = 0;
	double tasa = 3.87;
	double soles = 0;

	cout << "Ingresa la cantidad de dolares a cambiar: ";
	cin >> dolar;

	double cambio = 0;
	cambio = dolar * tasa;
	

	cout << "Tu cambio es: " << cambio<<" nuevos soles.";

	_getch();

	return 0;
}