#include <iostream>
using namespace std;

// int main(){
//     int num_int = 9;
//     double num_double;


//     num_double = num_int;

//     cout << "NUM int is: " << num_int << endl;
//     cout << "Num double is: " << num_double;

//     return 0;
// }

// Using Explicit or type casting

int main(){
    int num_double = 224.5;
    int num_int1 = (int)num_double;

    cout << "Num int1: " << num_int1 << endl;

    int num_int2 = int(num_double);
    cout << "Num int2: " << num_int2 << endl;

    return 0;
}