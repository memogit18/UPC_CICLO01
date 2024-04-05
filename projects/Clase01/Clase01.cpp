#include "pch.h"
#include <iostream>
#include <conio.h>

using namespace std;
using namespace System;

int main()
{
    int n;
    cout << "Ingresa un Numero: ";
    cin >> n;
    cout << "El numero al cuadrado es: " << pow(n, 2) << endl;
    //_getch();
    system("pause"); //otra forma like getch.

    return 0;
}
