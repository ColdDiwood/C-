#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main() {
    srand(time(0));
    const int size = 5;
    int arr[size];
    for (int i = 0; i < size; ++i) {
        arr[i] = rand() % 100;
        cout << arr[i] << " ";
    }
    int maxElement = 0;
    int secondMaxElement = 0;
    for (int i = 0; i < size; ++i) {
        if (arr[i] > maxElement) {
            secondMaxElement = maxElement;
            maxElement = arr[i];
        } else if (arr[i] > secondMaxElement && arr[i] != maxElement) {
            secondMaxElement = arr[i];
        }
    }
    cout << "\nSecond max element: " << secondMaxElement << std::endl;
    return 0;
}

