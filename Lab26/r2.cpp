#include <iostream>
using namespace std;

int subs(char* str, char c1, char c2);

int main()
{
	cout << "Digite a palavra: ";
	char nome[40];
	cin >> nome;

	cout << "Localizar: ";
	char orig;
	cin >> orig;

	cout << "Substituir: ";
	char novo;
	cin >> novo;

	cout << "Foram feitas " << subs(nome, orig, novo) << " substituições: " << nome;

	return 0;
}

int subs(char* str, char c1, char c2)
{
	int contador = 0;

	while (*str)
	{
		if (*str == c1)
		{
			*str = c2;
			contador++;
		}
		str++;
	}

	return contador;
}
