#include <iostream>
#include <cstring>
using namespace std;
class Birthday {
private:
    char* name;
    int year;
    int month;
    int day;

public:
    // Default constructor
    Birthday() {
        name = new char[strlen("Sodbileg") + 1];
        strcpy(name, "Sodbileg");
        year = 2000; // Replace with your birth year
        month = 1;   // Replace with your birth month
        day = 1;     // Replace with your birth day
    }

    // Parameterized constructor
    Birthday(const char* _name, int _year, int _month, int _day) {
        name = new char[strlen(_name) + 1];
        strcpy(name, _name);
        year = _year;
        month = _month;
        day = _day;
    }

    // Getter functions
    const char* getName() const { return name; }
    int getYear() const { return year; }
    int getMonth() const { return month; }
    int getDay() const { return day; }

    // Setter functions
    void setName(const char* _name) {
        delete[] name;
        name = new char[strlen(_name) + 1];
        strcpy(name, _name);
    }
    void setYear(int _year) { year = _year; }
    void setMonth(int _month) { month = _month; }
    void setDay(int _day) { day = _day; }

    // Print function
    void print() const {
        cout << "Name: " << name << endl;
        cout << "Birth Date: " << year << "-" << month << "-" << day << endl;
    }

    // Concatenation operator
    Birthday operator+(const Birthday& other) const {
        char* concatName = new char[strlen(name) + strlen(other.name) + 1];
        strcpy(concatName, name);
        strcat(concatName, other.name);
        
        Birthday result(concatName, other.year, other.month, other.day); // Year, month, and day are not important here.
        return result;
        // delete[] concatName;
    }

    // Assignment operator
    Birthday& operator=(const Birthday& other) {
        if (this == &other) {
            return *this;
        }
        name = new char[strlen(other.name) + 1];
        strcpy(name, other.name);
        year = other.year;
        month = other.month;
        day = other.day;
        return *this;
    }

    // Subtraction operator
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
                result.day += 30;
        }

        return result;
    }

    // Destructor
    ~Birthday() {
        delete[] name;
    }
};

int main() {
    // Create objects
    Birthday a;  // Default constructor
    Birthday b("Amarjargal", 2003, 10, 20); // Parameterized constructor
    Birthday c;

    // Concatenate a and b, storing the result in c
    c = a + b;

    // Subtract 20 days from the year of object c
    c = c - 20;

    // Print the result
    c.print();

    return 0;
}