#include <iostream>
#include <vector>
using namespace std;

bool isLeap(int year) {
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        return true;
    } else {
        return false;
    }
}

int monthLengthSwitch(int year, int month) {
    switch (month) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            return 31;
        case 4: case 6: case 9: case 11:
            return 30;
        case 2:
            return isLeap(year) ? 29 : 28;
        default:
            return -1;
    }
}

int monthLengthVector(int year, int month) {
    vector<int> month_lengths = {31, isLeap(year) ? 29 : 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if (month >= 1 && month <= 12) {
        return month_lengths[month - 1];
    } else {
        return -1;
    }
}

int main() {
    for (int yr = 2000; yr < 2002; yr++) {
        for (int mo = 1; mo <= 12; mo++) {
            cout << monthLengthSwitch(yr, mo) << " ";
        }
        cout << endl;
    }

    cout << endl;

    for (int yr = 2000; yr < 2002; yr++) {
        for (int mo = 1; mo <= 12; mo++) {
            cout << monthLengthVector(yr, mo) << " ";
        }
        cout << endl;
    }

    return 0;
}
