// Documentation Section
// This program calculates the factorial of a number using recursion.

// Linking Section
#include <iostream>

// Definition Section
#define Factorial "\n"

// Global Declaration Section
int factorial(int n);

// Function Declaration Section
int main() {
    int n;
    std::cout << "Enter a positive integer: ";
    std::cin >> n;
    std::cout << "Factorial of " << n << " = " << factorial(n);
    std::cout << Factorial;
    return 0;
}

// Function Definition Section
int factorial(int n) {
    if (n > 1) {
        return n * factorial(n - 1);
    } else {
        return 1;
    }
}
