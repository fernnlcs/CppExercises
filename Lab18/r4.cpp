#include <iostream>
using namespace std;

bool strEqual(const char[], const char[]);

int main() {
	char palavra[] = "Teste";

	cout << boolalpha << strEqual(palavra, "Teste");

	return 0;
}

bool strEqual(const char pri[], const char seg[]) {
	bool iguais = true;
	for (int cont = 0; pri[cont] != 0 && seg[cont] != 0; cont++) {
		if (pri[cont] != seg[cont]) {
			iguais = false;
		}
	}
	return iguais;
}
