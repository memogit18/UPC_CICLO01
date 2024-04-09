#include <iostream>
#include<conio.h>
#include <math.h>

using namespace std;

/*
int calculo(int total_ganancia, int socio01, int socio02, int socio03) {


    int suma_acciones = 0;
    suma_acciones = socio01 + socio02 + socio03;

    return  ganancia_socio = (total_ganancia / suma_acciones);

}

*/


int main() {
    
    int total_ganancia;
    cout << "Ingresa la ganancia: ";
    cin >> total_ganancia;

    int socio01;
    cout << "Ingresa la cantidad de acciones del socio 1: ";
    cin >> socio01;

    int socio02;
    cout << "Ingresa la cantidad de acciones del socio 2: ";
    cin >> socio02; 

    int socio03;
    cout << "Ingresa la cantidad de acciones del socio 3: ";
    cin >> socio03; 

    int suma_acciones = 0;
    suma_acciones = socio01 + socio02 + socio03;
    cout << "La sama de acciones son: " << suma_acciones << endl;
    
    double ganancia_socio_01 = 0;
    double ganancia_socio_02 = 0;
    double ganancia_socio_03 = 0;

    ganancia_socio_01 = (total_ganancia / suma_acciones) * socio01;
    cout << "La ganancia del socio 01 es: " << ganancia_socio_01 << endl;

    ganancia_socio_02 = (total_ganancia / suma_acciones) * socio02;
    cout << "La ganancia del socio 02 es: " << ganancia_socio_02 << endl;

    ganancia_socio_03 = (total_ganancia / suma_acciones) * socio03;
    cout << "La ganancia del socio 03 es: " << ganancia_socio_03 << endl; 

    _getch();

    return 0;
}