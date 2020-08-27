#include <iostream>
using namespace std;

struct Complexo {
	float real;
	float img;
};

istream& operator>>(istream&, Complexo&);
ostream& operator<<(ostream&, Complexo);
Complexo operator+(Complexo, Complexo);
Complexo operator*(Complexo, Complexo);

int main() {
	cout << "Primeiro Complexo: ";
	Complexo primeiro = ler();

	cout << "Segundo Complexo: ";
	Complexo segundo = ler();

	exibir(soma(primeiro, segundo));
	cout << endl;

	return 0;
}

void exibir(Complexo c) {
	cout << c.real;

	cout.setf(ios::showpos);
	cout << c.img;
	cout.unsetf(ios::showpos);

	cout << "i";
}

Complexo operator>>(istream is, Complexo& temp) {
	is >> temp.real >> temp.img;
	is.get();

	return is;
}

Complexo operator+(Complexo c1, Complexo c2) {
	Complexo somado;
	somado.real = c1.real + c2.real;
	somado.img = c1.img + c2.img;
	return somado;
}

Complexo operator*(Complexo c1, Complexo c2) {
	Complexo multiplicado;
	multiplicado.real = c1.real * c2.real - c1.img * c2.img;
	multiplicado.img = c1.img * c2.real + c1.real * c2.img;
	return { 0 };
}
