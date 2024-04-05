#include<iostream>
#include<conio.h>

using namespace std;

// CON FUNCIONES (VOID = no retorna un valor   INT, BOOL,FLOAT = retorna valor)


int SumaDigitos(int numero) {    //se crea una funcion

	int c1, d1, u1, s1;	

	c1 = numero / 100;
	d1 = (numero / 10) % 10;
	u1 = numero % 10;
	s1 = c1 + d1 + u1;	

	return s1;

}

void MostrarAlgo() {
	cout << "Esto es todo amigos...";
}




void main() {

	//suma de  digitos de dos numeros

	int	n1, n2, suma1, suma2;

	cout << "Ingrese el numero1 y numero 2: ";
	cin >> n1 >> n2;

	suma1 = SumaDigitos(n1);
	suma2 = SumaDigitos(n2);


	cout<<"La suma de digitos es: " << suma1 + suma2<<endl;
	MostrarAlgo();

	_getch();

}








