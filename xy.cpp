#include <iostream>
using namespace std;
//Задание 1
int main()
{ 
	setlocale(0, "");
	double x1, y1, x2, y2;
	cout << "Введите координаты: " << endl;
	cout << "Введите x1: ";
	cin >> x1;
	cout << "Введите y1: ";
	cin >> y1;
	cout << "Введите x2: ";
	cin >> x2;
	cout << "Введите y2: ";
	cin >> y2;
	if (x1 == x2)
	{
		cout << "Ось x1 параллельна оси x2\n";
	}
	else if (y1 == y2)
	{
		cout << "Ось y1 параллельна оси y2\n";
	}
	else
	{
		cout << "Попробуй еще раз.\n";
	}
}


#include <iostream>
using namespace std;
//Задание 2
int main()
{
	setlocale(0, "");
	double num;
	cout << "Число: ";
	cin >> num;
	double answer = num - (int)num;
	if (answer == 0.0 || 0) {
		cout << "Число не имеет вещественной части \n ";
	}
	else {
		cout << "Число имеет вещественную часть \n ";
	}
}


#include <iostream>
using namespace std;
//Задание 3
int main()
{
	setlocale(0, "");
	int hours, min, sec;
	cout << "Введите количество часов: ";
	cin >> hours;
	cout << "Введите количество минут: ";
	cin >> min;
	cout << "Введите количество секунд: ";
	cin >> sec;
	if (hours >= 24 || min >= 60 || sec >= 60 || hours >= -1 || min >= -1 || sec >= -1) {
		cout << " Время правильно ;)\n \n";
	}
	else {
		cout << "Ошибка.Попробуйте снова! \n \n";
	}
}




#include <iostream>
using namespace std;
//Задание 4
int main()
{
	setlocale(0, "");
	int sn;
	cout << "Число с шестью символами: ";
	cin >> sn;
	int ft = (sn / 100000 % 10) + (sn / 10000 % 10) + (sn / 1000 % 10);
	int st = (sn / 100 % 10) + (sn / 10 % 10) + (sn % 10);
	if (ft == st) {
		cout << "Вы выиграли :) \n \n";
	}
	else {
		cout << "Вы ничего не выиграли :( \n \n";
	}
}


#include <iostream>
using namespace std;
//Задание 5
int main()
{
	setlocale(0, "");
	int time;
	cout << "Введите время:\n";
	cin >> time;
	if (time >= 0 && time <= 6) {
		cout << "Сладких снов!";
	}
	else if (time >= 7 && time <= 11) {
		cout << "Доброе утро :)";
	}
	else if (time >= 12 && time <= 16) {
		cout << "Добрый день :)";
	}
	else if (time >= 17 && time <= 21) {
		cout << "Добрейший вечерочек :)";
	}
	else {
		cout << "Беги спать! (уже поздно)";
	}

}
