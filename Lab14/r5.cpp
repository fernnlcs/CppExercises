#include <iostream>
using namespace std;

int main() {
	int* ptr = (int*) 0x01;
	cout << *ptr;

	return 0;
}


/*
RESPOSTA:
O programa � fechado por viola��o de acesso de leitura.
*/