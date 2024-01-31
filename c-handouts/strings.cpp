#include <iostream>
#include <string>

struct Person{
    std::string name;
    int age;
    double gpa;
};
int main(int arg, char const *argv[]){
    // std::string message = "Hello, How are you this moment?";
    // std::cout << "Value: " << message.length() << "\n";


    // std::string user;
    // std::cout << "Enter your name: ";
    // std::cin >> user;
    // if(user.compare("John")){
    //     std::cout << "Welcome back" << user;
    // }else{
    //     std::cout << "Invalid Imput!";
    // }

    // char letter[4] = {'A', 'P', 'R', 'S'};
    // std::cout << "Value: " << letter[2] << "\n";
    Person obj = {"Cassious", 20, 20.5};
    
    // std::cout << obj.name << " " << obj.gpa << " " << obj.age;

    Person *ptrPerson = & obj;
    
    for(int i = 0; i < obj.name.length(); i++){
        std::cout << obj.name[i] << std::endl;
    }
    std::cout << obj.name << " " << obj.gpa << " " << ptrPerson->age;

    return 0;
}