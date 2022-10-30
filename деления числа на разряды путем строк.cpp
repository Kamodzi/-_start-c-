

#include <iostream>

#include <vector>

#include <string>

using namespace std;


int main()
{	
	setlocale(LC_ALL, "Russian");

	vector < string > names{{"Первая","Вторая","Третья","Четвертая","Пятая"}};

	int number;

	cout << "Введите число " << endl;

	cin >> number;

	string  s_number = to_string(number);

	if (s_number.size() > names.size()) {

		cout << "Максимальное количество чисел: " << names.size() << '\n';

		return -1;

	}
	
	for (size_t i = 0; i < s_number.size(); i++) {

		cout << names[i] << " цифра числа " << s_number[i] << "\n";
	}
	return 0;
	

}

