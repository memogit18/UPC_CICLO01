#include<iostream>
#include<conio.h>
#include<math.h>

using namespace std;

void Ejercicio01() {

	// ingreso de un número entero 
	// si este es mayor o igual a 10 devuelva el triple de este 
	// de lo contrario la cuarta parte de este.

	int number = 0;

	cout << "Ingresa un numero entero: ";
	cin >> number;

	if (number <= 10) {
		number *= 3;
		cout << "El triple del numero es: " << number;
	}
	else {
		cout << "LA cuarta parte del numero es: " << (number/4.0);
	}


}

void Ejercicio02() {

	//  Datos de entrada la distancia a recorrer y el número de días de estancia,
	//  calcule el costo total de un Tour de Viaje.
	//	El precio por cada 100 KM de recorrido es de S / .150 y
	//  por cada día de estancia S / .520.
	//	Por último, si el monto total a pagar sobrepasa los S / .2500, descuento del 35 % .

	int distance = 0, days = 0, total_cost = 0;

	cout << "Ingresa la distancia a recorrer en km: ";
	cin >> distance;

	cout << "Ingresa los dias de estancia: ";
	cin >> days;

	total_cost = (distance * 1.5) + (days * 520);

	if (total_cost>2500) {
		cout << "El costo total del tour es: " << total_cost<<endl;	
		total_cost *= 0.65;
		cout << "El costo total del tour con 30% dscto es: " << total_cost;
	}
	else {
		cout << "El costo total sin descto es: " << total_cost;
	}

}

void Ejercicio03() {

	// las coordenadas (x, y) e indique si se encuentra en el círculo x2 + y2 = 25.

	int coord_x = 0, coord_y = 0;

	cout << "Ingrese las coordenas (x y):";
	cin >> coord_x >> coord_y;

	if (pow(coord_x,2) + pow(coord_y,2) == 25) {
		cout<<"Las coordenas pertenen a la circunferencia.";
	}
	else {
		cout << "Las coordenas NO pertenen a la circunferencia.";
	}


}

void Ejercicio04() {

	// leer tres valores distintos, 
	// cuál de los tres valores es el mayor y cuál es el menor.

	int value1 = 0, value2 = 0, value3 = 0, max_value, min_value;

	cout << "Ingresa 3 numeros (A B C):";
	cin >> value1 >> value2 >> value3;

	max_value = value1;

	if (value2 > max_value) {	
		max_value = value2;	
	}

	if (value3 > max_value) {
		max_value = value3;	
	}

	min_value = value1;

	if (value2 < min_value) {
		min_value = value2;
	}

	if (value3 < min_value) {
		min_value = value3;
	}

	cout << "El numero mas grande es: " << max_value<<" y el menor es: "<<min_value;	

}

void Ejercicio05() {

	// leer tres valores distintos y los ordene de mayor a menor.

	int value1 = 0, value2 = 0, value3 = 0, max_value, min_value, medio_value = 0;

	cout << "Ingresa 3 numeros (A B C):";
	cin >> value1 >> value2 >> value3;

	max_value = value1;

	if (value2 > max_value) {
		max_value = value2;
	}

	if (value3 > max_value) {
		max_value = value3;
	}

	min_value = value1;

	if (value2 < min_value) {
		min_value = value2;
	}

	if (value3 < min_value) {
		min_value = value3;
	}

	medio_value = (value1 + value2 + value3) - (max_value + min_value);

	cout << "De mayor a menor: " << max_value<<", " << medio_value<<", " << min_value;

}

void Ejercicio06_switch() {

	// Convertir calificaciones numéricas, según la siguiente tabla :
	// A = 19 o 20, B = 16, 17 o 18, C = 13, 14 o 15, D = 10, 11 o 12, E = 1 hasta el 9. 
	// Se asume que la calificación está comprendida entre 1 y 20.

	int calificacion;

	cout << "Ingrese la calificacion (1-20): ";
	cin >> calificacion;

	if (calificacion < 0 || calificacion > 20) {
		cout << "Ingresa un Calificacion entre el rango.";
	}
	else{
		switch (calificacion) {
		case 19: case 20: cout << "A";
			break;
		case 16: case 17: case 18: cout << "B";
			break;
		case 13: case 14: case 15: cout << "C";
			break;
		case 10: case 11: case 12: cout << "D";
			break;
		case 1: case 2: case 3: case 4: case 5: case 6: case 7: case 8: case 9: cout << "E";
			break;

		default:
			cout << "Sacaste 0...(:";
			break;
		}
	}
}

void Ejercicio07_ascii() {

	// Leer un número entero e imprima si este es un:
	// dígito o una letra mayúscula o letra minúscula u otro carácter.
	// Dígitos = del 48 a 57
	// Letras mayúsculas = del 65 a 90
	// Letras minúsculas = del 97 a 122

	int valor = char ('caracter');
	
	

	cout << "Ingresa un numero entero (48-122): ";
	cin >> caracter;

	if (caracter >= 48 && caracter <= 57) {
		cout << "Es un digito."<< caracter;	
	}
	else {
		if (caracter >= 65 && caracter <= 90) {
			cout << "Es una letra mayuscula."<< caracter;	
		}
		else {
			cout << "Es una letra minuscula."<< caracter;	
		}
	}

}


void main() {

	//Ejercicio01();
	//Ejercicio02();	
	//Ejercicio03();
	//Ejercicio04();
	//Ejercicio05();
	//Ejercicio06_switch();	
	Ejercicio07_ascii();


	_getch();
}