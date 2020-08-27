#include <iostream>
using namespace std;

void UmTres(void);
void Dois(void);

int main() {
	cout << "Comecando agora!" << endl;
	UmTres();
	cout << endl << "Pronto!";
	return 0;
}

void UmTres(void) {
	cout << "Um ";
	Dois();
	cout << "Tres ";
}

void Dois(void) {
	cout << "Dois ";
}