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

    // Redefine the equality operator (==)
    bool operator==(const Birthday& other) const {
        return name == other.name && year == other.year && month == other.month && day == other.day;
    }
};

int main() {
    cout << "Hello World" << endl;

    // Dynamic memory allocation for Birthday object
    Birthday* person1 = new Birthday("John", 1990, 5, 15);

    // Display the information using getter methods
    cout << "Original Information:" << endl;
    person1->print();

    // Use setter methods to change the values
    person1->setName("Alice");
    person1->setYear(2000);
    person1->setMonth(7);
    person1->setDay(30);

    // Display the modified information
    cout << "Modified Information:" << endl;
    person1->print();

    // Create another Birthday object
    Birthday person2("Alice", 2000, 7, 30);
    // Compare two Birthday objects using the equality operator
    if (*person1 == person2) {
        cout << "Person1 and Person2 have the same birthday." << endl;
    } else {
        cout << "Person1 and Person2 have different birthdays." << endl;
    }

    // Deallocate dynamic memory
    delete person1;

    return 0;
}
