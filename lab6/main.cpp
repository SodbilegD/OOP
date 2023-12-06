#include <iostream>
#include <vector>
#include "lab6.hh"
#include "lab6.cpp"

using namespace std;

int main()
{
        Shape *s1 = new Rectangle(2, 3);
        Shape *s2 = new Triangle(5, 6, 7);
        Shape *s3 = new Circle(4);

        vector<Shape*> mys;
        mys.push_back(s1);
        mys.push_back(s2);
        mys.push_back(s3);

        vector<Shape*>::iterator it;
        for(it = mys.begin(); it != mys.end(); it++){
                cout<< (*it)->area() << " "<< (*it)->perimeter() << endl;
        }

        //Output
        // 6 10
        // 14.69 18
        // 50.24 25.12
        return 0;
}
