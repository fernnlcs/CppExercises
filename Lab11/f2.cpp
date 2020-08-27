#include <iostream>
using namespace std;

int main() {
	char nome[30];
	char conceito;

	cout << "Qual e o seu nome? ";
	cin.getline(nome, 30);
	cout << "Que conceito voce merece? ";
	cin >> conceito;
	cout << endl;

	conceito = conceito + 1;

	cout << "Bom dia, " << nome << ", seu conceito e " << conceito << "." << endl;
}