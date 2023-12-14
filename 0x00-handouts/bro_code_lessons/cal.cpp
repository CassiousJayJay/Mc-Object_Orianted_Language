#include <iostream>
using namespace std;

int main(){
    char op;
    double num1;
    double num2;
    double result;

    cout << "Enter the operation (+, -, *, /): ";
    cin >> op;

    cout << "Enter the first number: ";
    cin >> num1;

    cout << "Enter the second number: ";
    cin >> num2;

    switch (op)
    {
    case '+':
        result = num1 + num2;
        cout << "Result: " << result << endl;
        break;
    case '-':
        result = num1 - num2;
        cout << "Result: " << result << endl;
        break;
    case '*':
        result = num1 * num2;
        cout << "Result: " << result << endl;
        break;
    case '/':
        result = num1 / num2;
        cout << "Result: " << result << endl;
        break;
    default:
    cout << "Please enter a valid operator.";
        break;
    }
}