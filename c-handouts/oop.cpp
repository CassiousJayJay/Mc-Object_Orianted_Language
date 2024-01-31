#include <iostream>>

// class MyClass{
//     public:
//     void setData(int value){
//         data = value;
//     }
//     int getData(){
//         return data;
//     }
//     private:
//     int data;
// };
class Shape{
    public:
    void draw(){

    }
};
class Circle: public Shape{
    public:
    void drawCircle(){

    }
};

int main(int argc, char const *_argv){
    // MyClass myObject;
    // myObject.setData(45);
    // std::cout << "Data from object: " << myObject.getData() << std::endl;

    return 0;
}