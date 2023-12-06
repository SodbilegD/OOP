#include "lab4.hh"
#include "lab4.cpp"
#include <iostream>

using namespace std;

int main()
{
        EngBut a, b;
        cin>>a; // 1/2
        cin>>b; // 2/5

        EngBut c(0, 1); // 0
        EngBut d(1, 1); // 1

        cout<< a + b << endl; // 9/10
        cout<< a * b << endl; // 1/10
        cout<< a - b << endl; // 1/5
        cout<< a / b << endl; // 5/4
        cout<< a + 1 << endl; // 3/2
        cout<< a - 2 << endl; // -3/2
        cout<< a * 3 << endl; // 3/2
        cout<< a / 4 << endl; // 1/8
        cout<< c - d << endl; // -1/1

        return 0;
}
