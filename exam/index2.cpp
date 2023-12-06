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

    // Setter methods to modify private member variables
    void setName(string n) {
        name = n;
    }

    void setYear(int y) {
        year = y;
    }

    void setMonth(int m) {
        month = m;
    }

    void setDay(int d) {
        day = d;
    }

    // Display the birthday information
    void print() {
        cout << "Name: " << getName() << endl;
        cout << "Birthdate: " << getYear() << "/" << getMonth() << "/" << getDay() << endl;
    }
};

int main() {
    cout << "Hello World" << endl;

    // Create a Birthday object
    Birthday person1("John", 1990, 5, 15);

    // print the information using getter methods
    cout << "Original Information:" << endl;
    person1.print();

    // Use setter methods to change the values
    person1.setName("Alice");
    person1.setYear(2000);
    person1.setMonth(7);
    person1.setDay(30);

    // print the modified information
    cout << "Modified Information:" << endl;
    person1.print();

    return 0;
}
