#include <iostream>

struct Rational {
    int num {};
    int denom {1};
    Rational (int u = 0, int v = 1) : num(u),denom(v) { 
        if (denom==0) (throw 1);
        // assignement num = u; denom = v;
    }
    void print() {std::cout << num << '/' << denom << std::endl;}
    float eval() {return static_cast<float>(num)/denom;}
    friend Rational operator+(Rational r1, Rational r2);
};

bool equal(Rational r1, Rational r2) {
    return (r1.num*r2.denom==r2.num*r1.denom);
}

Rational operator+(Rational r1, Rational r2) {
    int a = r1.num*r2.denom + r2.num*r1.denom;
    int b = r1.denom*r2.denom;
    Rational r3 {a,b};
    return r3;
}

int main() {
    Rational r1;
    Rational r2 {1};
    Rational r3 {1,2};
    r1.print();
    r2.print();
    r3.print();
    return 0;
}