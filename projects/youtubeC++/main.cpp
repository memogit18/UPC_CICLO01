/*
Así se comenta 
en varias lineas

*/

#include <iostream>
#include<conio.h>

using namespace std;

int main() {

	int n1, n2, suma = 0, resta = 0;

	cout<< "Digite un numero: "; cin >> n1;
	cout << "Digite otro numero: "; cin >> n2;

	suma = n1 + n2;
	resta = n1 - n2;

	cout << "la suma es: " << suma << endl;
	cout << "la resta es: " << resta << endl;

	_getch();

	return 0;
}