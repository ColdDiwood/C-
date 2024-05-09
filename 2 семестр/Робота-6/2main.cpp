#include <string>
#include <iostream>
#include <cctype>

using namespace std;

bool isValidPassword(const string& password) {
    if (password.length() < 8) {
        cout << "Пароль повинен містити 8 символів" << endl;
        return false;
    }
    
    bool hasUpperCase = false;
    bool hasLowerCase = false;
    bool hasDigit = false;
    bool hasSpecialChar = false;

    for (char ch : password) {
        if (isupper(ch))
            hasUpperCase = true;
        else if (islower(ch))
            hasLowerCase = true;
        else if (isdigit(ch))
            hasDigit = true;
        else if (!isalnum(ch))
            hasSpecialChar = true;
    }

    if (!hasUpperCase)
        cout << "Пароль повинен містити хоча б одну велику літеру" << endl;
    if (!hasLowerCase)
        cout << "Пароль повинен містити хоча б одну маленьку літеру" << endl;
    if (!hasDigit)
        cout << "Пароль повинен містити хоча б одну цифру" << endl;
    if (!hasSpecialChar)
        cout << "Пароль повинен містити хоча б один спеціальний символ" << endl;
    
    return hasUpperCase && hasLowerCase && hasDigit && hasSpecialChar;
}

int main() {
    string password;
    getline(cin, password);
    
    if (isValidPassword(password))
        cout << "Пароль валідний" << endl;
    
    return 0;
}

