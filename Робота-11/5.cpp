#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

const int m = 3;
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
    int maxElement = myArray[0][0];
    int rowIndex = 0;
    int columnIndex = 0;

    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            if (myArray[i][j] > maxElement) {
                maxElement = myArray[i][j];
                rowIndex = i;
                columnIndex = j;
            }
        }
    }
    cout << "\nМаксимальний елемент: " << maxElement << endl;
    cout << "Його розташування (індекси): рядок " << rowIndex << ", стовпець " << columnIndex << endl;

    return 0;
}
