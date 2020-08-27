#include <iostream>
using namespace std;

char ultimaLetra(char[]);

int main() {
	cout << "Digite uma palavra: ";
	char palavra[15];

	cin >> palavra;

	cout << "Em " << palavra << ", a ultima letra e '" << ultimaLetra(palavra) << "'.";

	return 0;
}

char ultimaLetra(char str[]) {
	int tamanho = strlen(str);
	return str[tamanho - 1];
}