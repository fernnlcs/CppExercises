#include <iostream>
using namespace std;

int main() {
	double litros = 3.4;
	double* ponteiro = &litros;
	cout << "O valor de litros e " << *ponteiro;

	return 0;
}