#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double x;
    for (int i = 1; i <= 5; i++) {
        cout << "Введіть значення x #" << i << ": ";
        cin >> x;
        double y = pow(sin(x), 5) + abs(5 * x - 1.5);
        cout << "Для x = " << x << ", y = " << y << endl;
    }
    
    return 0;
}
