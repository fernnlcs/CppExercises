#include <iostream>
using namespace std;

int main() {
	float distancia, combustivel, consumo;

	cout << "Distância percorrida (km): ";
	cin >> distancia;
	cout << "Litros de combustivel: ";
	cin >> combustivel;

	consumo = distancia / combustivel;

	cout << "O consumo do seu carro foi de " << consumo << " km/L.";

	return 0;
}

/*
Resposta da questão:
Não. O resultado da divisão seria arredondado e perderia a precisão.
*/