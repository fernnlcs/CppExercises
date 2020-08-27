#include <iostream>
#include <fstream>
using namespace std;

struct peixe
{
	char nome[20];
	unsigned peso;
	float comp;
};

int main()
{
	peixe novo;
	cout << "CADASTRAR NOVO PEIXE" << endl << endl;
	cout << "Nome: ";
	cin >> novo.nome;
	cout << "Peso: ";
	cin >> novo.peso;
	cout << "Comprimento: ";
	cin >> novo.comp;

	ofstream fout;
	fout.open("pescado.dat", ios_base::out | ios_base::app | ios_base::binary);

	fout.write((char *) &novo, sizeof(peixe));

	fout.close();

	return 0;
}
