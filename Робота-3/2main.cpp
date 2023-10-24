#include <iostream>
#include <string>

using namespace std;

int main() {
    int trainNumber;
    cout << "Введіть номер поїзда: ";
    cin >> trainNumber;
    string departureStation;
    string destinationStation;
    switch (trainNumber) {
        case 1:
            departureStation = "Київ";
            destinationStation = "Львів";
            break;
        case 2:
            departureStation = "Одеса";
            destinationStation = "Харків";
            break;
        case 3:
            departureStation = "Дніпро";
            destinationStation = "Запоріжжя";
            break;
        default:
            cout << "Поїзд з номером " << trainNumber << " не знайдений." << std::endl;
            return 0;
    }

    cout << "Поїзд #" << trainNumber << " прямує з " << departureStation << " до " << destinationStation << std::endl;

    return 0;
}
