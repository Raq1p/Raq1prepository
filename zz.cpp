#include <iostream>
using namespace std;
//Задание 1
int main()
{
	setlocale(0, "rus");
	int v, h;
	cout << "Введите ваш рост: ";
	cin >> h;
	cout << "Введите ваш вес: ";
	cin >> v;
	int girl = (h - 110);
	int man = (h - 100);
	cout << "Введите ваш пол: ";
	cin >> girl >> man;
	if (girl == v) {
		cout << "Идеальный вес";
	}
	else if (girl > v) {
		cout << "До идеального веса не хватает: " << girl - v << " килограммов.";
	}
	else if (girl - v) {
		cout << "Надо худеть :(";
	}
	else if (man == v) {
		cout << "Ты идеален :)";
	}
	else if (man > v) {
		cout << "До идеального веса не хватает: " << man - v << " килограммов.";
	}
	else if (man - v) {
		cout << "Надо худеть :(";
	}
}

\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\


#include <iostream>
using namespace std;
//Задание 2
int main()
{
	setlocale(0, "rus");
	int n, m;
	cout << "Введите число вашего дня рождения: ";
	cin >> n;
	cout << "Введите месяц вашего дня рождения: ";
	cin >> m;
	if ((n <= 21 && m >= 03) || (n <= 20 && m >= 04)) {
		cout << "Овен";
	}
	else if ((n <= 21 && m >= 04) || (n <= 21 && m >= 05)) {
		cout << "Телец";
	}
	else if ((n <= 22 && m >= 05) || (n <= 21 && m >= 06)) {
		cout << "Близнецы";
	}
	else if ((n <= 22 && m >= 06) || (n <= 22 && m >= 07)) {
		cout << "Рак";
	}
	else if ((n <= 23 && m >= 07) || (n <= 23 && m >= 8)) {
		cout << "Лев";
	}
	else if ((n <= 24 && m >= 8) || (n <= 23 && m >= 9)) {
		cout << "Дева";
	}
	else if ((n <= 24 && m >= 9) || (n <= 23 && m >= 10)) {
		cout << "Весы";
	}
	else if ((n <= 24 && m >= 10) || (n <= 22 && m >= 11)) {
		cout << "Скорпион";
	}
	else if ((n <= 23 && m >= 11) || (n <= 21 && m >= 12)) {
		cout << "Стрелец";
	}
	else if ((n <= 22 && m >= 12) || (n <= 20 && m >= 01)) {
		cout << "Козерог";
	}
	else if ((n <= 21 && m >= 01) || (n <= 19 && m >= 02)) {
		cout << "Водолей";
	}
	else if ((n <= 20 && m >= 02) || (n <= 20 && m >= 03)) {
		cout << "Рыбы";
	}

}
