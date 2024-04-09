#include<iostream>
#include<conio.h>
#include<math.h>

using namespace std;

//La estructura del código de barras es: AAAAMMDDTT

int main() {

	int barcode = 0, year = 0, month = 0, day = 0, residuo1 = 0, residuo2 = 0;
	char ascii = ' ';

	cout << "Ingresa el codigo de barras(10 digitos): ";
	cin >> barcode;

	//2025 05 18 22
	//obtenemos el 2025
	year = (barcode / 1000000);

	residuo1 = (barcode % 1000000);
	month = residuo1 / 10000;

	residuo2 = residuo1 % 10000;
	day = residuo2 / 100;

	ascii = residuo2 % 100;

	//cout << year<<" "<<month<<" "<<day<<" "<<ascii;

	cout << "\nDia de Vencimiento: " << day<<endl;
	cout << "Mes de vencimiento: " << month<<endl;
	cout << "Año de vencimiento: " << year<<endl;
	cout << "El tipo de producto es: " << ascii;
	

	_getch();
	return 0;
}