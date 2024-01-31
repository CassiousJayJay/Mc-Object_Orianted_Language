#include <iostream>

int main(){
    char operator_sign;
    int number1;
    int number2;

    std::cout << "Enter the first number: ";
    std::cin >> number1;
    std::cout << "Enter the second number: ";
    std::cin >> number2;
    
    std::cout << "Enter operator: +, -, *, /:, %: ";
    std::cin >> operator_sign;


    switch (operator_sign)
    {
    case '+':
        std::cout << number1 << '+' << number2 << '=' << number1 + number2;
        break;
    case '-':
        std::cout << number1 << '-' << number2 << '=' << number1 - number2;
        break;
    case '*':
        std::cout << number1 << '*' << number2 << '=' << number1 * number2;
        break;
    case '/':
        std::cout << number1 << '/' << number2 << '=' << number1 / number2;
        break;
    case '%':
        std::cout << number1 << '%' << number2 << '=' << number1 % number2;
        break;
    default:
        std::cout << "Operator is not correct.";
        break;
    }
    return 0;
}
