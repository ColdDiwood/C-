#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

const int m = 6;
const int n = 4;

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
    cout << "\nКількість парних чисел у кожному стовпчику:\n";
    for (int j = 0; j < n; ++j) {
        int evenCount = 0;
        for (int i = 0; i < m; ++i) {
            if (myArray[i][j] % 2 == 0) {
                evenCount++;
            }
        }
        cout << "У стовпчику " << j << " кількість парних чисел: " << evenCount << endl;
    }
    return 0;
}

