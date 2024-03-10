#include <iostream>
#include <string>

using namespace std;

class Person {
private:
    string name;
    int age;
    char gender;
public:
    Person(string n, int a, char g) {
        name = n;
        age = a;
        gender = g;
    }
    void marriage() {
        if ((gender == 'M' || gender == 'm') && age >= 21) {
            cout << name << " is allowed to marry as per legal norms." << endl;
        } else if ((gender == 'F' || gender == 'f') && age >= 18) {
            cout << name << " is allowed to marry as per legal norms." << endl;
        } else {
            cout << name << " is not allowed to marry as per legal norms." << endl;
        }
    }
};
int main() {
    string name;
    int age;
    char gender;

    cout << "Enter person's name: ";
    cin >> name;
    cout << "Enter person's age: ";
    cin >> age;
    cout << "Enter person's gender (M/m for male, F/f for female): ";
    cin >> gender;
    Person person(name, age, gender);
    person.marriage();

    return 0;
}
