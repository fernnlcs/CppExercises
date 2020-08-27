#include <iostream>
using namespace std;

struct complexo {
	float real;
	float img;
};

void exibir(complexo);
complexo ler(void);
complexo soma(complexo, complexo);
complexo mult(complexo, complexo);

int main() {
	cout << "Primeiro complexo: ";
	complexo primeiro = ler();

	cout << "Segundo complexo: ";
	complexo segundo = ler();

	exibir(soma(primeiro, segundo));
	cout << endl;

	return 0;
}

void exibir(complexo c) {
	cout << c.real;

	cout.setf(ios::showpos);
	cout << c.img;
	cout.unsetf(ios::showpos);

	cout << "i";
}

complexo ler(void) {
	complexo temp;

	cin >> temp.real >> temp.img;
	cin.get();

	return temp;
}

complexo soma(complexo c1, complexo c2) {
	complexo somado;
	somado.real = c1.real + c2.real;
	somado.img = c1.img + c2.img;
	return somado;
}

complexo mult(complexo c1, complexo c2) {
	complexo multiplicado;
	multiplicado.real = c1.real * c2.real - c1.img * c2.img;
	multiplicado.img = c1.img * c2.real + c1.real * c2.img;
	return { 0 };
}
