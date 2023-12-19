#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

const int m = 5;
const int n = 7;

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
    cout << "\nСума елементів кожного рядка:\n";
    for (int i = 0; i < m; ++i) {
        int rowSum = 0;
        for (int j = 0; j < n; ++j) {
            rowSum += myArray[i][j];
        }
        cout << "У рядку " << i << " сума елементів: " << rowSum << endl;
    }
    return 0;
}

