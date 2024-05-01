#include<iostream>
#include<conio.h>
#include<locale.h>
#include<math.h>
#include<cstdlib>  //para generar  numeros aleatorios
#include<time.h>

using namespace std;

void youtube01() {

	int num, suma = 0;

	cout << "Ingresa un numero (0 para salir): ";
	cin >> num;

	while (num != 0){

		suma += num;
		cout << "Ingresa un numero (0 para salir): ";
		cin >> num;
	}
	
	cout << "La suma es: "<<suma;		

}

void youtube02() {

	int opcion,hacer;	

	do{
		cout << "Menú de opciones:"<<endl<<
			"1 Estudiar"<<endl<<
			"2 Trabajar"<<endl<<
			"3 Salir"<<endl;
		cin >> opcion;

		cout << "Elegiste la opción: " << opcion<<endl;

	} while (opcion != 3);

	cout << "Elegiste Salir...";
}

void youtube04() {
	int i = 0;

	do
	{
		cout << i << endl;
		i++;

	} while (i<15);

}

void youtube05() {
	int num = 0;

	cout << "\t\tNO PRESIONES EL -- 1--"<<endl;

	do {
		cout << "Ingresa un entero: ";
		cin >> num;

		if (num != 1) {
			cout << "\nEl entero " << num << " es diferente a 1" << endl;
		}
		else {
			cout << "\nEl entero " << num << " es igual a 1" << endl;
		}

	} while (num != 1);

	cout << "\nPerdiste....";
}

void sum(double a) {
	cout<<pow(2,a);
}


void Ejercicio01() {
	/*
	-# de clientes
	-monto de compra x cada cliente
	-color de bolita seleccionada al azahar
	-monto final que cada cliente pagará
*/
	double monto_compra, total_recaudado = 0.0;
	char continuar;
	int clientes_compraron = 0;

	cout << "\t\t----REGISTRO COMPRAS----:" << endl;

	do {
		cout << "\nIngrese el monto de la compra: $";
		cin >> monto_compra;

		// Generar un número aleatorio entre 0 y 2 para representar los colores de las bolitas
		srand(time(NULL));
		int color_bolita = 0 + rand() % (3);

		double descuento;
		if (color_bolita == 0) {
			cout << "Color de bolita: Roja" << endl;
			descuento = 0.40;
			cout << "Tu descuento es: " << monto_compra * descuento << endl;
		}
		else if (color_bolita == 1) {
			cout << "Color de bolita: Amarilla" << endl;
			descuento = 0.25;
			cout << "Tu descuento es: " << monto_compra * descuento << endl;
		}
		else if (color_bolita == 2) {
			cout << "Color de bolita: Blanca" << endl;
			descuento = 0.0;
			cout << "Tu descuento es: " << monto_compra * descuento << endl;
		}

		double monto_descuento = monto_compra * descuento;
		double monto_pagar = monto_compra - monto_descuento;

		cout << "Monto a pagar: $" << monto_pagar << endl;

		total_recaudado += monto_pagar;
		clientes_compraron++;

		cout << "\n¿Desea continuar (s/n)?: ";
		cin >> continuar;
		continuar = toupper(continuar);

	} while (continuar == 'S');

	cout << "\nCantidad de clientes que compraron: " << clientes_compraron << endl;
	cout << "Total recaudado por la tienda: $" << total_recaudado << endl;

}

void Ejercicio02_Invertir_Numero() {

	int numero, numero_invertido = 0;	

	cout << "Ingrese un numero entero positivo: ";	
	cin >> numero;	

	// Invertir los dígitos del número
	do {
		int digito = numero % 10;								//465
		numero_invertido = numero_invertido * 10 + digito;		//0*10 + 5  =  5
		numero = numero / 10;									//5*10 + 6  = 56
	} while (numero > 0);															//56*10 + 4 = 564

	cout << "El numero invertido es: " << numero_invertido << endl;	
}

void Ejercicio03_pizza()
{
	int codigo, pizza, tiempo, monto = 0, cPedidosGratis = 0, cPizza1 = 0, cPizza2 = 0, cPizza3 = 0,
		sumaMCobrados = 0, sumaDCobrados = 0, cMCobrados = 0, cDCobrados = 0;
	char pedido;

	cout << "\t\tINGRESA TU PEDIDO - PIZZA"<<endl;	

	do {
		do {
			cout << "\nIngresar codigo de pedido(xxxx): ";
			cin >> codigo;
		} while (!((codigo >= 1000 && codigo <= 9999) || codigo == 0));

		if (codigo != 0)
		{
			do {
				cout << "Ingresar tipo de pizza (1: Big; 2: familiar; 3: Súperfam): ";
				cin >> pizza;
			} while (!(pizza >= 1 && pizza <= 3));

			do {
				cout << "Ingresar tipo de pedido (D: Delivery; M: Mostrador): ";
				cin >> pedido;
				pedido = toupper(pedido);
			} while (!(pedido == 'M' || pedido == 'D'));

			do {
				cout << "Ingresar tiempo de entrega en minutos: ";
				cin >> tiempo;
			} while (!(tiempo > 0));



			//Reporte 1 (Importe del ultimo mes)
			switch (pizza)
			{
			case 1:cPizza1++;
				if ((tiempo <= 20 && pedido == 'M') || (tiempo <= 30 && pedido == 'D'))monto = monto + 50;
				else monto = monto + 0; cout << "Importe a pagar: " << monto;break;
			case 2:cPizza2++;
				if ((tiempo <= 20 && pedido == 'M') || (tiempo <= 30 && pedido == 'D'))monto = monto + 60;
				else monto = monto + 0; cout << "Importe a pagar: " << monto; break;
			case 3:cPizza3++;
				if ((tiempo <= 20 && pedido == 'M') || (tiempo <= 30 && pedido == 'D'))monto = monto + 68;
				else monto = monto + 0;cout << "Importe a pagar: " << monto;
			}
			//Reporte 2 (Cantidad de pedidos que se entregaron gratis)
			if ((pedido == 'D' && tiempo > 30) || (pedido == 'M' && tiempo > 20))cPedidosGratis++;
			//Reporte 4
			if (pedido == 'M' && tiempo <= 20)
			{
				sumaMCobrados = sumaMCobrados + tiempo;
				cMCobrados++;
			}
			if (pedido == 'D' && tiempo <= 30)
			{
				sumaDCobrados = sumaDCobrados + tiempo;
				cDCobrados++;
			}
		}
	} while (codigo != 0);

	cout << "\nImporte total recaudado en el ultimo mes: " << monto << endl;
	cout << "Cantidad de pedidos que fueron entregados gratis: " << cPedidosGratis << endl;
	cout << "La pizza más pedida fue la ";
	if (cPizza1 >= cPizza2 && cPizza1 >= cPizza3)cout << "Grande" << endl;
	if (cPizza2 >= cPizza1 && cPizza2 >= cPizza3)cout << "Familiar" << endl;
	if (cPizza3 >= cPizza2 && cPizza3 >= cPizza1)cout << "Super Familiar" << endl;
	cout << "Promedio de tiempo de entrega de pedidos de mostrador no gratis: " << 1.0 * sumaMCobrados / cMCobrados << endl;
	cout << "Promedio de tiempo de entrega de pedidos de delivery no gratis: " << float(sumaDCobrados) / cDCobrados << endl;
	_getch();
}

void Ejercicio04_Agencia_Turismo() {
	{
		char tipotransporte, empresa, hotel;
		int dias, cont30DO = 0, contTotalPasajeros = 0, contO = 0, sumaObus = 0,
			sumaOvip = 0, sumaCbus = 0, sumaCvip = 0, sumaLbus = 0;
		float  montoP = 0, montoE = 0, montoC = 0;

		do {
			do {
				cout << "\nIngresar tipo de transporte (B:bus cama, V:servicio vip): ";
				cin >> tipotransporte;
				tipotransporte = toupper(tipotransporte);
			} while (!(tipotransporte == 'B' || tipotransporte == 'V' || tipotransporte == 'F'));

			if (tipotransporte != 'F')
			{
				do {
					cout << "Ingresar empresa en la que viaja (O:Oltursa, C:Cruz del sur, L:Linea): ";
					cin >> empresa;
					empresa = toupper(empresa);
				} while (!(empresa == 'O' || empresa == 'C' || empresa == 'L'));

				do {
					cout << "Ingresar el hotel en que se hospeda (P:Los Pinos, E:Emperador, C:Cañaveral): ";
					cin >> hotel;
					hotel = toupper(hotel);
				} while (!(hotel == 'P' || hotel == 'E' || hotel == 'C'));

				do {
					cout << "Numero de dias de viaje (min 3): ";
					cin >> dias;
				} while (!(dias >= 3));

				contTotalPasajeros++;
				if (empresa == 'O')contO++;

				switch (empresa){
				case 'O':if (tipotransporte == 'B')sumaObus = sumaObus + 150;
					if (tipotransporte == 'V')sumaOvip = sumaOvip + 230; break;
				case 'C':if (tipotransporte == 'B')sumaCbus = sumaCbus + 200;
					if (tipotransporte == 'V')sumaCvip = sumaCvip + 300; break;
				case 'L':if (tipotransporte == 'B')sumaLbus = sumaLbus + 100;
				}

				switch (hotel){
				case'P':montoP += 20 * 3.90; break;
				case'E':montoE += 30 * 3.90; cont30DO++; break;
				case'C':montoC += 30 * 3.90; cont30DO++;
				}
			}
		} while (tipotransporte != 'F');

		cout << "Cantidad de viajeros que van a un hotel de 30 dolares: " << cont30DO << endl;
		cout << "Porcentaje de viajeros que eligieron Oltursa: " << 100.0 * contO / contTotalPasajeros << endl;
		cout << "Oltursa bus cama: " << sumaObus << endl;
		cout << "Oltursa vip: " << sumaOvip << endl;
		cout << "Cruz del sur bus cama: " << sumaCbus << endl;
		cout << "Cruz del sur bus cama: " << sumaCvip << endl;
		cout << "Linea bus cama: " << sumaLbus << endl;

		if (montoP > montoE && montoP > montoC)cout << " Hotel Los Pinos fue el que recaudo mas fondos con un total de " << montoP << endl;
		if (montoE > montoP && montoE > montoC)cout << " Hotel Emperador fue el que recaudo mas fondos con un total de " << montoE << endl;
		if (montoC > montoE && montoC > montoP)cout << " Hotel Cañaveral fue el que recaudo mas fondos con un total de " << montoC << endl;
		_getch();
	}
}

void Ejercicio05_Reporte_Emergencias() {

	char tipoEmerg, origenEmerg;
	int hora, cEcolog = 0, cSani = 0, cRadio = 0, cNatur = 0, cHomb = 0, cMadrug = 0, cManana = 0,
		cTarde = 0, cNoche = 0;

	cout << "\t\tREGISTRO DE EMERGENCIAS" << endl;

	do {
		do {
			cout << "\nIngresa el Tipo de Emergencia (E: Ecológica; S: Sanitaria; R: Radioactiva): ";
			cin >> tipoEmerg;
			tipoEmerg = toupper(tipoEmerg);
		} while (!(tipoEmerg == 'E' || tipoEmerg == 'S' || tipoEmerg == 'R' || tipoEmerg == 'F'));

		if (tipoEmerg != 'F') {
			do {
				cout << "Hora de la emergencia (Entero positivo entre 0 y 23):";
				cin >> hora;
			} while (!(hora >= 0 && hora <= 23));

			do {
				cout << "Origen de la emergencia (N: Naturaleza; I: Intervención del hombre):";
				cin >> origenEmerg;
				origenEmerg = toupper(origenEmerg);

			} while (!(origenEmerg == 'N' || origenEmerg == 'I'));

			switch (tipoEmerg) {
			case 'E':cEcolog++;break;
			case 'S':cSani++;break;
			case 'R':cRadio++;break;
			}

			switch (origenEmerg) {
			case 'N':cNatur++;break;
			case 'I':cHomb++;break;
			}

			if (hora >= 0 && hora <= 5) cMadrug++;
			if (hora >= 6 && hora <= 12) cManana++;
			if (hora >= 13 && hora <= 17) cTarde++;
			if (hora >= 18 && hora <= 23) cNoche++;

		}
	} while (tipoEmerg != 'F');

	cout << endl;
	cout << "\t\tREPORTE DEL DÍA"<<endl;

	cout << "\nEmergencias Ecológicas: "<<cEcolog<<endl;
	cout << "Emergencias Samitarias: "<<cSani<<endl;	
	cout << "Emergencias Radioactivas: "<<cRadio<<endl;	

	cout << "\nEl momento en que ocurre más emergencias es la ";
	if (cMadrug > cManana && cMadrug > cTarde && cMadrug > cNoche) cout<<"MADRUGADA."<<endl;
	if (cManana > cMadrug && cManana > cTarde && cManana > cNoche) cout<<"MAÑANA." << endl;
	if (cTarde > cMadrug && cTarde > cManana && cTarde > cNoche) cout<<"TARDE." << endl;
	if (cNoche > cMadrug && cNoche > cManana && cNoche > cTarde) cout<<"NOCHE." << endl;

	cout << "Predomina las emergencias por la ";
	if (cNatur > cHomb)cout << "Naturaleza."<<endl;
	if (cHomb > cNatur)cout << "Intervención del Hombre."<<endl;
}

void main() {
	setlocale(LC_CTYPE, "spanish");

	//youtube01();
	//youtube02();
	//youtube04();
	//youtube05();

	//Ejercicio01();
	//Ejercicio02_Invertir_Numero();
	//Ejercicio03_pizza();
	//Ejercicio04_Agencia_Turismo();
	Ejercicio05_Reporte_Emergencias();

	_getch();
}