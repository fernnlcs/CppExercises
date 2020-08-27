#include <iostream>
using namespace std;

int main() {
	int x;
	
	cout << "Digite um numero positivo ou negativo: ";
	cin >> x;
	cout << "O valor absoluto de " << x << " e ";

	if (x >= 0)
	{
		cout << x;
	}
	else
	{
		cout << -x;
	}

	return 0;
}
