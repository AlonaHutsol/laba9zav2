#include <iostream>
#include <cmath>
#include <iomanip>
#include <windows.h>
using namespace std;

int main() {
        SetConsoleCP(1251);
        SetConsoleOutputCP(1251);
    double a = -2.1, b = 2.5;
    int k;
    cout << "Введіть k: ";
    cin >> k;

    double h = (b - a) / k;

  
    cout << setw(10) << "x" << setw(20) << "y" << endl;
    cout << string(30, '-') << endl;

    for (int i = 0; i <= k; i++) {
        double x = a + i * h;
        double y = log(x * x + x + 2) / log(3); // зміна основи логарифма
        cout << fixed << setprecision(5)
            << setw(10) << x << setw(20) << y << endl;
    }

    return 0;
}
