#include <iostream>
using namespace std;

struct Chocolate {
	char marca[15];
	float peso;
	unsigned calorias;
};

int main() {
	Chocolate vetor[3] = { {"KitKat", 150, 400}, {"Diamante Negro", 605.4, 1200}, {"m&m's", 100, 230.6} };
	
	cout << vetor[0].marca << " pesa " << vetor[0].peso << "g e possui " << vetor[0].calorias << "kcal." << endl;
	cout << vetor[1].marca << " pesa " << vetor[1].peso << "g e possui " << vetor[1].calorias << "kcal." << endl;
	cout << vetor[2].marca << " pesa " << vetor[2].peso << "g e possui " << vetor[2].calorias << "kcal." << endl;

	return 0;
}
