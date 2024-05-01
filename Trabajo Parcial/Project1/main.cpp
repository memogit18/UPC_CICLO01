#include<iostream>
#include<conio.h>
#include<string>
#include<locale.h>
#include<cstdlib>

using namespace std;

void ingresarDNI() {

	int dni = 0, sede = 0;

	bool ingreso = false;

	cout << "\t\tRESERVA TU CITA OFTALMOLÓGICA - ONLINE" << endl <<	
		"\nIngresa tu tipo de Documento de Identidad: " << endl;	
	cin >> dni;	

	do
	{
		system("cls");
		if (dni > 9999999 && dni < 100000000) {
			ingreso = true;
			cout<<"Ingreso";

		}
		else {
			cout << "\nIngresa un DNI válido. Debe tener 8 dígitos." << endl;
			_getch();
		}

	} while (ingreso == false);
		
}


void elegirSede() {
	
	int sede = 0;

	cout << "\nIndique en que sede desea atenderse:" << endl <<
		"1. San Isidro" << endl <<
		"2. Los Olivos" << endl <<
		"3. San Juan de Miraflores" << endl <<
		"4. El Polo" << endl;
	cin >> sede;

	switch (sede){
	case 1: 
		cout << "\t\nSede de San Isidro" << endl;break;
		

	default:
		break;
	}
}


void main() {
	setlocale(LC_CTYPE, "spanish");


	ingresarDNI();







	_getch();
}
