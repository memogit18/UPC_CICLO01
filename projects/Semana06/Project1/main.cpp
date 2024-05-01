#include<iostream>
#include<conio.h>
#include<locale.h>

#include<stdlib.h>  //para nuscar un numero aleatorio
#include<time.h>    //para nuscar un numero aleatorio

#include<iomanip>  //para redondear

using namespace std;

void Ejercicio01() {

    int numero;
    int cantidad_numeros = 0;
    int suma_numeros = 0;
    int numero_mayor;
    int numero_menor;
    int cantidad_positivos = 0;
    int cantidad_negativos = 0;

    do {
        cout << "Ingrese un número (o 0 para terminar): ";
        cin >> numero;

        if (numero != 0) {
            cantidad_numeros++;
            suma_numeros += numero;

            if (numero > 0) {
                cantidad_positivos++;
            }
            else if (numero < 0) {
                cantidad_negativos++;
            }

            if (numero_mayor < numero) {
                numero_mayor = numero;
            }

            if (numero_menor > numero) {
                numero_menor = numero;
            }
        }
    } while (numero != 0);

    double promedio = (suma_numeros * 1.0) / cantidad_numeros;

    cout << "\nResultados:" << endl;
    cout << "Números Leídos = " << cantidad_numeros << endl;
    cout << "Número Mayor = " << numero_mayor << endl;
    cout << "Número Menor = " << numero_menor << endl;
    cout << "Números Positivos = " << cantidad_positivos << endl;
    cout << "Números Negativos = " << cantidad_negativos << endl;
    cout << "Promedio = " << promedio << endl;


}

void Ejercicio02_Aleatorio(){

    int intento = 1, numero_ingresado = 0, aleatorio;

    srand(time(NULL));
    aleatorio = 1 + rand() % 100;

    cout << "\t\tADIVINA EL NUMERO" << endl <<
        "\t\t    (1 - 100)\n" << endl;

    do
    {
        cout << "Intento: " << intento<<"  Ingresa un Número para Acertar: ";
        cin >> numero_ingresado;

        if (numero_ingresado == aleatorio) {
            if (intento >= 1 && intento <= 3) {
                cout<<"Fue puera Suerte...";
            }
            else if (intento >= 4 && intento <= 6) {
                cout << "Eres bueno...";
            }
            else if (intento == 7) {
                cout << "No esta mal...";
            }
            else if (intento == 8) {
                cout << "Se puede mejorar...";
            }
            else if (intento > 8) {
                cout << "Que mal estas...";
            }
        }
        else {
            if (numero_ingresado > aleatorio) {
                cout << "El número aleatorio es menor\n"<<endl;
            }
            else if(numero_ingresado < aleatorio){
                cout << "El número aleatorio es mayor\n" << endl;
            }
        }
        intento++;

    } while (aleatorio != numero_ingresado);
}

void Ejercicio03() {
    int numero = 0;
    cout << "Ingrese un número";


}

void Ejercicio04() {
    int numero = 0, suma = 0, i = 1;
    
    cout << "Ingrese un Número entero:";
    cin >> numero;

    do
    {
        if (i != 1) {
            cout << " + ";
        }

        cout << i;
        suma = i + suma;
        i = i + 2;

    } while (i <=  numero);

    cout << " = " << suma;
}

void Ejercicio04_for() {
    int numero = 0, suma = 0;

    cout << "Ingrese un Número entero:";
    cin >> numero;

    cout << " La suma es ";
    for (int i = 1; i <= numero; i + 2) {
        if (i != 1) {
            cout << " + ";
        }
        cout << i;
        suma = i + suma;
        i = i + 2;
    }

    cout << " = " << suma;
}

void Ejercicio05_Tabla_Multiplicar() {
    int numero = 0;

    cout << "Ingrese un Número: ";
    cin >> numero;

    for (int i = 1; i <= 10; i++) {
        cout << numero << " x " << i << " = " << numero * i << endl;
    }

}

void Numero_Aleatorio() {
    int numero, aleatorio, i = 0;

    srand(time(NULL));
    aleatorio = 1 + rand() % 100;

    cout << "\t\tADIVINA EL NUMERO"<<endl<<
            "\t\t    (1 - 100)\n" << endl;

    do
    {
        cout << "Ingresa un Número: ";
        cin >> numero;

        if (numero > aleatorio) {
            cout << "\nIngresa un nÚmero menor.\n";
        }
        if (numero < aleatorio) {
            cout << "\nIngresa un número mayor.\n";
        }
        i++;

    } while (numero != aleatorio);

    cout << "\nFelicidades...Ganaste\n";
    cout << "\nNúmero de intentos: " << i;
}

void Ejercicio06() {

    int can_alumnos = 0, i = 1;
    double exam_parcial, exam_final, trabajo_final, promedio = 0;

    cout << "\nIngresa la cantidad de alumnos:";
    cin >> can_alumnos;
    cout << "\n";

    do
    {
        cout << "\nIngresa el EF del alumno "<<i<<": ";
        cin >> exam_final;
        cout << "Ingresa el EP del alumno " << i << ": ";
        cin >> exam_parcial;    
        cout << "Ingresa el TF del alumno " << i << ": ";
        cin >> trabajo_final;

        promedio = exam_final * 0.55 + exam_parcial * 0.3 + trabajo_final * 0.15;
        cout << "Su promedio final es:"<<promedio;
        cout << "\n";
        i++;

    } while (i <= can_alumnos);

}

void Ejercicio07_Uso_Redondeo() {

    int cant_congresistas, voto, i = 1;
    double a_favor = 0, en_contra = 0, abstine = 0;

    cout << "\nIngresa la cantidad de Congresistas:";
    cin >> cant_congresistas;
    cout << "\n";

    do
    {
        cout << "Ingresa tu voto (1: a favor; 2: en contra; 3: se abstiene):";
        cin >> voto;

        switch (voto){
        case 1:
            cout << "El congresista " << i << " voto a favor.\n"<<endl; 
            a_favor++
            ;break;
        case 2:
            cout << "El congresista " << i << " voto en contra.\n"<<endl;
            en_contra++
            ;break;
        case 3:
            cout << "El congresista " << i << " se abstuvo.\n"<<endl;
            abstine++
            ;break;

        default:
            break;
        }
        i++;

    } while ((i-1) != cant_congresistas);

    cout << "\t\tRESULTADOS"<<endl;
    cout << "\nPorcentaje a Favor: " << (a_favor / cant_congresistas) * 100 << "%";
    cout << fixed<<setprecision(2)<<"\nPorcentaje en contra: " << (en_contra / cant_congresistas) * 100 << "%";
    printf("\nPorcentaje abstuvo: 3%.2f", abstine / cant_congresistas) * 100;cout << "%";  //para obtener 2 decimales
}

void Ejercicio08() {

    int cant_personas, edad, i = 0, edad16y21 = 0, otrasEdades = 0, edad30 = 0;
    double  man = 0, woman = 0;
    int soltero = 0, casado = 0, viudo = 0, divorciado = 0;
    char sexo, estado_civil;

    cout << "Ingrese la cantidad de personas del Censo: ";
    cin >> cant_personas;

    do
    {
        cout << "\nIngrese información de la persona "<<i+1<<": "<<endl;

        cout << "Sexo(M / F): ";
        cin >> sexo;
        sexo = tolower(sexo);

        switch (sexo){
        case 'M':man++;break;
        case 'F':woman++;break;
        default:
            break;
        }

        cout << "Edad: ";
        cin >> edad;

        cout << "Estado Civil(a: Soltero; b: Casado; c: Viudo; d: Divorciado): ";
        cin >> estado_civil;
        estado_civil = tolower(estado_civil);

        switch (estado_civil) {
        case 'a':soltero++;break;
        case 'b':casado++;break;
        case 'c':viudo++;break;
        case 'd':divorciado++;break;    
        default:
            break;
        }

        if (edad >= 16 && edad <= 21 && estado_civil == 'c') {
            edad16y21++;
        }
        else {
            otrasEdades++;
        }

        if (sexo =='M' && edad > 30 && (estado_civil == 'a' || estado_civil == 'd')) {
             edad30++;
        }

        i++;
    } while (cant_personas != i);

    cout << "\t\tRESULTADOS" << endl;

    cout << "\nEl número de jóvenes viudas que están entre 16 y 21 años inclusive: "<<edad16y21<<endl;
    cout << "El porcentaje de mujeres es: " << (woman / cant_personas) * 100 << "%"<<endl;
    cout << "El porcentaje de hombres es: " << (man / cant_personas) * 100 << "%"<<endl;
    cout << "El número de hombres mayores de 30 años solteros o divorciados: " << edad30 << endl;

}

void Ejercicio09() {

    int can_alumnos = 0, i = 1, a = 0, b = 0, c = 0, d = 0;
    double peso = 0;    

    cout << "\nIngresa la cantidad de alumnos:";
    cin >> can_alumnos;
    cout << "\n";

    do{
        cout << "Peso alumno "<<i<<": ";
        cin >> peso;

        if (peso < 40) {
            a++;
        }
        else if (peso >= 40 && peso <= 50) {
            b++;
        }
        else if (peso > 50 && peso < 60) {
            c++;
        }
        else if (peso >= 60) {
            d++;
        }
        i++;
    } while (can_alumnos != (i-1));

    cout << "\n\t\tRESULTADOS" << endl;

    cout << "\nAlumnos de menos de 40 kg: " << a;   
    cout << "\nAlumnos entre 40 y 50 kg: " << b;
    cout << "\nAlumnos de más de 50 y menos de 60 kg: " << c;
    cout << "\nAlumnos de 60 kg o más: " << d;
}

void Invertir_Numero() {
    int number, residuo = 0;

    cout << "Enter a Number: ";
    cin >> number;

    do {
        residuo = residuo * 10 + number % 10;
        number /= 10;

    } while (number != 0);

    cout << "\ninvertido: " << residuo;
}

void main() {
    setlocale(LC_CTYPE, "spanish");


    //Ejercicio01();
    //Ejercicio02_Aleatorio();
    //Ejercicio03();
    //Ejercicio04();
    //Ejercicio04_for();
    //Ejercicio05_Tabla_Multiplicar();
    //Numero_Aleatorio();
    //Ejercicio06();
    //Ejercicio07_Uso_Redondeo();
    Ejercicio08();
    //Ejercicio09();
    //Invertir_Numero();

    _getch();
}