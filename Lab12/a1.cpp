#include <iostream>
using namespace std;

struct Conta {
	unsigned identificador;
	char nome[20];
	int saldo = 0;
};

int main() {
	Conta c1;

	cout << "Configurando Nova Conta..." << endl;
	cout << "Identificador: ";
	cin >> c1.identificador;
	cout << "Nome do Cliente: ";
	cin.getline(c1.nome, 19);
	
	cout << endl;
	cout << "Dados da Conta: " << endl;
	cout << "Identificador: " << c1.identificador << endl;
	cout << "Nome do Cliente: " << c1.nome << endl;
	cout << "Saldo atual: " << c1.saldo << endl;

	cout << endl;
	cout << "Quanto dejesa depositar na conta?";
	unsigned deposito;
	cin >> deposito;
	c1.saldo += deposito;

	cout << endl;
	cout << "Dados da Conta: " << endl;
	cout << "Identificador: " << c1.identificador << endl;
	cout << "Nome do Cliente: " << c1.nome << endl;
	cout << "Saldo atual: " << c1.saldo << endl;

	return 0;
}
