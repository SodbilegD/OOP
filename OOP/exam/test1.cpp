#include <iostream>
using namespace std;


int a = 1, b = 2;
int main(){
    void get(int, int&);
    get(a,b);
    cout<< a << b ;
}
// 1, 2
// b = 1, y = 2
void get(int x, int& y){
    b = x;
    y += b;
    x = y;
    cout << x << y << b << endl;
}