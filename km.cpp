#include <iostream>
using namespace std;
int main()
{
	setlocale(0, "rus");
	cout << "Введите количество киллометров\n";
	double a, b;
	cin >> a;
	b = a * 0.621371;
	cout << "В милях = " << b << endl;
}
