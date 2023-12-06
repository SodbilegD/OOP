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

    // Redefine the subtraction operator (-) to decrease the day
    Birthday operator-(int decrement) {
        Birthday result(*this);  // Create a copy of the current object
        result.day -= decrement;

        // Handle underflow for month and day
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
    cout << "Hello World" << endl;

    // Create a Birthday object
    Birthday person1("John", 1990, 5, 15);

    // Display the information using getter methods
    cout << "Original Information:" << endl;
    person1.print();

    // Use the decrement operator to decrease the day
    Birthday person2 = person1 - 5; // Decrease the day by 5 days

    // Display the modified information
    cout << "Decreased Information:" << endl;
    person2.print();

    return 0;
}
