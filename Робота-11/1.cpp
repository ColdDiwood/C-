#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

const int m = 4;
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
    for (int i = 0; i < m; ++i) {
        int evenCount = 0;
        for (int j = 0; j < n; ++j) {
            if (myArray[i][j] % 2 == 0) {
                evenCount++;
            }
        }
        cout << "У рядку " << i << " кількість парних чисел: " << evenCount << endl;
    }
    return 0;
}

