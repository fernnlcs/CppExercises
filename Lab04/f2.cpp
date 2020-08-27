#include <iostream>
using namespace std;

void Linha(void) {
	cout << "----------";
}

void Pequena(void) {
	Linha();
}

void Media(void) {
	Linha();
	Linha();
}

void Grande(void) {
	Linha();
	Linha();
	Linha();
}

int main() {
	Pequena();
	cout << endl;
	Media();
	cout << endl;
	Grande();
	cout << endl << "Programacao de Computadores" << endl;
	Grande();
	cout << endl;
	Media();
	cout << endl;
	Pequena();
	return 0;
}