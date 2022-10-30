

#include <iostream>

using namespace std;
int main()
{	
	setlocale(LC_ALL, "RUS");
	int num1, num2;
	cout << "Первое число ";
	cin >> num1;
	cout << "Второе число ";
	cin >> num2;

	if (num1 > num2) {

		cout << "Первое число больше"<< endl;
	}
	else if (num1 == num2) {

		cout << "Числа равны"<< endl;

	}
	
	else {

		cout << "Первое число меньше"<< endl;

	}
}
