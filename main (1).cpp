#include <iostream>

using namespace std;

int main() {
    int n;
    int arr[n];
    int maxIndex = -1;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
        if (maxIndex == -1 || arr[i] > arr[maxIndex]) {
            maxIndex = i;
        }
    }

    for (int i = 0; i < maxIndex; ++i) {
        if (arr[i] < 0) {
            arr[i] = 0;
        }
    }

    for (int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
 
 


