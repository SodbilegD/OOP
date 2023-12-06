#include <iostream>
#include "lab5.cpp"

using namespace std;

int main()
{
        Fifo<int> fi(3);
        Fifo<char> fc(3);

        fi.write(3);
        fi.write(5);
        fi.write(7);
        fc.write('a');
        fc.write('b');
        fc.write('c');
        cout<< fi.read() << endl; // 3
        cout<< fc.read() << endl; // a

        return 0;
}
