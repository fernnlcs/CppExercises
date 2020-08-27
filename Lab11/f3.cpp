#include <iostream>
#include <string>
using namespace std;

int main() {
	char vetor[20] = "Vetor de caracteres";
	string str = "String de caracteres";

	cout << vetor << endl << str;
	
	return 0;
}

/* RESPOSTA DA QUESTÃO
O cout interpreta um vetor de caracteres como sendo texto, por isso os exibe sequencialmente.
*/