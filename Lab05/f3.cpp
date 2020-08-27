#include <iostream>
using namespace std;

float harmonica(float, float);

int main() {
	cout << "Entre com um numero: ";
	float num1, num2;
	cin >> num1;
	cout << "Entre com outro numero: ";
	cin >> num2;
	cout << "A media harminica dos numeros e " << harmonica(num1, num2);
}

float harmonica(float x, float y) {
	return (2 * x * y) / (x + y);
}