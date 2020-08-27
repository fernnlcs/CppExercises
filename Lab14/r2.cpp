#include <iostream>
using namespace std;

int main() {
	float torque[] = {2.5, 8.1, 3.4, 9.2, 5.7, 9.6, 6.3, 8.0, 5.4, 4.9};
	float* ponteiro = torque;

	cout << "Primeiro: " << *ponteiro << endl;

	ponteiro = &torque[9];

	cout << "Ultimo: " << *ponteiro;

	return 0;
}