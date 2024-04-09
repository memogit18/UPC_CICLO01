#include<iostream>
#include<conio.h>

using namespace std;

void Ejercicio01() {

	double ladoA = 0, ladoB = 0, ladoC = 0;
	double area_cuadrado = 0, area_triangulo = 0;

	cout << "Ingresa lado A: ";
	cin >> ladoA;

	cout << "Ingresa lado B: ";
	cin >> ladoB;

	cout << "Ingresa lado C: ";
	cin >> ladoC;

	area_cuadrado = ladoB * ladoC;
	area_triangulo = ladoB * (ladoC - ladoA) / 2;

	cout << "El area de la figura es: " << (area_cuadrado + area_triangulo) << " m2";

}

void Ejercicio02() {

	int Carmela = 0, Javier = 0, Eulogio = 0;
	double total_capital = 0;

	cout << "Ingresa el aporte de Carmela: ";
	cin >> Carmela;

	cout << "Ingresa el aporte de Javier: ";
	cin >> Javier;	

	cout << "Ingresa el aporte de Eulogio: ";
	cin >> Eulogio;	

	total_capital = (Carmela + Javier + Eulogio)*1.0;  //lo convertimos a double
	cout << "\nTotal de Capital es: " << total_capital<<endl;

	cout << "\n% acciones de Carmela: " << Carmela / total_capital * 100<<endl;
	cout << "% acciones de Javier: " << Javier / total_capital * 100 << endl;
	cout << "% acciones de Eulogio: " << Eulogio / total_capital * 100 << endl;

}

void Ejercicio03() {

	double precio_compra = 0, precio_venta = 0, ganancia = 0;

	cout << "Ingresa el costo del producto: ";
	cin >> precio_compra;

	cout << "Ingresa el % de Ganancia deseado: ";
	cin >> ganancia;	

	precio_venta = precio_compra + (precio_compra * (ganancia/100.0));
	cout << "\nEl precio de venta deberia ser: " << precio_venta<<" soles.";

}

void Ejercicio04() {

	double distancia = 0, velocidad = 0, tiempo = 0;

	cout << "Ingresa la Distancia entre ciudades(en km): ";
	cin >> distancia;

	cout << "Ingresa la velocidad(en km): ";
	cin >> velocidad;

	tiempo = distancia / velocidad;
	cout << "El tiempo que se requiere es de: "<<tiempo<<" horas.";

}

void Ejercicio05() {

	int total_seconds = 0, horas = 0, minutos = 0, segundos = 0;

	cout << "Ingresa la cantidad de segundos a convertir: ";
	cin >> total_seconds;

	horas = total_seconds / 3600;

	//queda 279 de residuo
	minutos = (total_seconds % 3600)/60;

	segundos = (total_seconds % 3600) % 60;

	cout << "La hora es: " << horas<<":"<<minutos<<":"<<segundos;

}

void Ejercicio06() {

	int hora = 0, minuto = 0, segundo = 0, todo_a_segundos = 0;
	int new_hora = 0, new_minuto = 0, new_segundo = 0;

	cout << "Ingresa la hora: ";
	cin >> hora;

	cout << "Ingresa los minutos: ";
	cin >> minuto;
	
	cout << "Ingresa los segundos: ";
	cin >> segundo;

	todo_a_segundos = (hora * 3600 + minuto * 60 + segundo) + 1;
	
	new_hora = todo_a_segundos / 3600;
	new_minuto = (todo_a_segundos % 3600)/60;
	new_segundo = (todo_a_segundos % 3600) % 60;

	cout << "Nueva hora es: " << new_hora<<":"<<new_minuto<<":"<<new_segundo;

}

void Ejercicio07() {



}



void main() {

	//Ejercicio01();

	//Ejercicio02();

	//Ejercicio03(); 
	
	//Ejercicio04();

	//Ejercicio05();

	Ejercicio06();

	//Ejercicio07();


	_getch();
}