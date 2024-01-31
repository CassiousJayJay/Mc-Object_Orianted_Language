#include <iostream>
// Create a program showcasing control structures such as if statements and loops.
int main() {
    int num;
    std::cout << "Enter a number: ";
    std::cin >> num;

    if (num > 0) {
        std::cout << "You entered a positive number." << std::endl;
    } else if (num < 0) {
        std::cout << "You entered a negative number." << std::endl;
    } else {
        std::cout << "You entered zero." << std::endl;
    }

    std::cout << "Printing numbers from 1 to 10:" << std::endl;
    for (int i = 1; i <= 10; i++) {
        std::cout << i << std::endl;
    }
    return 0;
}
