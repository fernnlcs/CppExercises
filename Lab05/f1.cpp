#include <iostream>
using namespace std;

void mostrador(int, int);

int main() {
	cout << "Entre com o numero de horas: ";
	int horas, minutos;
	cin >> horas;
	cout << "Entre com o numero de minutos: ";
	cin >> minutos;
	cout << "Agora sao ";
	mostrador(horas, minutos);
}

void mostrador(int horas, int minutos) {
	cout << horas << ":" << minutos;
}