#include <iostream>
using namespace std;

int main (){
    int a = 5;
    int b = 10;
    int temp;

    cout << "Before swapping: " << endl;
    cout << "a = " << a << " , b = " << b << endl;

    temp = a;
    a = b;
    b = temp;
    cout << "After swapping." << endl;
    cout << "a = " << a << " , b = " << b << endl;
    return 0;
}