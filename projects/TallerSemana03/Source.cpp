#include<iostream>
#include<conio.h>

using namespace std;

int main() {

	//DECLARAR VARIABLES
	int numero, unidad, decena, centena, unidadMillar;

	//SOLICITAR DATOS
	cout << "Ingrese numero de 4 digitos: ";
	cin >> numero; //MCDU --> UDCM

	//HACER OPERACIONES
	unidad = numero % 10; //U 
	numero = numero / 10;  //MCD
	decena = numero % 10; //D
	numero = numero / 10;  //MC
	centena = numero % 10; //C
	unidadMillar = numero / 10;  //M

	//MOSTRAR DATOS
	cout << "El numero es: " << unidad << decena << centena << unidadMillar << endl;

	_getch();

	return 0;
}