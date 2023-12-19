#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

const int m = 4;
const int n = 6;

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
    cout << "\nСума елементів кожного стовпчика:\n";
    for (int j = 0; j < n; ++j) {
        int colSum = 0;
        for (int i = 0; i < m; ++i) {
            colSum += myArray[i][j];
        }
        cout << "У стовпчику " << j << " сума елементів: " << colSum << endl;
    }
    return 0;
}

