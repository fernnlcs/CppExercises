#include <iostream>
using namespace std;

double fahrenheit(double);

int main() {
	cout << "Digite uma temperatura em graus Celsius: ";
	double temperatura;
	cin >> temperatura;
	cout << temperatura << " graus Celsius equivalem a " << fahrenheit(temperatura) << " graus Fahrenheit.";
}

double fahrenheit(double celsius) {
	return 1.8 * celsius + 32;
}