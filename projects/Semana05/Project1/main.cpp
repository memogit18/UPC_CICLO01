#include<iostream>
#include<conio.h>
#include<locale.h>

using namespace std;

#define Pi 3.1415      //Asi declaramos constantes(Sin ;).


void Ejercicio01_switch() {

	int horas = 0, pago = 0;
	char categoria;

	cout << "Ingresa las horas laboradas: ";
	cin >> horas;

	cout << "Ingresa la Categoria: ";
	cin >> categoria;

	categoria = toupper(categoria);

	switch (categoria)
	{
		case 'A': pago = horas * 30; break;
		case 'B': pago = horas * 35; break;
		case 'C': pago = horas * 40; break;
		case 'D': pago = horas * 45; break;
		case 'E': pago = horas * 50; break;

		default:
			break;
	}

	cout << "Monto a pagar: "<<pago;

}

void Ejercicio02() {

	char escala_pago;
	int num_cursos = 0;

	cout << "Ingresa la escala de pago: ";
	cin >> escala_pago;

	cout << "Ingresa el número de cursos: ";
	cin >> num_cursos;	

	escala_pago = toupper(escala_pago);

	switch (escala_pago)
	{
		case 'A': 
			if (num_cursos >= 1 && num_cursos <= 5) {
				cout << "El importe a cancelar es de: "<< (350 + 400);
			}
			else
			{
				if (num_cursos >= 6 && num_cursos <= 8) {
					cout << "El importe a cancelar es de: " << (350 + 600);
				}
				else
				{
					cout << "El importe a cancelar es de: " << (350 + 900);
				}
			}
			break;

		case 'B':
			if (num_cursos >= 1 && num_cursos <= 3) {
				cout << "El importe a cancelar es de: " << (350 + 350);
			}
			else
			{
				if (num_cursos >= 4 && num_cursos <= 7) {
					cout << "El importe a cancelar es de: " << (350 + 500);
				}
				else
				{
					cout << "El importe a cancelar es de: " << (350 + 700);
				}
			}
			break;

		case 'C':
			if (num_cursos >= 1 && num_cursos <= 3) {
				cout << "El importe a cancelar es de: " << (350 + 320);
			}
			else
			{
				if (num_cursos >= 4 && num_cursos <= 7) {
					cout << "El importe a cancelar es de: " << (350 + 480);
				}
				else
				{
					cout << "El importe a cancelar es de: " << (350 + 685);
				}
			}
			break;

		case 'D':
			if (num_cursos >= 1 && num_cursos <= 4) {
				cout << "El importe a cancelar es de: " << (350 + 310);
			}
			else
			{
				if (num_cursos >= 5 && num_cursos <= 8) {
					cout << "El importe a cancelar es de: " << (350 + 475);
				}
				else
				{
					cout << "El importe a cancelar es de: " << (350 + 680);
				}
			}
			break;
		
		default:
			break;
	}


}

void Ejercicio03() {

	int opciones = 0;

	cout << "Elige una opción: " << endl<< 
		"1. - Área de un Triangulo" << endl <<
		"2. - Área de un Rectángulo" << endl <<
		"3. - Área de un Circulo" << endl <<
		"4. - Área de un Cuadrado" << endl <<
		"5. - Salir" << endl;
	cin >> opciones;


	switch (opciones)
	{
	case 1: {
		double base = 0, altura = 0, area_triangulo = 0;

		cout << "Área de un Triángulo" << endl << "Ingresa la Base y Altura(B H) del Triángulo: ";
		cin >> base >> altura;
		area_triangulo = (base * altura) / 2;
		cout << "El Área del triángulo es: "<<area_triangulo;
		break;
	}
	case 2: {
		double base = 0, altura = 0, area_rectangulo = 0;

		cout << "Área de un Rectángulo" << endl << "Ingresa la Base y Altura(B H) del Triángulo: ";
		cin >> base >> altura;	
		area_rectangulo = base * altura;
		cout << "El Área del Rectángulo es: " << area_rectangulo;
		break;
	}
	case 3: {
		double radio = 0, area_circulo = 0;

		cout << "Área de un Círculo" << endl << "Ingresa el radio del Círculo: ";
		cin >> radio;	
		area_circulo = 3.14 * pow(radio,2);
		cout << "El Área del Círculo es: " << area_circulo;
		break;
	}
	case 4: {
		double lado = 0, area_cuadrado = 0;

		cout << "Área de un Cuadrado" << endl << "Ingresa el lado del cuadrado: ";
		cin >> lado;	
		area_cuadrado = lado * lado;	
		cout << "El Área del Cuadrado es: " << area_cuadrado;
		break;
	}

	default:
		cout << "Bye....";
		break;
	}

}


int Ejercicio03_MostrarMenuPrincipal() {

	int opciones = 0;

	cout <<"1. - Área de un Triangulo" << endl <<
		"2. - Área de un Rectángulo" << endl <<
		"3. - Área de un Circulo" << endl <<
		"4. - Área de un Cuadrado" << endl <<
		"5. - Salir" << endl<<
		"Elige una opción: ";
	cin >> opciones;

	return opciones;
}

void CalcularAreaTriangulo() {
	double base = 0, altura = 0, area_triangulo = 0;

	cout << "\nÁrea de un Triángulo" << endl << "Ingresa la Base y Altura(B H) del Triángulo: ";
	cin >> base >> altura;
	area_triangulo = (base * altura) / 2;
	cout << "\nEl Área del triángulo es: " << area_triangulo<<endl;
}

void CalcularAreaRectangulo() {
	double lado1 = 0, lado2 = 0, area_rectangulo = 0;

	cout << "\nÁrea de un Rectángulo" << endl << "Ingresa el lado 1 y lado 2(A B) del Triángulo: ";
	cin >> lado1 >> lado2;
	area_rectangulo = lado1 * lado2;
	cout << "\nEl Área del Rectángulo es: " << area_rectangulo;
}

void CalcularAreaCirculo() {
	double radio = 0, area_circulo = 0;

	cout << "\nÁrea de un Círculo" << endl << "Ingresa el radio del Círculo: ";
	cin >> radio;
	area_circulo = Pi * pow(radio, 2);
	cout << "\nEl Área del Círculo es: " << area_circulo;

}

void CalcularAreaCuadrado() {

	double lado = 0, area_cuadrado = 0;

	cout << "\nÁrea de un Cuadrado" << endl << "Ingresa el lado del cuadrado: ";
	cin >> lado;
	area_cuadrado = lado * lado;
	cout << "\nEl Área del Cuadrado es: " << area_cuadrado;

}

void Ejercicio03_ProfesorSolucion() {

	int opcionseleccionada = Ejercicio03_MostrarMenuPrincipal();	

	switch (opcionseleccionada)
	{
	case 1: CalcularAreaTriangulo(); break;
	case 2: CalcularAreaRectangulo(); break;
	case 3: CalcularAreaCirculo(); break;
	case 4: CalcularAreaCuadrado();	break;
	default:
		cout << "Bye...."; break;
	}

}


void Ejercicio04() {

	int num = 0, V = 0;

	cout << "Ingresa las variables num y V: ";
	cin >> num >> V;

	switch (num) {
		case 1: V = 100 * V; break;
		case 2:	V = pow(100, V); break;
		case 3: V = 100 / V; break;
	
	default:
		V = 0; break;
	}

	cout << "El resultado es: "<<V;	

}

void Ejercicio05() {

	int codigo = 0, precio_dscto = 0, precio = 0;

	cout << "Ingrese el código: ";
	cin >> codigo;

	cout << "Ingrese el precio: ";
	cin >> precio;	

	codigo /= 100000;

	switch (codigo) {
		case 4:case 9: precio_dscto = precio - (precio * 0.045); break;
		case 1:case 5: precio_dscto = precio - (precio * 0.08); break;
		case 2:case 6: precio_dscto = precio - (precio * 0.035); break;
		case 8: precio_dscto = precio - (precio * 0.0425); break;
		case 3:case 7: precio_dscto = precio - (precio * 0.11); break;
	
		default:
			precio_dscto = precio;
			break;
	}
	cout << "Precio Normal: "<<precio<<endl;	
	cout << "Precio con Descuento es: "<<precio_dscto;



}

void Ejercicio06_estacionamiento() {

	int horas = 0,pago = 0;

	cout << "Ingresa las horas que uso el estacionamiento: ";
	cin >> horas;

	if (horas >= 1 && horas <= 2) {
		pago = 5 * horas;
	}
	else {
		if (horas >= 3 && horas <= 5) {
			pago = 10 + (4 * (horas -2));	
		}
		else {
			if (horas >= 6 && horas <= 10) {
				pago = 10 + 12 + (3 * (horas - 5));
			}
			else {
				pago = 10 + 12 + 15 + (2 * (horas - 10));
			}
		}
	}

	cout << "El monto a pagar es: "<<pago;	

}

void Ejercicio07() {

	char fabricante, programa, dispositivo;
	int precio = 0;

	cout << "\nElige un Fabricante: "<<endl<<
		"M: Microsoft"<<endl<<"A: Apple"<<endl<<"L: Linux"<<endl;
	cin >> fabricante;
	fabricante = toupper(fabricante);	

	switch (fabricante)	{

	case 'M': {
		cout << "\nELige el tipo de Programa: "<<endl<<
			"S: Sistema operativo"<<endl<<"L: Lenguaje de programación"<<endl;
		cin >> programa;
		programa = toupper(programa);

		switch (programa){
		case 'S': 
			precio = 1500; break;
		case 'L': {

			cout << "\nSelecciona el Dispositivo:"<<endl<<
			"C: Celular" << endl << "T: Tabla" << endl << "O: Otros" << endl;
			cin >> dispositivo;
			dispositivo = toupper(dispositivo);

			switch (dispositivo){
			case'C': precio = 1800;break;
			case'T': precio = 1200;break;
			case'O': precio = 900;break;
			}
		}

		};break;

		}

	case 'A': {
		cout << "\nELige el tipo de Programa: " << endl <<
			"S: Sistema operativo" << endl << "L: Lenguaje de programación" << endl;
		cin >> programa;
		programa = toupper(programa);

		switch (programa) {
		case 'S':
			precio = 2500; break;
		case 'L': {

			cout << "Selecciona el Dispositivo:" << endl <<
				"C: Celular" << endl << "T: Tabla" << endl << "O: Otros" << endl;
			cin >> dispositivo;
			dispositivo = toupper(dispositivo);

			switch (dispositivo) {
			case'C': precio = 1900;break;
			case'T': precio = 1800;break;
			case'O': precio = 1600;break;
			}
		}

		};break;

	}

	case 'L': {
		cout << "\nELige el tipo de Programa: " << endl <<
			"S: Sistema operativo" << endl << "L: Lenguaje de programación" << endl;
		cin >> programa;
		programa = toupper(programa);

		switch (programa) {
		case 'S':
			precio = 1000; break;
		case 'L': {

			cout << "\nSelecciona el Dispositivo:" << endl <<
				"C: Celular" << endl << "T: Tabla" << endl << "O: Otros" << endl;
			cin >> dispositivo;
			dispositivo = toupper(dispositivo);

			switch (dispositivo) {
			case'C': precio = 100;break;
			case'T': precio = 150;break;
			case'O': precio = 50;break;
			}
		}

		};break;

	}

	default:
		cout << "Ingresa los valores Correctos..."<<endl;	
		break;
	}

	cout << "\nPrecio Total es: "<<precio;	
}


int main() {
	setlocale(LC_CTYPE, "spanish");

	//Ejercicio01_switch();
	//Ejercicio02();
	//Ejercicio03();
	//Ejercicio03_ProfesorSolucion();
	//Ejercicio04();
	//Ejercicio05();
	//Ejercicio06_estacionamiento();
	Ejercicio07();
		

	_getch();
	return 0;
}