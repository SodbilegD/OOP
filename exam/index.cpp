#include <iostream>
#include <string>

using namespace std;

class Birthday {
private:
    string name;
    int year;
    int month;
    int day;

public:
    // Constructor to initialize the object
    Birthday(string n, int y, int m, int d) : name(n), year(y), month(m), day(d) {}

    // Getter methods to access private member variables
    string getName() const {
        return name;
    }

    int getYear() const {
        return year;
    }

    int getMonth() const {
        return month;
    }

    int getDay() const {
        return day;
    }

    // Display the birthday information
    void display() {
        cout << "Name: " << getName() << endl;
        cout << "Birthdate: " << getYear() << "/" << getMonth() << "/" << getDay() << endl;
    }
};

int main() {
    cout << "Hello World" << endl;
    
    // Get input from the user
    string name;
    int year, month, day;

    cout << "Enter name: ";
    cin >> name;
    cout << "Enter year: ";
    cin >> year;
    cout << "Enter month: ";
    cin >> month;
    cout << "Enter day: ";
    cin >> day;

    // Create a Birthday object
    Birthday person1(name, year, month, day);

    // Display the information using getter methods
    cout << "Using getter methods:" << endl;
    cout << "Name: " << person1.getName() << endl;
    cout << "Birthdate: " << person1.getYear() << "/" << person1.getMonth() << "/" << person1.getDay() << endl;

    return 0;
}
