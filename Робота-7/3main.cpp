#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Введіть ціле число більше 0: ";
    cin >> n;

    if (n <= 1) {
        cout << "Помилка. Введене число дорівнює 1." << endl;
        return 1;
    }
    if (n > 20) {
        cout << "Введене число занадто велике. Введіть будь-ласка менше ніж: " << 20 << "." << endl;
        return 1;
    }

    cout << '+';
    for (int i = 0; i < n; i++) {
        cout << '-';
    }
    cout << '+' << endl;

    for (int i = 0; i < n; i++) {
        cout << '|';
        for (int j = 0; j < n; j++) {
            cout << ' ';
        }
        cout << '|' << endl;
    }
    cout << '+';
    for (int i = 0; i < n; i++) {
        cout << '-';
    }
    cout << '+' << endl;
    return 0;
}