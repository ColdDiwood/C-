#include <iostream>

using namespace std;

int main() {
    int N;
    cout << "Введіть натуральне число N: ";
    cin >> N;
    int product = 1;
    while (N > 0) {
        int digit = N % 10;  
        if (digit % 2 != 0) {
            product *= digit; 
        }
        N /= 10;  
    }
    if (product == 1) {
        cout << "У числі немає непарних цифр." << endl;
    } else {
        cout << "Добуток непарних цифр числа N: " << product << endl;
    }
    return 0;
}


