#include <iostream>
using namespace std;

struct Tempo {
	unsigned dia;
	unsigned mes;
	unsigned ano;
};

int diferenca(Tempo, Tempo);

int main() {
	Tempo hoje;
	Tempo passado;

	cout << "Que dia e hoje? " << endl;
	cin >> hoje.dia;
	cin.get();
	cin >> hoje.mes;
	cin.get();
	cin >> hoje.ano;

	cout << endl;
	cout << "Em que dia voce nasceu? " << endl;
	cin >> passado.dia;
	cin.get();
	cin >> passado.mes;
	cin.get();
	cin >> passado.ano;

	int dias = diferenca(hoje, passado);

	cout << endl;
	cout << "Voce tem " << dias << " de vida, ate o momento." << endl;
	cout << "Isso significa que voce tem " << (dias - dias % 372) / 372 << " anos." << endl;

	return 0;
}

int diferenca(Tempo hoje, Tempo passado) {
	int anos = hoje.ano - passado.ano; // 2019 - 2003 = 16
	int meses = hoje.mes - passado.mes; // 11 - 12 = -1
	int dias = hoje.dia - passado.dia; // 5 - 26 = -21

	int totalDias = anos * 12 * 31 + meses * 31 + dias;
	return totalDias;
}