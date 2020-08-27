#include <iostream>
#include <cstring>
using namespace std;

int main() {
	cout << "Digite palavras (pronto para sair):" << endl;

	char palavra[40];
	int contador = 0;

	cin >> palavra;
	while (strcmp(palavra, "pronto")) {
		contador++;
		cout << palavra << " (" << contador << ") " << endl;
		cin >> palavra;
	}

	cout << "Foi digitado um total de " << contador << " palavras.";

	return 0;
}
