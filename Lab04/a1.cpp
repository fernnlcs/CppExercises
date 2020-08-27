#include <iostream>
#include <cmath>
using namespace std;

float Distancia(int px, int py, int qx, int qy) {
	float resultado;
	resultado = sqrt(pow(qx - px, 2) + pow(qy - py, 2));
	return resultado;
}

int main() {
	cout << "Ponto P (x e y):" << endl;
	int px, py;
	cin >> px >> py;

	cout << endl << "Ponto Q (x e y):" << endl;
	int qx, qy;
	cin >> qx >> qy;

	cout << endl;
	cout << "A distância entre P e Q e de " << Distancia(px, py, qx, qy) << " u.m.";

	return 0;
}