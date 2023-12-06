#include <iostream>
#include <string.h>
using namespace std;

class Point
{
private:
    /* data */
    char *name;
    int x, y;
public:
    Point();
    Point(int _x, int _y, char *n);
    Point(Point &b);
    ~Point();
    int getX();
    int getY();
    void setX(int _x);
    void setY(int _y);
    void setName(char *n);
    char* getName();
};

Point::Point()
{
    this->name = "anhnii tseg";
    this->x = 0;
    this->y = 0;
}

Point::Point(int x, int y, char *name){
    this->name = name;
    this->x = x;
    this->y = y;
}

Point::Point(Point &b){
    this->name = b.name;
    this->x = b.x;
    this->y = b.y;
}

Point::~Point()
{
    delete[] name;
}
int Point::getX(){
    return x;
}

int Point::getY()
{
    return y;
}

void Point::setX(int _x){
    x = _x;
}

void Point::setY(int _y)
{
    y = _y;
}
void Point::setName(char *n){
    strcpy(this->name, n);
}
char* Point::getName(){
    return name;
}

int main(){

        Point p1;
        Point p2(1, 2, "aliishu");
        Point p3(Point& p2);

        cout << p2.getX() << endl;
        cout << p2.getY() << endl;
        p1.setX(10);
        p1.setY(11);
        p1.setName("Sodoo");
        p1.getName();

        return 0;  
}