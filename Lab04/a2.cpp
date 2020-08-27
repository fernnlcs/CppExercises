#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
using namespace std;

int main() {
	cout << "Digite um angulo: ";
	float x;
	cin >> x;
	x = (x * M_PI) / 180;
	cout << "Seno = " << sin(x);
	return 0;
}