#include <iostream>
using namespace std;
//Задание 1
int main()
{
	setlocale(0, "");
	char s;
	cout << "Введите ваш символ :";
	cin >> s;
	if (static_cast<int>(s) >= 48 && static_cast<int>(s) <= 57) {
		cout << "Это цифра \n \n";
	}
	else if (s == 'a' || s == 'b' || s == 'c' || s == 'd' ||
		s == 'e' || s == 'f' || s == 'g' || s == 'h' ||
		s == 'i' || s == 'j' || s == 'k' || s == 'l' ||
		s == 'm' || s == 'n' || s == 'o' || s == 'p' ||
		s == 'q' || s == 'r' || s == 's' || s == 't' ||
		s == 'u' || s == 'v' || s == 'w' || s == 'x' ||
		s == 'y' || s == 'z' || s == 'A' || s == 'B' || 
		s == 'C' || s == 'D' || s == 'E' || s == 'F' || 
		s == 'G' || s == 'H' || s == 'I' || s == 'J' || 
		s == 'K' || s == 'L' || s == 'M' || s == 'N' || 
		s == 'O' || s == 'P' || s == 'Q' || s == 'R' || 
		s == 'S' || s == 'T' || s == 'U' || s == 'V' || 
		s == 'W' || s == 'X' || s == 'Y' || s == 'Z') {
		cout << "Это английская буква \n \n";
	}
	else {
		cout << "Это не буква и не цифра! Вводите английские буквы.\n \n";
	}
}



#include <iostream>
using namespace std;
//Задание 2
int main()
{
	setlocale(0, "");

	int c;
	cout << "Введите свое число :";
	cin >> c;


	if (c % 3 == 0 && c % 5 == 0 && c% 7 == 0) {
		cout << "Это число кратно 3, 5 и 7. \n \n";
	}
	else {
		cout << "Ошибка! Попройбе снова. \n \n";
	}
}





#include <iostream>
using namespace std;
//Задание 3
int main()
{
	setlocale(0, "");
	int s;
	cout << "Число с четырьмя максимальными разрядными: ";
	cin >> s;
	if (s >= 1000 && s <= 9999) {
		cout << "Число с четырьмя разрядами\n \n";
	}
	else if (s >= 100 && s <= 999) {
		cout << "Число с тремя разрядами\n \n";
	}
	else if (s >= 10 && s <= 99) {
		cout << "Число с двумя разрядами\n \n";
	}
	else if (s >= 0 && s <= 9) {
		cout << "Число с одним разрядом\n \n";
	}
}




#include <iostream>
using namespace std;
//Задание 4
int main()
{
	setlocale(0, "");
	int p;
	cout << "Введите пятиразрядное число: ";
	cin >> p;
	if (p / 10000 % 10 == p % 10 && p / 10 % 10 == p / 1000 % 10) {
		cout << " Это палиндром :)\n \n";
	}
	else {
		cout << " Это не палиндром ;)\n \n";
	}
}




