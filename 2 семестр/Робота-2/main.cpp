#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    const int n = 5;
    int matrix[n][n];
    srand(time(NULL));
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            matrix[i][j] = rand() % 100;
        }
    }
    cout << "Двовимірний масив:\n";
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;

    cout << "Елементи на головній діагоналі: ";
    for (int i = 0; i < n; ++i) {
        cout << *(*(matrix + i) + i) << " ";
    }
    cout << endl;
    cout << "Елементи на побічній діагоналі: ";
    for (int i = 0; i < n; ++i) {
        cout << *(*(matrix + i) + (n - 1 - i)) << " ";
    }
    cout << endl;
    int even_count = 0, odd_count = 0;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (*(*(matrix + i) + j) % 2 == 0) {
                even_count++;
            } else {
                odd_count++;
            }
        }
    }

    cout << "Кількість парних елементів: " << even_count << endl;
    cout << "Кількість непарних елементів: " << odd_count << endl;

    return 0;
}

