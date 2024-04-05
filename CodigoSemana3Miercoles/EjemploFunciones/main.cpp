#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std;

//no retornan resultado: void 
//retornan resultado: diferente de void

void MostrarMensaje() {
    cout << "Hola Mundo";
}

int SumaDigitos(int num) {
    int c, d, u, s;

    c = num / 100;
    d = (num / 10) % 10;
    u = num % 10;
    s = c + d + u;

    return s;
}

void main() {
    //Numero1: 585 = 18
    //Numero2: 739 = 19
    //Suma de digitos: 37

    /*
    int n1, n2, suma1, suma2;

    cout << "Ingrese el numero1 y el numero2:";
    cin >> n1 >> n2;

    suma1 = SumaDigitos(n1);
    suma2 = SumaDigitos(n2);

    cout << "La suma de digitos es: " << suma1 + suma2;
    */

    //MostrarMensaje();

    //https://www.delftstack.com/es/howto/cpp/cube-root-cpp/

    double num = 27, raiz = 0, potencia = 1/3.0;
    raiz = pow(num, potencia);

    cout << "Raiz: " << raiz;

    getch();
}








