#include <iostream>

class Rectangle{
    public:
        int length;
        int breadth;

        int calculateArea(){
            return length * breadth;
        }
        int calculatePerimeter(){
            return (length * 2) + (breadth * 2);
        }
};
int main(){
    Rectangle rectangle_1;
    rectangle_1.breadth = 10;
    rectangle_1.length = 25;

    std::cout << "The area is: " << rectangle_1.calculateArea() << std::endl;
    std::cout << "The area is: " << rectangle_1.calculatePerimeter() << std::endl;

    return 0;
}