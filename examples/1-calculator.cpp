#include <iostream>
using namespace std;

int main (){
    char operator_sign;
    int number1;
    int number2;

    cout << "Enter the first number: ";
    cin >> number1;
    cout << "Enter the second number: ";
    cin >> number2;
    
    cout << "Enter operator: +, -, *, /:, %: ";
    cin >> operator_sign;


    switch (operator_sign)
    {
    case '+':
        cout << number1 << '+' << number2 << '=' << number1 + number2;
        break;
    case '-':
        cout << number1 << '-' << number2 << '=' << number1 - number2;
        break;
    case '*':
        cout << number1 << '*' << number2 << '=' << number1 * number2;
        break;
    case '/':
        cout << number1 << '/' << number2 << '=' << number1 / number2;
        break;
    case '%':
        cout << number1 << '%' << number2 << '=' << number1 % number2;
        break;
    default:
        cout << "Operator is not correct.";
        break;
    }
    return 0;
}