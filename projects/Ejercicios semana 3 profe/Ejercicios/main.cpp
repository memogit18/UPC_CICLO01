#include <iostream>
#include <conio.h>

using namespace std;

void Ejercicio01() {

    double ladoA = 0, ladoB = 0, ladoC = 0;
    double areaCuadrado = 0, areaTriangulo = 0;

    cout << "Ingrese lado A: ";
    cin >> ladoA;

    cout << "Ingrese lado B: ";
    cin >> ladoB;

    cout << "Ingrese lado C: ";
    cin >> ladoC;

    areaCuadrado = ladoB * ladoC;
    areaTriangulo = (ladoA - ladoC) * ladoB / 2.0;

    cout << "El area de la figura es: " << (areaCuadrado + areaTriangulo) << " mt2";
}

void Ejercicio02() {
    
    int aporteC = 0, aporteJ = 0, aporteE = 0;
    double capital = 0;

    cout << "Ingrese aporte Carmela: ";
    cin >> aporteC;

    cout << "Ingrese aporte Javier: ";
    cin >> aporteJ;

    cout << "Ingrese aporte Eulogio: ";
    cin >> aporteE;

    capital = (aporteC + aporteJ + aporteE)*1.0;
    cout << "Capital total: " << capital << endl;
    cout << "Participacion Carmela: " << aporteC / capital * 100 << endl;
    cout << "Participacion Javier: " << aporteJ / capital * 100 << endl;
    cout << "Participacion Eulogio: " << aporteE / capital * 100 << endl;
}

void Ejercicio13() {
    int cant = 0, ciento = 0, medio_ciento = 0, decena = 0, unidad = 0;

    cout << "Ingrese la cantidad de lapices: ";
    cin >> cant;

    //347 / 100 = trunc(3.47)
    ciento = cant / 100; //no hay necesidad de usar trunc porque la division es entre enteros y el resultado se trunca automaticamente a un entero
    //347 % 100 = 47 / 50 = 0
    medio_ciento = (cant % 100) / 50;
    //347 % 100 = 47 % 50 = 47 / 10 = 4
    decena = ((cant % 100) % 50) / 10;

    unidad = ((cant % 100) % 50) % 10;

    cout << "Cajas de un ciento: " << ciento << endl;
    cout << "Cajas de medio ciento: " << medio_ciento << endl;
    cout << "Cajas de decena: " << decena << endl;
    cout << "Unidades: " << unidad << endl;
}

void main() {

    //Ejercicio01();
    //Ejercicio02();
    Ejercicio13();

    _getch();
}









