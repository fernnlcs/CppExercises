#include <iostream>
using namespace std;

int main() {
	const float quilo[3] = {1.5, 2.0, 1.0};
	
	cout << "Prezado Cliente," << endl << "Digite a quantidade de quilos desejada:	" << endl;

	float quantidade[3];

	cout << "Alface: ";
	cin >> quantidade[0];
	cout << "Beterraba: ";
	cin >> quantidade[1];
	cout << "Cenoura: ";
	cin >> quantidade[2];
	cout << endl; 

	float subtotal[3];

	subtotal[0] = quilo[0] * quantidade[0];
	subtotal[1] = quilo[1] * quantidade[1];
	subtotal[2] = quilo[2] * quantidade[2];

	float total = subtotal[0] + subtotal[1] + subtotal[2];

	cout.setf(ios_base::fixed, ios_base::floatfield);
	cout.precision(2);

	cout << "Resumo da Compra" << endl << "------------------" << endl;
	cout << "Alface    = R$" << subtotal[0] << endl;
	cout << "Beterraba = R$" << subtotal[1] << endl;
	cout << "Cenoura   = R$" << subtotal[2] << endl;
	cout << "------------------" << endl;
	cout << "Total     = R$" << total << endl;


	return 0;
}