#include <iostream>
using namespace std;
//Должники
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
    cout  << p << "% людей не сдали дз. " << endl;
}
