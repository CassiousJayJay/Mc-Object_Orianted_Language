#include <iostream>
using namespace std;

int main(){
    int number;
    
    cout << "Enter an interger: ";
    cin >> number;

    if (number % 2 == 0)
    cout << number << " is Even.";
    else
    cout << number << " is Odd.";

    return 0;
}