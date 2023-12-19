#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    const int arraySize = 5; 
    int myArray[arraySize];   
    srand(time(0));
    for (int i = 0; i < arraySize; ++i) {
        myArray[i] = rand() % 100;
    }
    cout << "Згенерований масив: ";
    for (int i = 0; i < arraySize; ++i) {
        cout << myArray[i] << " ";
    }
    cout << endl;
    int firstZeroIndex = -1;
    for (int i = 0; i < arraySize; ++i) {
        if (myArray[i] == 0) {
            firstZeroIndex = i;
            break;
        }
    }
    if (firstZeroIndex != -1) {
        cout << "Перший нульовий елемент масиву знаходиться під індексом: " << firstZeroIndex << endl;
    } else {
        cout << "Масив не містить нульових елементів." << endl;
    }
    return 0;
}


