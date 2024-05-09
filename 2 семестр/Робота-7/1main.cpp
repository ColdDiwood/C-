#include <iostream>
#include <string>
using namespace std;

class Person {
public:
    string name;
    int age;
    string gender;

    Person(string n, int a, string g) : name(n), age(a), gender(g) {}

    void print() {
        cout << name << " is " << age << " years old and is " << gender << endl;
    }
};

int main() {
    Person person("Harry", 23, "male");

    cout << "Meet " << person.name << endl;
    person.print();

    return 0;
}

