#include <iostream>
using namespace std;

int main (){
    string name = "cassious kabwe";
    name[0] = 'B';
    cout << name << endl;
    cout << name.length() << endl;
    cout << name.find('s');

    return 0;
}