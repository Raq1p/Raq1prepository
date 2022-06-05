#include <iostream>
#include <cmath>
using namespace std;
//Задание 1
int main()
{
    setlocale(0, "rus");
    double number;
    cout << "Введите дробное число: ";
    cin >> number;
    number = round(number * 100) / 100;
    cout << "Круглое число: " << number << endl;
}


#include <iostream>
using namespace std;
//Задание 2
int main() {
    setlocale(0, "rus");
    int d, n;
    double p;
    cout << "Введите число должников: ";
    cin >> n;
    cout << "Введите число сдающих дз: ";
    cin >> d;
    p = ((double)n / (n + d)) * 100;
    p = round(n * 100) / 100;
    cout << p << "% людей не сдали дз. " << endl;
}


#include <iostream>
using namespace std;
//Задание 3
int main() {
    setlocale(0, "");
    double x;
    int hours, mins, secs, c;
    cout << "Введите количество секунд ";
    cin >> x;
    c = 86400 - x;
    hours = (c - c % 3600) / 3600;
    mins = (c - c % 60) / 60 - hours * 60;
    secs = c - mins * 60 - hours * 3600;
    cout << hours << " часов " << mins << " минут " << secs << " и секунд осталось до полуночи" << endl;
}



#include <iostream>
using namespace std;
//Задание 4
int main() {
    setlocale(0, "");
    double sum, ir, end_sum;
    int months;
    cout << "Введите число в грн: ";
    cin >> sum;
    cout << "Введите срок депозита за месяц: ";
    cin >> months;
    cout << "Введите процентную ставку за год: ";
    cin >> ir;
    end_sum = sum + sum * ir * months / 12 / 100;
    cout << "После " << months << " вы получите " << end_sum << " гривен." << endl;
}
