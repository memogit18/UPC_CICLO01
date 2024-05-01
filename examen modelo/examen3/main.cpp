#include<iostream>
#include<conio.h>

using namespace std;

int main() {

	int horas = 0;

	cout << "Ingrese las horas usadas: ";
	cin >> horas;


	if (horas >= 1 && horas <= 3) {
		cout << "Tarifa a cobrar: "<<horas * 4;
	}
	else {
		if (horas >= 4 && horas <= 5) {
			cout << "Tarifa a cobrar: " << 12 + ((horas-3) * 3.5)<< " soles";
		}
		else {
			if (horas >= 6 && horas <= 8) {
				cout << "Tarifa a cobrar: " << 12 + 7 +((horas-5) * 3) << " soles";
			}
			else {
				if (horas > 8) {
					cout << "Tarifa a cobrar: " << 12 + 7 + 9 + ((horas-8) * 2)<<" soles";
				}
			}
		}
	}


	_getch();
	return 0;
}