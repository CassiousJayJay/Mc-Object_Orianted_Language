#include <iostream>
#include "main.h"

int main(){
    int result = factoral(5);
    std::cout << result << std::endl;

    int a = 40;
    int b = 10;
    std::cout << "The value of a: " << a << "The value of b: " << b << "\n"; 
    // swap(&a, &b);
    // swapRef(a, b);
    std::cout << "The value of a: " << a << "The value of b: " << b << "\n"; 
    int answer = subtract(20, 10);
    std::cout << "The answer is: " << answer << std::endl;
    double answer_double = subtract(6.8, 3.5);
    std::cout << "The answer for the double function is: " << answer_double << std:: endl;
    char character = subtract('c', 'd');
    std::cout << "The answer for the character is: " << character << std::endl;

    return 0;
}
