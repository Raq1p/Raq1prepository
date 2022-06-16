#include <iostream> 
using namespace std;
//Задание с дракошей
int main()
{
    setlocale(0, "rus");
    cout << "Добро пожаловать в игру +_+" << endl;
    int hp_kop;
    cout << "Ввести hp копейщику: ";
    cin >> hp_kop;
    int hp_dr;
    cout << "Ввести hp дракоше: ";
    cin >> hp_dr;
    int ad;
    cout << "Ввести урон дракоши: ";
    cin >> ad;
    int akop;
    cout << "Ввести урон копейщика: ";
    cin >> akop;
    int num_kop;
    cout << "Введите количество копейщиков: ";
    cin >> num_kop;

    int sum_at = akop * num_kop;
    int f_hp = hp_kop * num_kop;
    int hp_j;
    while (true) { 
        sum_at = akop * num_kop;
        hp_dr -= sum_at;
        if (hp_dr <= 0) {
            cout << "Копейщики победили";
            break;
        }
        else {
            cout << "Копейщики атакуют!!! " << sum_at << " урона нанесли дракоше." << " У дракоши осталось - " << hp_dr << "hp" << endl;
        }

        if ((f_hp - ad) % hp_kop == 0) {
            num_kop = (f_hp - ad) / hp_kop;
            f_hp = hp_kop * num_kop;
            if (f_hp <= 0) {
                cout << "Дракоша атакует и побеждает ";
                break;
            }
            else {
                cout << "Дракоша атаковал на " << ad << "hp" << " Осталось  копейщиков: " << num_kop << endl;
            }
        }
        else {
            hp_j = hp_kop - (f_hp - ad) % hp_kop;
            num_kop = (f_hp - ad - hp_j) / hp_kop + 1;
            f_hp = hp_kop * num_kop - hp_j;
            if (f_hp <= 0) {
                cout << "Дракоша атакует и побеждает ";
                break;
            }
            else {
                cout << "Дракоша атаковал на " << ad << "hp" << " Осталось копейщиков: " << num_kop << " У ранненого  " << hp_j << "hp" << endl;
            }
        }
    }
}
