#include <iostream>

class Room{
    public:
        double length;
        double width;

    public:
        void setLength(double len){
            length = len;
        }
        void setWidth(double wdt){
            width = wdt;
        }
        double getLength(){
            return length;
        }
        double getWidth(){
            return width;
        } 
        double getArea(){
            return length * width;
        }
};
int main(){
    Room room_1;
    room_1.setLength(10.4);
    room_1.setWidth(23.8);
    
    std::cout << "The length is: " << room_1.getLength() <<std::endl;
    std::cout << "The width is: " << room_1.getWidth() <<std::endl;

    std::cout << "The Area: " << room_1.getArea() <<std::endl;
    return 0;
}