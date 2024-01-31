#include <iostream>

class Circle{
    public:
        int  length = 10;
    
    private:
        int breadth = 7;
// the height can not be accessed because it is protected.
    protected:
        int height = 6;

    int getLength(){
        return length;
    }
};
class ProtectedDerived: protected Circle{
    public:
        int getBreadth(){
            return breadth;
        }
    int getHeight(){
        return height;
    }
};
int main(){
    ProtectedDerived obj;

    std::cout << "Private can not be accessed." <<std::endl;
    std::cout << "Protected: " <<obj.getBreadth()<<std::endl;
    std::cout << "Public: " << obj.getHeight()<<std::endl;
    return 0;
}