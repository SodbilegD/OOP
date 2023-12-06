#include "lab3.hh"
#include "lab3.cpp"
#include <iostream>

using namespace std;

int main()
{
        Fifo f1(3);
        f1.write('a');
        cout<< f1.read() << endl;

        f1.write('b');
        f1.write('c');
        f1.write('d');

        Fifo f2(f1);
        cout<< f2.read() << endl;
        cout<< f2.read() << endl;

        cout<< f1.nitems() << endl;
        cout<< f2.nitems() << endl;

        return 0;
}
