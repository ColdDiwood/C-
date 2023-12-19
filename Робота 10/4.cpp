#include <iostream>

using namespace std;

int main() {
    const int arraySize = 5;
    int numbers[arraySize];
    int A;
    cout << "Введіть число A: ";
    cin >> A;
    cout << "Введіть елементи масиву:" << endl;
    for (int i = 0; i < arraySize; ++i) {
        cin >> numbers[i];
    }
    int countGreater = 0;
    for (int i = 0; i < arraySize; ++i) {
        if (numbers[i] > A) {
            countGreater++;
        }
    }
    cout << "Кількість елементів більших за " << A << ": " << countGreater << endl;
    return 0;
}
