#include<iostream>
#include<conio.h>

using namespace std;

/*
void SumaNumeros(int a, int b, int& suma) {   // & = actualiza la suma de la sig. linea

	suma = a + b;      //NO SE RECONMIENDA USAR....SINO COMO SIGUE.

}
*/


int SumaNumeros(int a, int b) {   

	return a + b;

}


int main() {

	int num1 = 0, num2 = 0, sum = 0;

	cout << "Ingresa numero 1: ";
	cin >> num1;

	cout << "Ingrea el numero 2: ";
	cin >> num2;

	SumaNumeros(num1, num2, sum);

	cout << "La suma es: " << sum;
	_getch();

	return 0;
}