#include <iostream>
using namespace std;

// int main(){
//     int age;
//     cout << "Enter your age: ";
//     cin >> age;
//     if (age > 18){
//         cout << "You are eligible to attend the meeting.Thank you!";
//     }
//     else {
//         cout << "You are not not allowed to attend this meeting at the moment.Thank you!";
//     }

//     return 0;
// }

int main(){
    int number;
    cout << "Enter any number: ";
    cin >> number;

    if (number > 0){
        cout << "You have entered a positive number.";
    }
    else if(number < 0){
        cout << "You have entered a negative number.";
    }
    else{
        cout << "You have entered a 0.";
    }
    return 0;
}

