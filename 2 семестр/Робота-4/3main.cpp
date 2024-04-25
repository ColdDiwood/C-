#include <iostream>
#include <ctime>
using namespace std;

struct Date {
    int year;
    int month;
    int day;
};

Date today() {
    time_t now = time(NULL);
    tm *ltm = localtime(&now);

    Date current_date;
    current_date.year = 1900 + ltm->tm_year;
    current_date.month = 1 + ltm->tm_mon;
    current_date.day = ltm->tm_mday;

    return current_date;
}

int daysBetweenDates(const Date& date1, const Date& date2) {
    return abs(date2.day - date1.day);
}

int main() {
    Date current_date = today();
    cout << "Поточна дата: " << current_date.year << "-" << current_date.month << "-" << current_date.day << endl;

    Date birth_date;
    cout << "Введіть день народження:" << endl;
    cout << "Рік: ";
    cin >> birth_date.year;
    cout << "Місяць: ";
    cin >> birth_date.month;
    cout << "День: ";
    cin >> birth_date.day;

    cout << "Кількість днів з вашого народження: ";
    cout << daysBetweenDates(birth_date, current_date) << endl;
    return 0;
}


