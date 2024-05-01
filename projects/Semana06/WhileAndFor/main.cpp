#include<iostream>
#include<conio.h>
#include<locale.h>

using namespace std;

void Ejer01_Impares() {
	int cont = 0;
	int numero = 0;
	cout << "Ingresa un numero: ";
	cin >> numero;

	for (int i = 1; i <= numero; i += 2) {
		
		cout << "EL numero "<< i << " es impar."<<endl;
		cont++;
	}

	cout << "\nHay "<<cont<<" numeros impares hasta el "<<numero;

}

void Ejer02() {
	int numero = 0;

	cout << "Ingresa un numero: ";
	cin >> numero;

	for (int i = 1; i <= numero; i++)
		cout << i<<" ";

}

void Ejer03() {
	int numero = 0,suma = 0;

	cout << "Ingresa un numero: ";
	cin >> numero;

	for (int i = 0; i <= numero; i++) {
		suma += i;
	}
	cout << "La suma de los "<<numero<<" primeros numeros es "<<suma;

}

void Ejer04() {
	int numero = 0, resto = 0;

	cout << "Ingresa un número: ";
	cin >> numero;

	if (numero%2 != 0){
		cout << "es primo";
	}
	else {
		cout << "no es primo";
	}

	

}

void TablaMultiplicar() {

	int num1;
	cout << "Ingresa el números de la tabla de multiplicar: ";
	cin >> num1;

	for (int i = 0; i <= 12; i++) {
		cout << num1 << " * " << i<<" = " << num1 * i << endl;
	}

}

void promedio() {
	int i, j;
	for (j = 1;j <= 10;j++) {
		for (i = 1;i <= j;i++) {
			cout << "*";
		}
		cout << "\n";
	}


}

void main() {
	setlocale(LC_CTYPE, "spanish");

	Ejer01_Impares();
	//Ejer02();
	//Ejer03();
	//Ejer04();
	//TablaMultiplicar();
	//promedio();


	_getch();
}