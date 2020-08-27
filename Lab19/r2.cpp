#include <iostream>
using namespace std;

int main() {
	int mat[3][2], tran[2][3];

	for (int i = 0; i < 3; i++)
		for (int j = 0; j < 2; j++)
			cin >> mat[i][j];

	for (int i = 0; i < 3; i++)
		for (int j = 0; j < 2; j++)
			tran[j][i] = mat[i][j];

	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
			cout << tran[i][j];
		cout << endl;
	}

	return 0;
}