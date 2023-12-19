#include <iostream>

using namespace std;

struct Date {
    int hours;
    int minutes;
};

int main() {
    Date startTime, endTime, duration;

    cout << "Введіть години та хвилини початку події (години хвилини): ";
    cin >> startTime.hours >> startTime.minutes;

    cout << "Введіть години та хвилини завершення події (години хвилини): ";
    cin >> endTime.hours >> endTime.minutes;

    duration.hours = endTime.hours - startTime.hours;
    duration.minutes = endTime.minutes - startTime.minutes;

    if (duration.minutes < 0) {
        duration.hours -= 1;
        duration.minutes += 60;
    }

    if (duration.hours < 0) {
        duration.hours += 24;
    }

    cout << "Тривалість події: ";
    cout << (duration.hours < 10 ? "0" : "") << duration.hours << ":";
    cout << (duration.minutes < 10 ? "0" : "") << duration.minutes << endl;

    return 0;
}

