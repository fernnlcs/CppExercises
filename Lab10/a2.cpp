#include <iostream>
using namespace std;

float mediaAntiga(float nota[], const float peso[]);
float mediaNova(float nota[]);

int main() {
	const float peso[3] = { 2.0, 3.0, 4.0 };
	float nota[3];

	cout << "Quais foram suas notas?" << endl;
	cout << "Nota 1: ";
	cin >> nota[0];
	cout << "Nota 2: ";
	cin >> nota[1];
	cout << "Nota 3: ";
	cin >> nota[2];

	cout << endl;

	cout << "Media na formula antiga: " << mediaAntiga(nota, peso) << endl;
	cout << "Media na formula nova: " << mediaNova(nota) << endl;

	return 0;
}

float mediaAntiga(float nota[], const float peso[]) {
	float media = (nota[0] * peso[0] + nota[1] * peso[1] + nota[2] * peso[2]) / (peso[0] + peso[1] + peso[2]);
	return media;
}

float mediaNova(float nota[]) {
	float media = float(nota[0] + nota[1] + nota[2]) / 3.0f;
	return media;
}