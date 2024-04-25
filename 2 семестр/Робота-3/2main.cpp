#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    const int n = 3, m = 3;

    int **matrix = new int*[n];
    for (int i = 0; i < n; ++i) {
        matrix[i] = new int[m];
    }

    srand(time(NULL));

    cout << "Заповнений масив:\n";
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            matrix[i][j] = rand() % 10;
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    cout << "Елементи на головній діагоналі: ";
    for (int i = 0; i < n; ++i) {
        cout << matrix[i][i] << " ";
    }
    cout << endl;

    cout << "Елементи на побічній діагоналі: ";
    for (int i = 0; i < n; ++i) {
        cout << matrix[i][n - 1 - i] << " ";
    }
    cout << endl;
    
    int even_count = 0, odd_count = 0;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            if (matrix[i][j] % 2 == 0) {
                even_count++;
            } else {
                odd_count++;
            }
        }
    }
    cout << "Кількість парних елементів: " << even_count << endl;
    cout << "Кількість непарних елементів: " << odd_count << endl;
    for (int i = 0; i < n; ++i) {
        delete[] matrix[i];
    }
    delete[] matrix;
    return 0;
}

