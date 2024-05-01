#include<iostream>
#include<conio.h>
#include<locale.h>

using namespace std;

void Ejercicio00() {
	int numero, i = 0;

	cout << "Ingresa un Número: ";
	cin >> numero;

	while (i <= numero){
		cout << i << " ";
		i++;
	}
}

bool esImpar(int numero) {
	
	return numero % 2 == 1;
}
void Ejercicio00_impares() {
	int i = 0, cImpares = 0;

	while (i <= 20){
		if(esImpar(i))cImpares++;
		
		i++;
	}
	cout << "La cantidad de números impares es: "<<cImpares;
}

void Ejercicio_Tabla_Mult() {
	int numero, i = 0;

	do {
		cout << "Ingrese un Número [1 - 12]:";
		cin >> numero;
	} while (!(numero >= 1 && numero <= 12));


	cout << "\n TABLA DE MULTIPLICAR DEL "<<numero <<"\n"<< endl;
	
	while (i <= 12){
		
		cout << numero<<" x "<< i <<" = "<< numero*i << endl;

		i++;
	}

}

void Ejercicio01() {
	char sexo, est_civil;
	int edad = 0, cantidad = 0, i = 0, cSoltero = 0, cCasado = 0, cSoltero30 = 0,
		cViudo = 0, cDivorciado = 0, cHombre = 0, cMujer = 0, cViuda16y21 = 0;

	do {
		cout << "Ingresa la cantidad de Censados: ";
		cin >> cantidad;
	} while (!(cantidad > 0));

	do {
		do {
			cout << "Ingresa el sexo (H | M): ";
			cin >> sexo;
			sexo = toupper(sexo);
		} while (!(sexo == 'H' || sexo == 'M'));

		switch (sexo) {
		case 'H': cHombre++;break;
		case 'M': cMujer++;break;
		}

		do {
			cout << "Ingresa la edad: ";
			cin >> edad;
		} while (!(edad > 0));

		do {
			cout << "Ingresa el estado civil (a: Soltero; b: Casado; c: Viudo; d: Divorciado): ";
			cin >> est_civil;
			est_civil = tolower(est_civil);
		} while (!(est_civil == 'a' || est_civil == 'b' || est_civil == 'c' || est_civil == 'd'));


		switch (est_civil) {
		case 'a':cSoltero++; break;
		case 'b':cCasado++; break;
		case 'c':cViudo++; break;
		case 'd':cDivorciado++; break;
		}

		if (sexo == 'M' && est_civil == 'c' && (edad >= 16 && edad <= 21))	cViuda16y21++;
		
		if (sexo == 'H' && est_civil == 'a' || est_civil == 'd' && edad > 30) cSoltero30++;

		i++;
	} while (i < cantidad);

	cout << "\n\t\t\REPORTE DEL CENSO"<<endl;
	cout << "\nNúmero de jovenes viudad entre 16 y 21 años inclusive: "<<cViuda16y21<<endl;
	cout << "Porcentaje de Hombres es:" <<(1.0*cHombre/cantidad)*100<<"%." << endl;
	cout << "Porcentaje de Mujeres es:" <<(1.0*cMujer/cantidad)*100<<"%." << endl;
	cout << "Número de hombres mayores de 30 soltero o divorciado: " << cSoltero30 << endl;

}

void MostrarBarra(int numero, char letter) {
	for (int i = 0; i < numero / 10; i++) {
		cout << letter;
	}
	cout << " (" << numero << ")";
}
void Ejercicio02() {
	int num_mujeres = 0, num_hombres = 0;
	char caracter;

	do {
		cout << "Ingrese la cantidad de Mujeres: ";
		cin >> num_mujeres;

	} while (!(num_mujeres > 0));

	do {
		cout << "Ingrese la cantidad de Hombres: ";
		cin >> num_hombres;
	} while (!(num_hombres > 0));

	cout << "Ingrese el carácter:";
	cin >> caracter;

	cout << "\t\t\nGráfico de Inscritos en la escuela (Mujeres vs Hombres)"<<endl;

	cout << "\nMujeres\t";
	MostrarBarra(num_mujeres, caracter);

	cout << "\nhombres\t";
	MostrarBarra(num_hombres, caracter);
	
	cout << endl;
	cout << "\nLeyenda: "<<caracter<< " significa 10 personas.";
}

void Ejercicio03() {
	double peso = 0, edad = 0, cantidad = 0, i = 1,
		cNinos = 0, cJoven = 0, cAdulto = 0, cAdMayor = 0,
		sNinos = 0, sJoven = 0, sAdulto = 0, sAdMayor = 0;

	do {
		cout << "Ingrese la cantidad de personas: ";
		cin >> cantidad;
	} while (!(cantidad > 0 && cantidad <= 50));

	do {
		do {
			cout << "\nIngrese el peso de la persona " << i<<": ";
			cin >> peso;
		} while (!(peso > 0));

		do {
			cout << "Ingrese la edad de la persona " << i<<": ";
			cin >> edad;
		} while (!(edad >= 0));


		if (edad >= 0 && edad <= 12) {
			cNinos++;
			sNinos += peso;
		}
		if (edad >= 13 && edad <= 29) {
			cJoven++;
			sJoven += peso;
		}
		if (edad >= 30 && edad <= 59) {
			cAdulto++;
			sAdulto += peso;
		}
		if(edad >= 60) {
			cAdMayor++;
			sAdMayor += peso;
		}

		i++;
	} while ((i - 1) < cantidad);

	cout << "\nEl promedio del peso por Categoría: "<<endl;
	cout << "\nNiños: "<< (sNinos/cNinos) <<"kg" << endl;
	cout << "Jovenes: "<< (sJoven/cJoven) << "kg" <<endl;
	cout << "Adultos: "<< (sAdulto/cAdulto) << "kg" <<endl;
	cout << "Adulto Mayor: "<< (sAdMayor/cAdMayor) << "kg" <<endl;

}

void MuestraBarra(int participants) {
	for (int i = 0; i < participants / 100; i++)
		cout << "*";

	cout << " ("<<participants<<")";
}
void Ejercicio04() {
	int cantidad = 0, mes = 0, anio = 0,participantes = 0, i = 0,
		c2021 = 0, c2022 = 0;

	do {
		cout << "Ingrese el número de meses a comparar: ";
		cin >> cantidad;
	} while (!(cantidad > 0));

	do {
		do {
			cout << "Ingrese el mes: ";
			cin >> mes;
		} while (!(cantidad > 0 && cantidad <= 12));

		do {
			cout << "Ingrese el Año: ";
			cin >> anio;
		} while (!(anio > 2000));

		do {
			cout << "Ingrese la cantidad de participantes: ";
			cin >> participantes;
		} while (!(participantes > 0));


		do {
			cout << "Ingrese el mes: ";
			cin >> mes;
		} while (!(cantidad > 0 && cantidad <= 12));

		do {
			cout << "Ingrese el Año: ";
			cin >> anio;
		} while (!(anio > 2000));

		do {
			cout << "Ingrese la cantidad de participantes: ";
			cin >> participantes;
		} while (!(participantes > 0));


		if (anio == 2021) {
			c2021 += participantes;
		}

		if (anio == 2022) {
			c2022 += participantes;
		}

		i++;
	} while (i<cantidad);
	

	cout << "\nResultado:"<<endl;
	cout << "\tGráfico de participantes del total de los 2 meses (2021 vs. 2022)"<<endl;
	cout << "\n";
	cout << "2021  ";
	MuestraBarra(c2021);
	cout << "\n";
	cout << "2022  ";
	MuestraBarra(c2022);



}


void main() {
	setlocale(LC_CTYPE, "spanish");


	//Ejercicio00();
	//Ejercicio00_impares();
	//Ejercicio_Tabla_Mult();
	//Ejercicio01();
	//Ejercicio02();
	//Ejercicio03();
	Ejercicio04();



	_getch();
}