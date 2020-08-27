#include <iostream>
using namespace std;

int main() {
	char senha[] = "gameover";
	char senhaDigitada[10];

	cout << "Digite sua senha: ";
	cin >> senhaDigitada;

	if (strcmp(senha,senhaDigitada) == 0) {
		cout << "Senha correta!";
	}
	else {
		cout << "Senha incorreta!";
	}

	return 0;
}