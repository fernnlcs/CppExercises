#include <iostream>
using namespace std;

int main() {
	float distancia, combustivel, consumo;

	cout << "Dist�ncia percorrida (km): ";
	cin >> distancia;
	cout << "Litros de combustivel: ";
	cin >> combustivel;

	consumo = distancia / combustivel;

	cout << "O consumo do seu carro foi de " << consumo << " km/L.";

	return 0;
}

/*
Resposta da quest�o:
N�o. O resultado da divis�o seria arredondado e perderia a precis�o.
*/