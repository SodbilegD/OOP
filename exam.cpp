#include <iostream>
#include <string.h>
using namespace std;

class Birthday {
public:
    string name;
    int year;
    int month;
    int day;

    Birthday() {
        name = "Sodbileg.D";
        year = 2004;
        month = 2;
        day = 15;
    }

    Birthday(char *name, int year, int month, int day) {
        this->name = name;
        this->year = year;
        this->month = month;
        this->day = day;
    }
    
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
    
    void setName(const string& name) {
        this->name = name;
    }

    void setYear(int year) {
        this->year = year;
    }

    void setMonth(int month) {
        this->month = month;
    }

    void setDay(int day) {
        this->day = day;
    }
    void print(){
        cout << "Name: " << this->getName() << endl;
        cout << "Year: " << this->getYear() << endl;
        cout << "Month: " << this->getMonth() << endl;
        cout << "Day: " << this->getDay() << endl;
    }
};

int main() {
    Birthday birthday1;
    cout << birthday1.name << endl;
    cout << birthday1.year << endl;
    birthday1.setName("qwerty");
    birthday1.setYear(2000);
    birthday1.setMonth(1);
    birthday1.setDay(15);
    birthday1.print();
    
    string person_name = "name";
    Birthday birthday2 = new Birthday(person_name, 2004, 1, 1);
    strcat(birthday2.name, birthday1.name);
    if(birthday1.year >= birthday2.year){
        birthday2.year = birthday1.year;
    }
    birthday2.print();
    delete birthday2;
    return 0;
}

