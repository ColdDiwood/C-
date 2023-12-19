#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

const int m = 3;
const int n = 3;

int main() {
    int myArray[m][n];
    srand(time(0));
    cout << "Згенерований масив " << m << "x" << n << ":\n";
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            myArray[i][j] = rand() % 100;
            cout << myArray[i][j] << " ";
        }
        cout << endl;
    }
    int mainDiagonalSum = 0;
    int secondaryDiagonalSum = 0;

    for (int i = 0; i < m; ++i) {
        mainDiagonalSum += myArray[i][i];
        secondaryDiagonalSum += myArray[i][n - 1 - i];
    }
    cout << "\nСума чисел по головній діагоналі: " << mainDiagonalSum << endl;
    cout << "Сума чисел по побічній діагоналі: " << secondaryDiagonalSum << endl;

    return 0;
}

