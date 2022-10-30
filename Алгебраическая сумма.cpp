

#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	setlocale(0, "");
	double Z, B, A, Betta, x, X, Y = 0;
	cout << "Введите количество иксов" << endl;
	cin >> X;

	for (int i = 0; i < X; i++) {

		cout << "Введите значения Z B A Betta for X " << i + 1 << endl;

		cout << "Z = ";
		cin >> Z;
		cout << "B = ";
		cin >> B;
		cout << "A = ";
		cin >> A;
		cout << "Betta = ";
		cin >> Betta;

		x = pow(Z, 3) - B + pow(A, 2) / pow(tan(Betta), 2);

		Y += x;





	}

	cout << Y << endl;
}

