#include <iostream>
using namespace std;

int main(){
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (num != 0){
        if (num > 0){
            cout << "The number is positive.";
        }
    else{
        cout << "The number is negative.";
        }
    }
    else{
        cout << "The number is 0 and it is neither a positive or a negative.";
    }
    
    return 0;
}