

#include <iostream>

using namespace std;

int main()
{
	setlocale(0, "");
	
	int N, k, x = 0;

	cout << " Введите число N ";
	cin >> N;
	cout << " Введите число k ";
	cin >> k;

	
	for (int i = 0; i <= N; i++) 
	{

		x += pow(i, k);
		
	 }
	cout << x << endl;

}


