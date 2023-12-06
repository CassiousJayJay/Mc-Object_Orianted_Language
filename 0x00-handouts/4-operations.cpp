#include <iostream>
using namespace std;

// int main(){
//     int x, y;
//     x = 10;
//     y = 5;

//     // printing out the sum
//     cout << "x + y = " << (x + y) << endl;
//     // printing out the difference
//     cout << "x - y = " << (x - y) << endl;
//     // printing out the product
//     cout << "x * y = " << (x * y) << endl;
//     // printing out the modulo
//     cout << "x % y = " << (x % y) << endl;
//     // printing out the division
//     cout << "x / y = " << (x / y);

//     return 0;
// }

// int main(){
//     int a = 10, result_a;
//     int b = 25, result_b;
// // increamenting by 1 and storing the value in result a
//     result_a = ++a;
//     cout << "Result a is: " << result_a << endl;
// // decreamenting by 1 and storing the value in result b
//     result_b = --b;
//     cout << "Result b is: " << result_b;

//     return 0;
// }


// int main(){
//     int x, y;
//     x = 20;
//     y = 25;
//     bool result;

//     result = (x == y);
//     cout << "x == y: " << result << endl;
//     result= (x != y);
//     cout << "x != y: " << result << endl;

//     result = (x > y);
//     cout << "x > y: " << result << endl;

//     result = (x < y);
//     cout << "x > y: " << result << endl;

//     result = (x >= y);
//     cout << "x >= y: " << result << endl;

//     result = (x <= y);
//     cout << "x <= y: " << result;
//     return 0;
// }

int main(){
    int a, b;
    a = 28;
    b = 39;
    bool result;

    result = (a != b) && (a < b);
    cout << "(a != b) && (a < b): " << result << endl;

    result = (a < b) || (a == b);
    cout << "(a < b) || (a == b): "<< result << endl;

    result = (a == b); ! (a > b);
    cout << "(a == b) ! (a > b): " << result;
}