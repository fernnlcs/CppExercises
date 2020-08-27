#include <iostream>
using namespace std;

int main() {
	int vetor[5] = { 10, 80, 30, 45, 15 };
	cout << "Vetor: " << vetor[0] << " " << vetor[1] << " " << vetor[2] << " " << vetor[3] << " " << vetor[4] << endl << endl;

	int posicao, novoValor;

	cout << "Alterar posicao: ";
	cin >> posicao;
	cout << "Novo valor: ";
	cin >> novoValor;

	vetor[posicao] = novoValor;

	cout << endl;
	cout << "Vetor: " << vetor[0] << " " << vetor[1] << " " << vetor[2] << " " << vetor[3] << " " << vetor[4] << endl << endl;

	return 0;
}