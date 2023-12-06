#ifndef LAB3_HH
#define LAB3_HH

class Fifo{

    public:
        Fifo(int);
        Fifo(Fifo &other);
        // void copy(Fifo &other);
        ~Fifo();
        void write(char);
        char read();
        int nitems();
        // void initialize(Fifo &other);

    private:
        /* data */
        int capacity;   // nuutsluj boloh hemjee
        char* data;     // nuutsulsun temdegt ugugdul
        int size;       // daraalald bui temdegtiin hemjee
        int front;      // daraalliin ehnii index
        int rear;       // daraallin suuliin index
        bool isEmpty() const; // hooson eshiig shalgana
        bool isFull() const;  // Duuren esehiig shalgana

};
#endif
