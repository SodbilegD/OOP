#include "lab3.hh"
#include <iostream>

using namespace std;

int main()
{
        Fifo f(4);
        f.write('a');
        cout<< f.read() << endl;
        cout<< f.read() << endl;
        f.write('b');
        f.write('c');
        f.write('d');
        f.write('e');
        f.write('f');
        cout<< f.read() << endl;
        cout<< f.nitems() << endl;

        return 0;
}
