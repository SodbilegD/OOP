template <typename TYPE>
class Fifo {
private:
    TYPE* queue;
    int size;
    int front;
    int rear;
    int itemCount;

public:
    Fifo(int n) {
        size = n;
        queue = new TYPE[n];
        front = 0;
        rear = -1;
        itemCount = 0;
    }

    ~Fifo() {
        delete[] queue;
    }

    void write(TYPE t) {
        if (!isFull()) {
            rear = (rear + 1) % size;
            queue[rear] = t;
            itemCount++;
        }
    }

    TYPE read() {
        if (!isEmpty()) {
            TYPE data = queue[front];
            front = (front + 1) % size;
            itemCount--;
            return data;
        }
        return TYPE();  // daraalal hooson bol default utgiig butsaana
    }

    int items() {
        return itemCount;
    }

    bool isFull() {
        return itemCount == size;
    }

    bool isEmpty() {
        return itemCount == 0;
    }
};