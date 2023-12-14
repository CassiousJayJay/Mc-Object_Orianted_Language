#include <iostream>
using namespace std;

int main (){
    char grade;
    cout << "What letter grade(A-C) ";
    cin >> grade;

    switch (grade)
    {
    case 'A':
        cout << "Distinction";
        break;
    case 'B':
        cout << "Merit";
        break;
    case 'C':
        cout << "Credit";
        break;
    default:
        cout << "You have failed, you need to re-write your course.";
        break;
    }

    return 0;
}