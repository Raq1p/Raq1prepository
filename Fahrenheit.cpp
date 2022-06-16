#include <iostream>

using namespace std;

//Задание 1

int main()
{
	setlocale(0, "rus");

	int s;
	int e;

	double a;

	cout << "Любой диапазон от: ";
	cin >> s;
	cout << "До:";
	cin >> e;
	while (s <= e)
	{
		a = (s * 1.8) + 32;
		cout << s << "\t" << a << "\n";
		s++;
	}
}


\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\


#include <iostream>

using namespace std;

//Задание 2

int main()
{
	setlocale(0, "rus");

	int n, b, c = 0;

	cout << "Введите число: ";
	cin >> n;

	while (n != 0)
	{
		b = n % 10;
		c = c * 10 + b;
		n /= 10;
	}
	cout << "Ваше перевернутое число --> " << c << "\n";
}




\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\



#include <iostream>

using namespace std;

//Задание 3

int main()
{
	setlocale(0, "rus");

	int n;
	int n2;

	cout << "Введите число: ";
	cin >> n;

	n2 = n;

	while (n2 != 0)
	{
		if (n % n2 == 0)
		{
			cout << n2 << " ";
		}
		n2--;
	}
}
