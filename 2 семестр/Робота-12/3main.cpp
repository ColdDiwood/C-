#include <iostream>
#include <stdexcept>

using namespace std;

float internaldiv(float arg1, float arg2) {
    if (arg2 == 0.0) {
        throw runtime_error("Your input is not valid. You can't divide by zero.");
    }
    return arg1 / arg2;
}

int main(void) {
    float r, a, b;
    while (cin >> a) {
        cin >> b;
        try {
            r = internaldiv(a, b);
            cout << r << endl;
        } catch (const runtime_error& e) {
            cout << e.what() << endl;
        }
    }
    return 0;
}

================================================================================================
#include <iostream>
#include <stdexcept>

using namespace std;

float div(float arg1, float arg2) {
    if (arg2 == 0.0) {
        throw invalid_argument("Your input is not valid. You can't divide by zero.");
    }
    return arg1 / arg2;
}

int main(void) {
    float r, a, b;
    while (cin >> a) {
        cin >> b;
        try {
            r = div(a, b);
            cout << r << endl;
        } catch (const invalid_argument& e) {
            cout << e.what() << endl;
        }
    }
    return 0;
}
