#include <iostream>
float pi = 3.14;
float circle_area(float R) {
    return pi*R*R;
}
int main() {
    double radius;
    std::cout << "Enter the radius of the circle: ";
    std::cin >> radius;
    double area = circle_area(radius);
    std::cout << "The area of the circle is: " << area << std::endl;
    
    return 0;
}