#include<iostream>
#include<conio.h>
#include<locale.h>

using namespace std;

void Ejemplo() {
	float nota = 0;

	do
	{
		cout << "Ingresa nota 0-20:";
		cin >> nota;

	} while (!(nota>=0 && nota <= 20));

	cout << "Tu nota es: "<<nota;	
}

void Ejercicio01() {
	char modelo;
	int last_digit = 0, cost_mantenimiento = 0;

	cout << "Ingresa el Modelo (A B): ";
	cin >> modelo;
	modelo = toupper(modelo);
	
	cout << "Ingresa el último dígito de la placa: ";
	cin >> last_digit;

	cout << "Ingresa el costo del Mantenimiento: ";
	cin >> cost_mantenimiento;

	switch (modelo)	{

	case 'A': {
		if (last_digit >= 0 && last_digit <= 5) {
			if (cost_mantenimiento <= 500) {
				cout << "\nEl mes de revisión técnica es: ENERO"<<endl;	
			}
			else{
				cout << "\nEl mes de revisión técnica es: FEBRERO" << endl;
			}
		}
		else if (last_digit >= 6 && last_digit <= 8) {
			if (cost_mantenimiento <= 700) {
				cout << "\nEl mes de revisión técnica es: JUNIO" << endl;
			}
			else {
				cout << "\nEl mes de revisión técnica es: JULIO" << endl;
			}
		
		}
		else {
			if (last_digit == 9) {
				if (cost_mantenimiento <= 1000) {
					cout << "\nEl mes de revisión técnica es: OCTUBRE" << endl;
				}
				else {
					cout << "\nEl mes de revisión técnica es: NOVIEMBRE" << endl;
				}
			}
		}

	};break;

	case 'B': {

		if (last_digit >= 1 && last_digit <= 3) {
			if (cost_mantenimiento <= 500) {
				cout << "\nEl mes de revisión técnica es: MARZO" << endl;
			}
			else {
				cout << "\nEl mes de revisión técnica es: ABRIL" << endl;
			}
		}
		else if (last_digit >= 4 && last_digit <= 8) {
			if (cost_mantenimiento <= 700) {
				cout << "\nEl mes de revisión técnica es: MAYO" << endl;
			}
			else {
				cout << "\nEl mes de revisión técnica es: SEPTIEMBRE" << endl;
			}

		}
		else {
			if (last_digit == 9 || last_digit == 0) {
				if (cost_mantenimiento <= 1000) {
					cout << "\nEl mes de revisión técnica es: AGOSTO" << endl;
				}
				else {
					cout << "\nEl mes de revisión técnica es: DICIEMBRE" << endl;
				}
			}
		}

	};break;

	default:
		cout << "Ingresa un valor correcto.";
		break;
	}

}


bool esBisiesto(int anio) {
	return (anio % 4 == 0);
}

int diasEnMes(int mes, int anio) {
	if (mes < 1 || mes > 12) {
		return -1;

	}

	switch (mes) {
	case 2:
		return esBisiesto(anio) ? 29 : 28;

	case 4:	case 6:	case 9: case 11:
		return 30;

	default:
		return 31;
	}
}

void Ejercicio02() {
	int anio, mes;

	cout << "Ingrese el año: ";
	cin >> anio;
	cout << "Ingrese el mes (1-12): ";
	cin >> mes;

	int numDias = diasEnMes(mes, anio);

	if (numDias == -1) {
		cout << "Mes ingresado no válido." << endl;
	}
	else {
		cout << "\El mes " << mes << " del año " << anio << " tiene " << numDias << " días." << endl;
	}
}


void Ejercicio03() {

	double consumoKw = 0, precioTotal = 0, tipo = 0;

	cout << "Ingrese el tipo comercial (1) o doméstico (2):" << endl;
	cin >> tipo;	
	
	cout << "Ingrese el comsumo de luz(kw):";
	cin >> consumoKw;

	if (tipo == 1) {
		precioTotal = consumoKw * 1.58;
	}
	else {
		if (tipo == 2) {
			if (consumoKw <= 100) {
				precioTotal = consumoKw * 0.35;
			}
			else if (consumoKw > 100 && consumoKw <= 500) {
				precioTotal = consumoKw * 1.05;
			}
			else {
				precioTotal = consumoKw * 1.36;
			}
		}
	}

	cout << "\nEl monto a pagar por consumo de luz es: " << precioTotal;

}


void Ejercicio04() {

	char tipo_producto, tipo_celular;
	double precio = 0;
	int cantidad = 0;

	cout << "\t\tIngrese el Tipo de Programa: "<<endl<<
		"\n'O': Oficina"<<endl<<
		"'J': Juego" << endl<<
		"'U': Utilitarios" << endl;
	cin >> tipo_producto;
	tipo_producto = toupper(tipo_producto);

	switch (tipo_producto) {
	case 'O':
		cout << "\t\tElige el tipo de Celular: " << endl <<
			"\n'I': Iphone" << endl <<
			"'A': Android" << endl;
		cin >> tipo_celular;
		tipo_celular = toupper(tipo_celular);

		switch (tipo_celular) {
		case 'I': precio = 50.60;break;
		case 'A': precio = 20.30;break;
		}
		;break;

	case 'J':
		cout << "\t\tElige el tipo de Celular: " << endl <<
			"\n'I': Iphone" << endl <<
			"'A': Android" << endl;
		cin >> tipo_celular;
		tipo_celular = toupper(tipo_celular);

		switch (tipo_celular) {
		case 'I': precio = 90.80;break;
		case 'A': precio = 40.50;break;
		}
		;break;

	case 'U':
		cout << "\t\tElige el tipo de Celular: " << endl <<
			"\n'I': Iphone" << endl <<
			"'A': Android" << endl;
		cin >> tipo_celular;
		tipo_celular = toupper(tipo_celular);

		switch (tipo_celular) {
		case 'I': precio = 60.50;break;
		case 'A': precio = 30.60;break;
		}
		;break;

	default:
		cout << "Ingresa un carácter correcto" << endl;
		break;
	}

	

	cout << "\t\t\nIngrese la cantidad: " << endl;
	cin >> cantidad;

	cout << "\nEl precio total es: " << cantidad * precio << " soles.";

}


void Ejercicio05() {

	char cobertura, bebeAlcohol, usaLentes, sufreEnfermedad;
	int edad;
	double alcoholFee = 0, lentesFee = 0, enfermedadFee = 0;

	cout << "Cobertura amplia(A) o daños a terceros(B): ";
	cin >> cobertura;
	cobertura = toupper(cobertura);
	cout << "Tiene por hábito beber alcohol(S: sí; N: no): ";
	cin >> bebeAlcohol;
	bebeAlcohol = toupper(bebeAlcohol);
	cout << "Usa lentes(S: sí; N: no): ";
	cin >> usaLentes;
	usaLentes = toupper(usaLentes);
	cout << "Padece alguna enfermedad(S: sí; N: no): ";
	cin >> sufreEnfermedad;
	sufreEnfermedad = toupper(sufreEnfermedad);
	cout << "Edad: ";
	cin >> edad;

	 
	switch (cobertura){
	case 'A': {
		if (bebeAlcohol == 'S') {
			alcoholFee = 1200 * 0.10;
		}
		else if (bebeAlcohol == 'N') {
			alcoholFee = 0;
		}

		if (usaLentes == 'S') {
			lentesFee = 1200 * 0.05;
		}
		else if (usaLentes == 'N') {
			lentesFee = 0;
		}

		if (sufreEnfermedad == 'S') {
			enfermedadFee = 1200 * 0.05;
		}
		else if (sufreEnfermedad == 'N') {
			enfermedadFee = 0;
		}
	};break;

	case 'B':{
		if (bebeAlcohol == 'S') {
			alcoholFee = 950 * 0.10;
		}
		else if (bebeAlcohol == 'N') {
			alcoholFee = 0;
		}

		if (usaLentes == 'S') {
			lentesFee = 950 * 0.05;
		}
		else if (usaLentes == 'N') {
			lentesFee = 0;
		}

		if (sufreEnfermedad == 'S') {
			enfermedadFee = 950 * 0.05;
		}
		else if (sufreEnfermedad == 'N') {
			enfermedadFee = 0;
		}
	};break;

	default:
		cout << "Ingresa valores correctos.";break;
	}


	if (cobertura == 'A' && edad > 40) {
		cout << "\nPrecio de la Póliza es: " << 1200 + alcoholFee + lentesFee +enfermedadFee + (1200*0.2);	
	}
	else if (cobertura == 'A' && edad <= 40) {
		cout << "\nPrecio de la Póliza es: " << 1200 + alcoholFee + lentesFee + enfermedadFee + (1200 * 0.1);
	}
	
	if (cobertura == 'B' && edad > 40) {
		cout << "\nPrecio de la Póliza es: " << 950 + alcoholFee + lentesFee + enfermedadFee + (950 * 0.2);
	}
	else if (cobertura == 'B' && edad <= 40) {
		cout << "\nPrecio de la Póliza es: " << 950 + alcoholFee + lentesFee + enfermedadFee + (950 * 0.1);
	}

	

}


void Ejercicio06() {
	char zona, tipoPago, banco;
	int precio = 0;

	cout << "Elegir Zona elegida (V: vip; P: platea; O: popular): ";
	cin >> zona;
	cout << "Elegir Tipo de pago (C: contado; T: tarjeta): ";
	cin >> tipoPago;


	switch (zona){
	case 'V':
		switch (tipoPago){
		case 'C':
			precio = 1500; break;
		case 'T':
			cout << "Elegir Tarjeta de banco (C: crédito; N: continental; O: otros): ";
			cin >> banco;
			switch (banco){
			case 'C':precio = 2000;break;
			case 'D':precio = 1900;break;
			case 'O':precio = 2100;break;

			default:
				cout<<"Ingresa valores requeridos.";
				break;
			}
			;break;
		default:
			cout << "Ingresa valores requeridos.";
			break;
		}
		;break;

	case 'P':
		switch (tipoPago) {
		case 'C':
			precio = 750; break;
		case 'T':
			cout << "Elegir Tarjeta de banco (C: crédito; N: continental; O: otros): ";
			cin >> banco;
			switch (banco) {
			case 'C':precio = 950;break;
			case 'D':precio = 875;break;
			case 'O':precio = 1020;break;

			default:
				cout << "Ingresa valores requeridos.";
				break;
			}
			;break;
		default:
			cout << "Ingresa valores requeridos.";
			break;
		}
		;break;

	case 'O':
		switch (tipoPago) {
		case 'C':
			precio = 265; break;
		case 'T':
			cout << "Elegir Tarjeta de banco (C: crédito; N: continental; O: otros): ";
			cin >> banco;	
			switch (banco) {
			case 'C':precio = 320;break;
			case 'D':precio = 300;break;
			case 'O':precio = 335;break;

			default:
				cout << "Ingresa valores requeridos.";
				break;
			}
			;break;
		default:
			cout << "Ingresa valores requeridos.";
			break;
		}
		;break;

	default:
		cout << "Ingresa valores rEEEequeridos.";
		break;
	}

	cout << "El precio de la entrada es: "<<precio;	
	
}


void Ejercicio07() {

	char tipoProducto;
	float cantidad = 0, precio = 0;

	cout << "Ingresa el tipo de Producto a comprar: "<<endl<<
		"[P] Papa"<<endl<<
		"[C] Cebolla"<<endl<<
		"[L] Limón"<<endl<<
		"[A] Ají"<<endl<<
		"[M] Maiz"<<endl;
	cin >> tipoProducto;
	tipoProducto = toupper(tipoProducto);

	switch (tipoProducto) {
	case 'P': precio = 20.5; break;
	case 'C': precio = 19.4; break;
	case 'L': precio = 32.3; break;
	case 'A': precio = 16.5; break;
	case 'M': precio = 19.8; break;
	default:
		cout << "Ingrese un valor correcto.";
		break;
	}

	cout << "Ingrese la cantidad a comprar: ";
	cin >> cantidad;

	cout << "\nEl total de su compra es: " << cantidad * precio;
}


void Ejercicio08() {

	int codigo_empleado = 0;
	char char_unidad, char_decena, char_centena;

	cout << "Ingresa el código se empleado(3 Dígitos): ";
	cin >> codigo_empleado;

	if (codigo_empleado < 100 || codigo_empleado > 999) {
		cout << "Código Incorrecto";
	}

	int unidad = codigo_empleado % 10;
	int resto = codigo_empleado / 10;
	int decena = resto % 10;
	int centena = resto / 10;

	if (unidad >= 1 && unidad <= 3) {
		char_unidad = 'X';
	}
	else if (unidad >= 4 && unidad <= 6) {
		char_unidad = 'Y';
	}
	else if (unidad >= 7 && unidad <= 9) {
		char_unidad = 'Z';
	}
	else {
		char_unidad = '#';
	}


	if (decena >= 1 && decena <= 3) {
		char_decena = 'T';	
	}
	else if (decena >= 4 && decena <= 6) {
		char_decena = 'W';
	}
	else if (decena >= 7 && decena <= 9) {
		char_decena = 'P';
	}
	else {
		char_decena = '&';
	}


	if (centena >= 1 && centena <= 3) {
		char_centena = 'Q';
	}
	else if (centena >= 4 && centena <= 6) {
		char_centena = 'W';	
	}
	else if (centena >= 7 && centena <= 9) {
		char_centena = 'M';	
	}
	else {
		char_centena = '@';	
	}

	cout << "\nEl código cifrado es: "<< char_centena<< char_decena << char_unidad;

}


float calcularPrecio(char marca, char sistema) {
	float precio;
	switch (marca)
	{
	case 'M':
		if (sistema == 'F') precio = 895.9;
		else precio = 1250;
		break;
	case 'L':
		if (sistema == 'F') precio = 975;
		else precio = 1650;
		break;
	case 'C':
		if (sistema == 'F') precio = 937.7;
		else precio = 1379;
		break;
	}
	return precio;
}

void taller01() {
	char marca, sistema;
	cout << "Marca(M: Mabe; L: LG; C: Coldex) :";
	cin >> marca;
	marca = toupper(marca);
	cout << "Sistema de enfriamiento(F : Auto Frost; N: No Frost) : ";
	cin >> sistema;
	sistema = toupper(sistema);
	cout << "El precio es: " << calcularPrecio(marca, sistema);
	getch();
}


float calcularPrecio(char categoria, char zona, char tipo, int area) {
	float precio;
	if (categoria == 'C')
		if (zona == 'A')
			switch (tipo)
			{
			case 'T': precio = 2200; break;
			case 'C': precio = 2500; break;
			case 'D': precio = 2100; break;
			}
		else
			switch (tipo)
			{
			case 'T': precio = 1300; break;
			case 'C': precio = 1500; break;
			case 'D': precio = 1200; break;
			}
	else
		switch (zona)
		{
		case 'A':
			switch (tipo)
			{
			case 'T': precio = 2100; break;
			case 'C': precio = 2500; break;
			case 'D': precio = 2100; break;
			}
			break;
		case 'B':
			switch (tipo)
			{
			case 'T': precio = 1500; break;
			case 'C': precio = 1600; break;
			case 'D': precio = 1300; break;
			}
			break;
		case 'C':
			switch (tipo)
			{
			case 'T': precio = 1100; break;
			case 'C': precio = 1300; break;
			case 'D': precio = 1000; break;
			}
			break;
		}
	return precio * area;
}

void taller02() {
	char categoria, zona, tipo;
	int area;

	cout << "Ingresa la categoría(C: comercial; R: residencial) : ";
	cin >> categoria;
	categoria = toupper(categoria);
	cout << "Ingresa la zona(A, B o C) : ";
	cin >> zona;
	zona = toupper(zona);
	cout << "Ingresa el tipo(T : terreno; C: casa; D: departamento) : ";
	cin >> tipo;
	tipo = toupper(tipo);
	cout << "Ingrese el área : ";
	cin >> area;
	cout << "El monto a cancelar es de $: " << calcularPrecio(categoria, zona, tipo, area);
	getch();
}


int main() {
	setlocale(LC_CTYPE, "spanish");

	//Ejemplo();
	//Ejercicio01();
	//Ejercicio02();	
	//Ejercicio03();
	// Ejercicio04();
	//Ejercicio05();
	//Ejercicio06();
	//Ejercicio07();
	Ejercicio08();
	//taller01();
	//taller02();


	_getch();
	return 0;
}
