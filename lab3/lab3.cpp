#include <string.h>
#include "lab3.hh"

// baiguulagch funct
Fifo::Fifo(int n) {
    // ugugdsun hemjeetei Fifo daraalal uusgej bn
    capacity = n;
    // n hemjeetei temdegt mur sanah oid shineer uusgej bn
    data = new char[capacity];
    // default utguud ugugdsun
    size = 0;
    front = 0;
    rear = 0;
}

Fifo::Fifo(Fifo &other)
{
    size = other.size;
    front = other.front;
    capacity = other.capacity;
    data = new char[capacity];
    for (int i = front; i < size; i++)
    {
        data[i] = other.data[i];
    }
}

Fifo::~Fifo()
{
    delete[] data; //sanah oig chuluulnu
}

//    * Дараалалд тэмдэгт оруулах гишүүн функц

void Fifo::write(char c) {
    // daraalal duureegui bol suuld
    // Шинээр оруулж буй тэмдэгт. Хэрэв дараалал дүүрээгүй бол `c` тэмдэгт дарааллын төгсгөлд нэмэгдэнэ.
    if (!isFull()) {
        data[rear] = c;
        rear = (rear + 1) % capacity;
        size++;
    }
    else {
        return;
    }
}

// void Fifo::copy(Fifo &other)
// {
//     Fifo copyData(other.size);
//     for (int i = 0; i < other.size; i++)
//     {
//         copyData.data[i] = other.data[(front + i) / other.capacity];
//     }
// }

//      * Дарааллаас тэмдэгт гаргах гишүүн функц
//Дарааллын эхэнд буй тэмдэгтийг буцаана.  Хэрэв дараалал хоосон бол  хоосон тэмдэгт `'\0'` буцаана.
char Fifo::read() {
    // hooson bish bol ehnii temdegtiig 
    if (!isEmpty()) {
        char frontChar;
        frontChar = data[front];
        front = (front + 1) % capacity;
        size--;
        return frontChar;
    }
    return '\0'; //hooson bol \0 butsaana
}

// Дарааллын тэмдэгтийн тоо буцаах гишүүн функц
int Fifo::nitems() {
    return size;
}

// void Fifo::initialize(Fifo &other)
// {
//     size = other.size;
//     data = new char[size];
// }

// hooson esehiig shaglgah
bool Fifo::isEmpty() const {
    return size == 0;
}

// duursen esehiig shalgah
bool Fifo::isFull() const {
    return size == capacity;
}
