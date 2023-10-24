#include <iostream>

using namespace std;

int main() {
    int product = 1;
    for (int number = 1; number <= 40; number++) {
        if (number % 4 == 0) {
            product *= number;
        }
    }
    cout << "Добуток чисел, кратних 4 і менше за 40, дорівнює " << product << endl;

    return 0;
}
