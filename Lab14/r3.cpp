#include <iostream>
using namespace std;

struct peixe {
	char tipo[15];
	float peso;
	int comprimento;
};

int main() {
	// ITEM "A" - Para criar uma vari�vel do tipo 'peixe'
	peixe p1 = {"Piaba", 6.2, 5};

	// ITEM "B" - Para criar um ponteiro para uma vari�vel do tipo 'peixe'
	peixe* ponteiro = &p1;

	return 0;
}