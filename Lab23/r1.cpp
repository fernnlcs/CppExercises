#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	ifstream fin;
	fin.open("pescado.txt");

	char nome[20];
	unsigned peso;
	float comp;

	unsigned total = 0;

	while (fin >> nome)
	{
		fin >> peso;
		fin >> comp;
		total += peso;
	}
	
	cout << "A peso de todos esses peixes juntos soma " << float(total)/1000 << " kg";

	fin.close();

	return 0;
}
