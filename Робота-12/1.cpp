#include <iostream>

using namespace std;

struct Date {
    int hours;
    int minutes;
};

int main() {
    Date startTime;

    cout << "Введіть години: ";
    cin >> startTime.hours;

    cout << "Введіть хвилини: ";
    cin >> startTime.minutes;

    int elapsedMinutes;
    cout << "Введіть кількість хвилин, які пройшли: ";
    cin >> elapsedMinutes;

    startTime.hours += elapsedMinutes / 60;
    startTime.minutes += elapsedMinutes % 60;

    if (startTime.minutes >= 60) {
        startTime.hours += startTime.minutes / 60;
        startTime.minutes %= 60;
    }

    if (startTime.hours >= 24) {
        startTime.hours %= 24;
    }

    cout << "Оновлений час: ";
    cout << (startTime.hours < 10 ? "0" : "") << startTime.hours << ":";
    cout << (startTime.minutes < 10 ? "0" : "") << startTime.minutes << endl;

    return 0;
}

