#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double a, b, h;
    cout << "Введіть початок відрізку a: ";
    cin >> a;
    cout << "Введіть кінець відрізку b: ";
    cin >> b;
    cout << "Введіть крок h: ";
    cin >> h;
    cout << "-------------------" << endl;
    cout << ":   X   :   Y   :" << endl;
    cout << "-------------------" << endl;

    double x = a;
    while (x <= b) {
        if (sin(x) >= 0) {
            double y = sqrt(sin(x)) + pow(x, 2);
            cout << ": " << x << " : " << y << " :" << endl;
        } else {
            cout << "Значення x = " << x << " не належить ОДЗ функції." << endl;
        }

        x += h;
    }

    cout << "-------------------" << endl;

    return 0;
}

