#include <iostream>

using namespace std;

int main() {
    int m;
    cin>>m;
    int arr[m];
    for (int i=0; i<m; i++){
        cin >> arr[i];
    } 
    for (int i = 0; i < m - 1; ++i) {
        for (int j = i + 1; j < m; ++j) {
            if (arr[i] > arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    cout << "The array is increasing: ";
    for (int i = 0; i < m; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < m - 1; ++i) {
        for (int j = i + 1; j < m; ++j) {
            if (arr[i] < arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    cout << "The array is shrinking: ";
    for (int i = 0; i < m; ++i) {
        cout << arr[i] << " ";
    }
    return 0;
}


