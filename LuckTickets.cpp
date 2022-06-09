#include <iostream>
using namespace std;

int ticket()
{
    int sum = 0;
    int a, b, c;
    char bilet[6];
    for (a = 0; a <= 999999; a++) {
        for (c = a, b = 0; b < 6; b++, c /= 10) {
            bilet[b] = c % 10;
        }
        if (bilet[0] + bilet[2] + bilet[4] == bilet[1] + bilet[3] + bilet[5]) {
            ++sum;
        }
    }
    return sum;
}

int main()
{
    setlocale(0, "rus");
    int c = ticket();
    cout << "Всего счастливых билетов: " << c << endl;
}
