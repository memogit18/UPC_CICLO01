#include<iostream>
#include<conio.h>
#include<math.h>

using namespace std;

int IMC(int peso, double talla, double indice) {

	return peso / (talla*talla);

}

int main() {

	int peso = 0, int talla = 0, indice = 0;

	cout << "Ingresa tu peso en kg: ";
	cin >> peso;

	cout << "Ingresa tu talla en metros: ";
	cin >> talla;

	IMC(peso, talla, indice);
	cout << "Tu indice de masa corporal es: " << indice;

	_getch();
	return 0;

}