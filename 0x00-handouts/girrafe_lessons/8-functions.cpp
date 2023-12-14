#include <iostream>
using namespace std;

void sayHello(string name, int age){
    cout << "Hello " << name << " you are "<< age << " years" << endl;
}

int main (){

    sayHello("James", 35);
    sayHello("Rose", 35);
    sayHello("Bright", 35);
    sayHello("Steve", 45);
    return 0;
}