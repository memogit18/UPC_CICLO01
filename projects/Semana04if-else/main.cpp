#include<iostream>
#include<conio.h>

using namespace std;

void Ejemplo01() {

	int edad = 0;

	cout << "Ingresa tu edad: ";
	cin >> edad;

	if (edad >= 18) {
		cout<<"Eres mayor de edad.";
	}

	else {
		cout<<"Eres menor de edad.";
	}

}

void Ejemplo02() {

	int numero = 0;
	cout << "Ingresa un numero: ";
	cin >> numero;

	if (numero == 0) {
		cout << "El numero es neutro.";
	}
	else {
		if (numero < 0) {
			cout << "El numero es negativo.";
		}
		else {
			cout << "El numero es positivo.";
		}
	}

}

void Ejemplo03() {

	int edad = 0;
	char sexo = ' ';  //se puede dejar sin iniciar tambien

	cout << "Ingrese tu edad: ";
	cin >> edad;

	cout << "Ingresa tu sexo (H:hombre / M:mujer): ";
		cin >> sexo;

	
	//if (edad >= 18 && (sexo == 'H' || sexo == 'h')) {  //c++ es case sensitive
	//	cout << "Eres mayor de edad y eres hombre.";
	//}
	
	sexo = toupper(sexo);  //otra forma se arregar casesensitive
	if (edad >= 18 && sexo == 'H' ) {  //c++ es case sensitive
		cout << "Eres mayor de edad y eres hombre.";
	}

	else {
		
		//15=> F => V
		if (!(edad >= 18)) {
			cout << "No es mayor de edad.";
		}
		else {
			cout << "Eres nayor de edad.";
		}
	
	}
}

void Ejemplo04() {

	double numero = 0;
	cout << "Ingrese un numero: ";
	cin >> numero;

	numero = numero + 1;  //esta es un forma de incremento
	numero++;  //agrega uno
	++numero;  //es lo mismo, aunque no se usa muxo
	numero += 10;  //asi se suma otra cantidad
	
	cout << "Numero actualizado: "<<numero;	

}

void Ejemplo05() {

	double precio = 0;
	char gaseosa;

	cout << "Ingresa gaseosa: ";
	cin >> gaseosa;

	//gaseosa = toupper(gaseosa);
	switch (gaseosa)
	{
		case 'G' : case 'g' : precio = 2.2; break;
		case 'K': precio = 3.5; break;
		case 'C': precio = 2.8; break;

		default:
		precio = 4.2;
		break;
	}
	cout << "El precio es:" << precio;

}

void EjercicioClase01() {

	double nota = 0;

	cout << "Ingresa nota: ";
	cin >> nota;

	if (nota < 0 || nota > 20){
		cout << "Nota ingresada fuera de rango.";
	}
	else{
		if (nota < 12.5) {
			cout << "Desaprobado.";
		}
		else {
			cout << "Aprobado.";
		}
	}

}

void EjercicioClase02() {

	int edad = 0;
	
	cout << "Ingresa tu edad: ";
	cin >> edad;

	//validamos data
	if (edad < 0) {
		cout << "Edad fuera de rango.";
	}
	else {
		if (edad<18) {
			cout << "Precio a pagar es 7 soles.";
		}
		else {
			if (edad >= 18 && edad <= 50) {
				cout << "Precio a pagar es 5 soles.";
			}
			else {
				cout << "Precio a pagar es 15 soles.";
			}
		}
	}

}

void EjercicioClase03() {

	int lado1 = 0, lado2 = 0, lado3 = 0;

	cout << "Ingresa los lados del triangulo(A B C): ";
	cin >> lado1 >> lado2 >> lado3;

	if (lado1 < lado2 + lado3 && lado2 < lado1 + lado3 && lado3 < lado1 + lado3) {
		cout << "Es un Triangulo";
	}
		
	else {
		cout << "No es un Triangulo";
	
	}

}


void main() {

	//Ejemplo01();
	//Ejemplo02();
	//Ejemplo03();
	//Ejemplo04();
	//Ejemplo05();
	//EjercicioClase01();	
	//EjercicioClase02();
	EjercicioClase03();

	_getch();

}

