#include<iostream>
#include<conio.h>

using namespace std;


void main() {
	
	double estatura = 0;
	int metros = 0;
	int centimetros = 0;
	int edad = 0;
	cout << "Ingresa tu Estatura: ";
	cin >> estatura;

	
	metros = trunc(estatura);
	centimetros = estatura * 100;
	centimetros = centimetros % 100;

	cout << "metros: " << metros << "m" << endl;
	cout << "Centimetros: " << centimetros << "cm" << endl;


	_getch();
}