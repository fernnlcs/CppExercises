#include <iostream>
using namespace std;

int somaCinco(int vetor[]);

int main() {
	cout << "Digite 5 valores: ";
	int vet[5];
	cin >> vet[0] >> vet[1] >> vet[2] >> vet[3] >> vet[4];
	cout << "A soma do Vetor é " << somaCinco(vet) << endl;

	return 0;
}

int somaCinco(int vetor[]) {
	return vetor[0] + vetor[1] + vetor[2] + vetor[3] + vetor[4];
}