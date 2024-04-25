#include <iostream>
using namespace std;

int main(void) {
    int n;
    cout << "Введіть розмір масиву: ";
    cin >> n;
    int arr[n];
    cout << "Введіть елементи масиву:\n";
    for (int i = 0; i < n; ++i) {
        cout << "Елемент " << i + 1 << ": ";
        cin >> arr[i];
    }
    int *min = arr;
    for (int i = 1; i < n; ++i) {
        if (*(arr + i) < *min) {
            min = arr + i;
        }
    }
    cout << "Мінімальний елемент масиву: " << *min << endl;
    return 0;
}
