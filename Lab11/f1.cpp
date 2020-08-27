#include <iostream>
using namespace std;

int main() {
	const int Tam = 15;
	char primeiro[Tam], segundo[Tam];

	cout << "Primeiro nome? ";
	cin >> primeiro;
	cout << "Segundo nome? ";
	cin >> segundo;

	cout << "Bom dia, " << primeiro << " " << segundo << "." << endl;
	cout << "Seja bem-vindo, " << primeiro[0] << segundo[0] << "!" << endl;

	return 0;
}