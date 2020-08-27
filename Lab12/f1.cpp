#include <iostream>
using namespace std;

struct Chocolate {
	char marca[15];
	float peso;
	unsigned calorias;
};

int main() {
	Chocolate lanche = {"Charge", 2.3, 350};

	cout << "Marca: " << lanche.marca << endl;
	cout << "Peso: " << lanche.peso << " hg" << endl;
	cout << "Calorias: " << lanche.calorias << " kcal" << endl;

	return 0;
}