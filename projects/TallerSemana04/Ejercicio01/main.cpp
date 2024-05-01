#include <iostream>
#include <conio.h>
#include<locale.h>

using namespace std;

int convertirATernario(int num) { //10
	int ternario = 0, exp = 0;
	while (num != 0)
	{
		ternario = ternario + pow(10, exp) * (num % 3);          //2   -   22   -  222 - 2222
		num = num / 3;                                           //80  -  26   -  8  -  2
		exp++;
	}
	return ternario;
}

void Ejercicio01Ternario() {
	int codigo, edad, ternCodigo, ternEdad, ternPeso;
	float peso;
	cout << "Ingrese el código ASCII de la primera letra de su apellido : ";
	cin >> codigo;
	cout << "Ingrese edad : ";
	cin >> edad;
	cout << "Ingrese peso : ";
	cin >> peso;

	ternCodigo = convertirATernario(codigo);
	ternEdad = convertirATernario(edad);
	ternPeso = convertirATernario(peso);

	cout << "Codigo: " << ternCodigo << endl;
	cout << "Edad: " << ternEdad << endl;
	cout << "Peso: " << ternPeso << endl;

	cout << "Los datos en ternario son: " << ternCodigo << " " << ternEdad << " " << ternPeso << endl;

}



void Ejercicio02Rescate() {

	int zona, hora, gradoEmer;

	cout << "Ingrese la ubicación (0-1) : ";
	cin >> zona;
	cout << "Ingrese la hora de la llamada (0 - 2359) : ";
	cin >> hora;

	if (zona == 0)
		gradoEmer = 1000;
	else if (zona == 1)
		gradoEmer = 2000;
	else
		cout << "Error en el tipo de ubicación";
	


	if (hora <= 600)
		gradoEmer += 500;
	else if (hora <= 1200)
		gradoEmer += 200;
	else if (hora <= 1800)
		gradoEmer += 300;
	else
		gradoEmer += 400;


	if (gradoEmer < 1500)
		cout << "POSIBLE RESCATE" << endl;
	else if (gradoEmer < 1800)
		cout << "RESCATE EN ALERTA AMARILLA" << endl;
	else if (gradoEmer < 2200)
		cout << "RESCATE EN ALERTA NARANJA" << endl;
	else
		cout << "RESCATE INMINENTE" << endl;
	
}



void mostrarTipoLinea(float salario, int personas) {

	char tipoLinea;

	if (personas == 1)
		if (salario <= 500)
			tipoLinea = 'P';            //P = Pre Pago
		else                            //O = Post Pagp
			tipoLinea = 'O';
	else if (personas <= 4) //2 3 4
		if (salario <= 750)
			tipoLinea = 'P';
		else
			tipoLinea = 'O';
	else if (personas > 4)
		if (salario <= 1000)
			tipoLinea = 'P';
		else
			tipoLinea = 'O';
	else
		cout << "Error en el numero de Personas";


	cout << "Tipo de línea: ";

	if (tipoLinea == 'P')
		cout << "Prepago";
	else
		cout << "Postpago";
}

void Ejercicio03() {
	int personasCargo;
	float salario;

	cout << "Ingrese el salario mensual: ";
	cin >> salario;
	cout << "Ingrese número de personas a cargo: ";
	cin >> personasCargo;
	mostrarTipoLinea(salario, personasCargo);
}



void Ejercicio04Menu() {

	char tipo, adicional;
	int dia;
	float precio;

	cout << "Tipo de menú(E: económico; J: ejecutivo; S: especial) :";
	cin >> tipo;
	cout << "Adicional(N : nada; H: helado; T: torta; A: ambos) : ";
	cin >> adicional;
	cout << "Día de la semana(un valor entre 1 y 7) : ";
	cin >> dia;


	switch (tipo)
	{
	case 'E': precio = 12.5; break;
	case 'J': precio = 15.8; break;
	case 'S': precio = 18.9; break;
	default: 
		cout << "Error en el Tipo." << endl; break;
	}

	switch (adicional)
	{
	case 'N': precio; break;
	case 'H': precio = precio + 5; break;
	case 'T': precio += 7; break;
	case 'A': precio += 10; break;
	default: 
		cout << "Error en el Tipo."<<endl;
	}

	if (dia == 1 || dia == 3)
		precio = precio * 0.89;
	cout << "El precio del menú es: " << precio << " soles " << endl;
}



void Ejercicio05_Switch_Anidado() {
	int escala, horas, remuneracion;
	cout << "Ingrese la escala : ";
	cin >> escala;
	cout << "Ingrese cantidad de horas trabajadas en la semana :";
	cin >> horas;

	switch (horas)
	{
	case 24:
		switch (escala)
		{
		case 8: remuneracion = 3109; break;
		case 7: remuneracion = 2861; break;
		case 6: remuneracion = 2612; break;
		case 5: remuneracion = 2239; break;
		case 4: remuneracion = 1865; break;
		case 3: remuneracion = 1617; break;
		case 2: remuneracion = 1430; break;
		case 1: remuneracion = 1243; break;
		}
		break;
	case 30:
		switch (escala)
		{
		case 8: remuneracion = 3887; break;
		case 7: remuneracion = 3576; break;
		case 6: remuneracion = 3265; break;
		case 5: remuneracion = 2798; break;
		case 4: remuneracion = 2332; break;
		case 3: remuneracion = 2021; break;
		case 2: remuneracion = 1788; break;
		case 1: remuneracion = 1554; break;
		}
		break;
	case 40:
		switch (escala)
		{
		case 8: remuneracion = 5183; break;
		case 7: remuneracion = 4768; break;
		case 6: remuneracion = 4353; break;
		case 5: remuneracion = 3731; break;
		case 4: remuneracion = 3109; break;
		case 3: remuneracion = 2695; break;
		case 2: remuneracion = 2384; break;
		case 1: remuneracion = 2073; break;
		}
		break;
	default: 
		cout << "Datos incorrectos."<<endl;
	}
	cout << "La remuneracion mensual es : " << remuneracion << endl;

}




int main() {
	setlocale(LC_CTYPE, "spanish");	

	//Ejercicio01Ternario();
	//Ejercicio02Rescate();
	//Ejercicio03();
	//Ejercicio04Menu();	
	Ejercicio05_Switch_Anidado();


	_getch();
	return 0;
}