#include<iostream>
#include<conio.h>
#include<math.h>
#include<iomanip>

using namespace std;

void Ejemplo01() {

	int edad = 0;

	cout << "Ingresa tu edad: ";
	cin >> edad;

	if (edad >= 18) {
		cout << "Eres mayor de edad.";
	}

	else {
		cout << "Eres menor de edad.";
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
	if (edad >= 18 && sexo == 'H') {  //c++ es case sensitive
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

	cout << "Numero actualizado: " << numero;

}

void Ejemplo05() {

	double precio = 0;
	char gaseosa;

	cout << "Ingresa gaseosa: ";
	cin >> gaseosa;

	//gaseosa = toupper(gaseosa);
	switch (gaseosa)
	{
	case 'G': case 'g': precio = 2.2; break;
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

	if (nota < 0 || nota > 20) {
		cout << "Nota ingresada fuera de rango.";
	}
	else {
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
		if (edad < 18) {
			cout << "Precio a pagar es 7 soles.";
		}
		else {
			if (edad >= 18 && edad <= 50) {
				cout << "Precio a pagar es 15 soles.";
			}
			else {
				cout << "Precio a pagar es 5 soles.";
			}
		}
	}

}

void EjercicioClase03() {

	int lado1 = 0, lado2 = 0, lado3 = 0;

	cout << "Ingresa los lados del triangulo(A B C): ";
	cin >> lado1 >> lado2 >> lado3;

	if ( (lado1 < (lado2 + lado3) && lado1 > (lado2 - lado3)) && 
		(lado2 < (lado1 + lado3) && lado2 > (lado1 - lado3)) &&
		(lado3 < (lado1 + lado2) && lado3 > (lado1 - lado2)) ) {
		
		cout << "Es un Triangulo";
	}

	else {
		cout << "No es un Triangulo";

	}

}

void EjercicioClase04() {

	//“EQUILATERO” o “ESCALENO” o “ISOSCELES

	int lado1, lado2, lado3;

	cout << "Ingresa los lados del Triangulo (A B C): ";
	cin >> lado1 >> lado2 >> lado3;

	if (lado1 == lado2 && lado2 == lado3) {
		cout << "Es Equilatero.";
	}
	else {
		if (lado1 != lado2 && lado2 != lado3 && lado1 != lado3) {
			cout << "Es Escaleno";
		}
		else{
			cout << "Es Isosceles.";
		}
		
	}

}

void EjercicioClase05() {

	// La ecuación cuadrática es: Ax2 + Bx + C

	int elemA, elemB, elemC;
	double discriminante = 0, raiz1 = 0, raiz2 = 0;

	cout << "Ingresa los elementos de la ecuacion cuadratica (A B C): ";
	cin >> elemA >> elemB >> elemC;

	//Discriminate = B2 -4AC
	discriminante = pow(elemB, 2) - (4 * elemA * elemC);
	//cout << sqrt(discriminante);

	//Ecuacion Cuadratica
	raiz1 = (-elemB + sqrt(discriminante)) / (2 * elemA);
	raiz2 = (-elemB - sqrt(discriminante)) / (2 * elemA);

	if (discriminante > 0) {

		cout << "\nRaiz 1 es: "<<raiz1<<endl;
		cout << "Raiz 2 es: "<<raiz2;	
	}
	else {
		cout << "Son Raices Complejas."; 
	}
	
}

void EjercicioClase06() {

	double edad = 0;
	char sexo;

	cout << "Ingresa tu Edad: ";
	cin >> edad;

	cout << "Ingresa tu Sexo(M / F): ";
	cin >> sexo;

	sexo = toupper(sexo);

	if (sexo =='F') {
		cout<<"Numero de Pulsaciones es: "<< (220 - edad) / 10;
	}
	else {
		cout << "Numero de Pulsaciones es: "<< (210 - edad) / 10;
	}

}

void EjercicioClase07() {

	int gol_local = 0, gol_visita = 0;

	cout << "Ingresa los goles del local y visitante: ";
	cin >> gol_local >> gol_visita;

	if (gol_local<0 || gol_visita < 0) {
		cout << "El valor dece ser mayor que 0.";
	} 
	else {
		if (gol_local>gol_visita) {
			cout << "Gano el equipo local.";
		}
		else {
			if (gol_visita>gol_local) {
				cout << "Gano el visitante.";
			}
			else {
				cout << "Empate.";
			}
		}
	}

}

void EjercicioClase08() {

	int tipo1 = 0, tipo2 = 0, tipo3 = 0;
	double propina = 0,costo_total = 0;

	cout << "Ingresa la cantidad de cada tipo(1 2 3) de caramelo: ";
	cin >> tipo1>>tipo2>>tipo3;	

	cout << "Ingresa la propina: ";
	cin >> propina;

	costo_total = tipo1 * 0.75 + tipo2 * 1.15 + tipo3 * 0.65;
	
	if (propina > costo_total) {
		cout << "\nMonto total de la compra es: " << costo_total;
	}
	else {
		cout << "\nMonto total de la compra es: " << costo_total<<endl;
		cout << "La propina no fue suficiente." << endl;
	}

}

void EjercicioClase10() {

	char  a = 1;
	
	int codigo = 0; 
	double nota1 = 0, nota2 = 0, nota3 = 0, promedio = 0;

	cout << "Ingresa el Codigo del Alumno: ";
	cin >> codigo;

	cout << "Ingresa las 3 notas(A B C):";
	cin >> nota1 >> nota2 >> nota3;

	promedio = 0.3*nota1 + 0.3*nota2 + 0.4*nota3;

	if (codigo < 0 || nota1<0 || nota2<0 || nota3<0 || nota1>20 || nota2>20 || nota3>20) {
		
		cout << "Ingresa un valor dentro del rango.";
	}
	else {
		if (promedio < 13) {
			
			cout << "El promedio del alumno " << codigo << " es: " << promedio<<endl;
			cout << "Estudie.";
		}
		else {
			if (promedio >= 13 && promedio < 15) {
				cout << "El promedio del alumno " << codigo << " es: " << promedio<<endl;
				cout << "Felicitaciones " << a;
			}
			else {
				if (promedio >= 15 && promedio < 20) {
					cout << "El promedio del alumno " << codigo << " es: " << promedio<<endl;
					cout << "Felicitaciones " << a<<a;		
				}
				else {
					cout << "El promedio del alumno " << codigo << " es: " << promedio<<endl;
					cout << "Felicitaciones " << a << a << a << a << a;
				}
			}
		}
	}

}

void EjercicioClase11() {

	double coord_x = 0, coord_y = 0;

	cout << "Ingresa las coordenas (x y): ";
	cin >> coord_x >> coord_y;

	if (coord_x == 0 || coord_y == 0) {
		cout << "No se encuentra en ningun Cuadrante.";
					
	}
	else {
		if (coord_x > 0 && coord_y > 0) {
			cout << "Se encuentra en el Primer Cuadrante.";
		}
		else {
			if (coord_x < 0 && coord_y > 0) {
				cout << "Se encuentra en el Segundo Cuadrante.";
			}
			else {
				if (coord_x < 0 && coord_y < 0) {
					cout << "Se encuentra en el Tercer Cuadrante.";
				}
				else {
					cout << "Se encuentra en el Cuarto Cuadrante.";
				}
			}
		}

	}
}

void EjercicioClase12() {

	int posicion = 0;

	cout << "Ingresa la posicion del equipo en la tabla: ";
	cin >> posicion;

	if (posicion >= 1 && posicion <= 4) {
		cout << "El equipo seleccionado ira al mundial!!!";
	}
	else {
		if (posicion == 5) {
			cout << "Iras al reprechaje!!!";
		}
		else {
			cout << "Comprate una TV LED para ver el mundial!!!";
		}
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
	//EjercicioClase03();
	//EjercicioClase04();
	//EjercicioClase05();
	//EjercicioClase06();
	//EjercicioClase07();
	//EjercicioClase08();
	EjercicioClase10();
	//EjercicioClase11();
	//EjercicioClase12();

	_getch();

}
