#include <iostream>
using namespace std;

double media(double x, double y) {
	return (x + y) / 2;
}

int main() {
	int x, y;
	cout << "Digite um valor inteiro: ";
	cin >> x;
	cout << "Digite outro valor inteiro: ";
	cin >> y;
	cout << "A media dos numeros e " << media(x, y);
	return 0;
}