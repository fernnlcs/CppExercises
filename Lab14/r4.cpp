#include <iostream>
using namespace std;

struct peixe {
	char tipo[15];
	float peso;
	int comprimento;
};

void exibir(peixe);
void exibirPont(peixe*);

int main() {
	peixe p1 = { "Piaba", 6.2, 5 };
	exibir(p1);

	peixe* ponteiro = &p1;
	exibirPont(ponteiro);

	return 0;
}

void exibir(peixe p) {
	cout << "Sem ponteiro: " << p.tipo << " com " << p.peso << "g e " << p.comprimento << "cm" << endl;
}

void exibirPont(peixe* p) {
	cout << "Com ponteiro: " << p->tipo << " com " << p->peso << "g e " << p->comprimento << "cm" << endl;
}
