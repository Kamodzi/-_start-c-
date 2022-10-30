

#include <iostream>

using namespace std;

int main()
{
	char  chLetter('a');


	setlocale(LC_ALL, "Russian");

	cout << "Введите букыу нижнего регистра" << endl;

	cin >> chLetter;

	chLetter = chLetter - 32;

	cout << "Эта же буква в новом регистре\n" << chLetter << endl;
	
	return 0;





}