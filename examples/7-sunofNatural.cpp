#include <iostream>
using namespace std;

int main (){
    int number, sum = 0;
    cout << "Enter a positive number: ";
    cin >> number;
    
    for(int i = 0; i <= number; ++i) {
        sum += i;
    }
    cout << "Sum = " << sum;

    return 0;
}