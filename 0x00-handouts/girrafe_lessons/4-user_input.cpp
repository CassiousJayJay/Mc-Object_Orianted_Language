#include <iostream>
using namespace std;

int main ()
{
    // int age;
    // cout << "Enter your age: " << endl;
    // cin >> age;
    // cout << "You are " << age << " years old.";

    string name;
    cout << "Enter your name: " << endl;
    getline(cin, name);
    cout << "Hello " << name;
    return 0;

}