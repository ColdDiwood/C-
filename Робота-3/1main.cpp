// Example program
#include <iostream>

using namespace std;

int main() {
    int N;
    cout << "Введіть трьохзначне додатнє число N: ";
    cin >> N;
    int digit1 = N / 100;
    int digit2 = (N / 10) % 10;
    int digit3 = N % 10;  
    int sum = 0;
    if (digit1 > 5) {
        sum += digit1;
    }
    if (digit2 > 5) {
        sum += digit2;
    }
    if (digit3 > 5) {
        sum += digit3;
    }
    cout << "Сума цифр числа " << N << ", які більші за 5, дорівнює " << sum << endl;
    return 0;
}
