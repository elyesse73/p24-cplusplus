#include <iostream>

int add (int a, int b);
extern int i;

int main() 
{
        std::cout << add(i,90) << std::endl;

        return 0;
}

int add (int a, int b) {
        return a+b;
}

int i = 12;