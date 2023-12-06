#ifndef LAB4_HH
#define LAB4_HH
#include <iostream>
#include<bits/stdc++.h>
#include <iostream>
#include <algorithm>
using namespace std;

class EngBut{



    private:
        /* data */
        int hurtver;
        int huvaari;
        
    public:

        EngBut();
        EngBut(int, int);
        // EngBut simplify(){
        //     int common = __gcd(hurtver, huvaari);
        //     return EngBut(hurtver / common, huvaari / common);
        // }
        friend istream& operator>>(istream& in, EngBut& a) {
            char separator;
            in >> a.hurtver >> separator >> a.huvaari;
            return in;
        }
        friend ostream& operator<<(ostream& out, const EngBut& a) { 
            // EngBut simplified = a.simplify();
            int common = __gcd(a.hurtver, a.huvaari);
            out << a.hurtver / common << '/' << a.huvaari / common;
            return out;
        }
        EngBut operator+(const EngBut& b) const {
            return EngBut(hurtver * b.huvaari + b.hurtver * huvaari, huvaari * b.huvaari);
        }

        EngBut operator-(const EngBut& b) const {
            return EngBut(hurtver * b.huvaari - b.hurtver * huvaari, huvaari * b.huvaari);
        }

        EngBut operator*(const EngBut& b) const {
            return EngBut(hurtver * b.hurtver, huvaari * b.huvaari);
        }

        EngBut operator/(const EngBut& b) const {
            return EngBut(hurtver * b.huvaari, huvaari * b.hurtver);
        }
        EngBut operator+(int num) const {
            return EngBut(hurtver + num * huvaari, huvaari);
        }
        EngBut operator-(int num) const {
            return EngBut(hurtver - num * huvaari, huvaari);
        }
        EngBut operator*(int num) const {
            return EngBut(hurtver * num, huvaari);
        }
        EngBut operator/(int num) const {
            if (num != 0) {
                return EngBut(hurtver, huvaari * num);
            } else {
                return *this;
            }
        }
};
#endif
