#include <iostream>
using namespace std;

int main() {
	short curto = SHRT_MAX;
	int inteiro = INT_MAX;
	long longo = LONG_MAX;
	long long extralongo = LLONG_MAX;

	int total = sizeof(curto) + sizeof(inteiro) + sizeof(longo) + sizeof(extralongo);

	cout << "short: " << sizeof(curto) << " bytes" << endl;
	cout << "int: " << sizeof(inteiro) << " bytes" << endl;
	cout << "long: " << sizeof(longo) << " bytes" << endl;
	cout << "long long: " << sizeof(extralongo) << " bytes" << endl;
	cout << "Total: " << total << " bytes" << endl;

	return 0;
}