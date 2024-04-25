#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    int size;
    cout << "Введіть розмір масиву: ";
    cin >> size;
    double *array = new double[size];
    srand(time(NULL));
    for (int i = 0; i < size; ++i) {
        array[i] = -2 + static_cast<double>(rand()) / RAND_MAX * 4;
    }
    cout << "Масив:\n";
    for (int i = 0; i < size; ++i) {
        cout << array[i] << " ";
    }
    cout << endl;
    int positive_count = 0, negative_count = 0;
    for (int i = 0; i < size; ++i) {
        if (array[i] > 0) {
            positive_count++;
        } else if (array[i] < 0) {
            negative_count++;
        }
    }
    cout << "Кількість додатних чисел: " << positive_count << endl;
    cout << "Кількість від'ємних чисел: " << negative_count << endl;
    delete[] array;
    return 0;
}

