#include <iostream>

int sum(int num_1, int num_2){
    return num_1 + num_2;
}

double subtract(double num_1, double num_2){
    return num_1 - num_2; 
}

int sum(int num_1, int num_2, int num_3){
    return num_1 + num_2 + num_3;
}
int product(int num_1, int num_2){
    return num_1 * num_2;
}
int main(){
    std::cout << "Sum 1: " << sum(8, 5) <<std::endl;
    std::cout << "Subtract: " << subtract(6.7, 3.9) <<std::endl;
    std::cout << "Sum 2: " << sum(4, 8) <<std::endl;
    std::cout << "Product: " << product(4, 5) <<std::endl;

    return 0;
}