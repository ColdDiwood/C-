#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    const int arraySize = 10;
    int numbers[arraySize];
    srand(static_cast<unsigned int>(time(0)));
    for (int i = 0; i < arraySize; ++i) {
        numbers[i] = rand() % 100;
    }
    cout << "Початковий масив: ";
    for (int i = 0; i < arraySize; ++i) {
        cout << numbers[i] << " ";
    }
    cout << endl;
    int minIndex = 0;
    int maxIndex = 0;
    for (int i = 1; i < arraySize; ++i) {
        if (numbers[i] < numbers[minIndex]) {
            minIndex = i;
        } else if (numbers[i] > numbers[maxIndex]) {
            maxIndex = i;
        }
    }
    swap(numbers[minIndex], numbers[maxIndex]);
    cout << "Оновлений масив: ";
    for (int i = 0; i < arraySize; ++i) {
        cout << numbers[i] << " ";
    }
    cout << endl;

    return 0;
}
