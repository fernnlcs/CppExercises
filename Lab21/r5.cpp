#include <iostream>
using namespace std;

int main() {
	int m = 0, n = 0;

	// OU
	while (n % 7 != 4 || n % 5 != 3 || n % 3 != 2)
		n++;

	cout << "n: " << n << endl;

	// E
	while (!(m % 7 == 4 && m % 5 == 3 && m % 3 == 2))
		m++;

	cout << "m: " << m << endl;

	return 0;
}