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
    // Constructor to initialize the object with default values
    Birthday() : name("Default"), year(2000), month(1), day(1) {}

    // Constructor to initialize the object with custom values
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

    // Redefine the addition operator (+) for concatenation
    Birthday operator+(const Birthday& other) {
        Birthday result(name + " " + other.name, year + other.year, month + other.month, day + other.day);

        return result;
    }

    // Redefine the subtraction operator (-) to decrease year, month, and day
    Birthday operator-(int decrement) {
        Birthday result(name, year - decrement, month - decrement, day - decrement);

        // Handle underflow for month and day
        while (result.month < 1) {
            result.year--;
            result.month += 12;
        }
        while (result.day < 1) {
            result.month--;

            if (result.month < 1) {
                result.year--;
                result.month = 12;
            }

            if (result.month == 1 || result.month == 3 || result.month == 5 || result.month == 7 || result.month == 8 || result.month == 10 || result.month == 12) {
                result.day += 31;
            } else if (result.month == 2) {
                if (result.year % 4 == 0 && (result.year % 100 != 0 || result.year % 400 == 0)) {
                    result.day += 29;
                } else {
                    result.day += 28;
                }
            } else {
                result.day += 30;
            }
        }

        return result;
    }
};

int main() {
    // Create objects a and b
    Birthday a("John", 1990, 5, 15);
    Birthday b("amarjagarl", 2000, 3, 1);

    // Create object c by concatenating a and b
    Birthday c = a + b;

    // Decrease year, month, and day of c by 20
    c = c - 20;

    // Display the information of c
    c.print();

    return 0;
}
