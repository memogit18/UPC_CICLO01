#include<iostream>
#include<conio.h>

using namespace std;

void Ejercicio01() {

	double altura = 0, base = 0, ancho = 0, precio_m3 = 0;

	cout << "Ingresa la altura: ";
	cin >> altura;

	cout << "Ingresa la base: ";
	cin >> base;

	cout << "Ingresa el ancho: ";
	cin >> ancho;

	cout << "Ingresa el costo por m2: ";
	cin >> precio_m3;

	cout << "El costo para llenar la piscina es de: " << (altura * base * ancho) * precio_m3 << endl;

}


void Ejercicio02() {

	int total_ganancia = 0;
	cout << "Ingresa la ganancia: ";
	cin >> total_ganancia;

	int socio01 = 0;
	cout << "Ingresa la cantidad de acciones del socio 1: ";
	cin >> socio01;

	int socio02 = 0;
	cout << "Ingresa la cantidad de acciones del socio 2: ";
	cin >> socio02;

	int socio03 = 0;
	cout << "Ingresa la cantidad de acciones del socio 3: ";
	cin >> socio03;

	double suma_acciones = 0;
	suma_acciones = socio01 + socio02 + socio03;
	cout << "\nLa sama de acciones es: " << suma_acciones << endl;

	double ganancia_socio_01 = 0;
	ganancia_socio_01 = (socio01 / suma_acciones) * 1.0 * total_ganancia;

	double ganancia_socio_02 = 0;
	ganancia_socio_02 = (socio02 / suma_acciones) * total_ganancia;

	double ganancia_socio_03 = 0;
	ganancia_socio_03 = (socio03 / suma_acciones) * total_ganancia;


	cout << "\nLa ganancia del socio 01 es: " << ganancia_socio_01 << endl;

	cout << "La ganancia del socio 02 es: " << ganancia_socio_02 << endl;

	cout << "La ganancia del socio 03 es: " << ganancia_socio_03 << endl;

}


void Ejercicio03() {

	double dolar = 0;
	double tasa = 3.87;
	double soles = 0;

	cout << "Ingresa la cantidad de dolares a cambiar: ";
	cin >> dolar;

	double cambio = 0;
	cambio = dolar * tasa;


	cout << "Tu cambio es: " << cambio << " nuevos soles.";

}


void Ejercicio04() {




}



void Ejercicio13() {

	int cantidad = 0, ciento = 0, medio_ciento = 0, decena = 0, unidad = 0;

	cout << "Ingresa la cantidad de lapices: ";
	cin >> cantidad;

	//347/100 
	ciento = cantidad / 100;  //no se trunc ya que lo definimos como int

	//residuo 347 % 100 = 47/50 = 0
	medio_ciento = (cantidad % 100) / 50;

	//347 % 100 = 47 % 50 = 47 /10 =4
	decena = ((cantidad % 100) % 50) / 10;

	unidad = ((cantidad % 100) % 50) % 10;

	cout << "Cajas de un ciento: " << ciento << endl;
	cout << "Cajas de medio ciento: " << medio_ciento << endl;
	cout << "Cadas de decena: " << decena << endl;
	cout << "Unidades: " << unidad << endl;

}



void main() {

	//Ejercicio01();

	//Ejercicio02();

	Ejercicio03();

	//Ejercicio04();

	//Ejercicio05();

	//Ejercicio06();

	//Ejercicio07();


	//Ejercicio13();


	_getch();
}