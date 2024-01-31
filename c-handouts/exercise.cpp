/**Define a C++ structure that represents a student with attributes like name,
age, and grade. Use pointers to modify and display the student information.
 * 
*/
#include <iostream>
#include <string>

struct Student{
    std::string name;
    int age;
    char grade;
};
// local variable are defined and accessde within the function
void func () {
    int age = 18;
    std::cout << age;
}
// global variables can be acessed within and outside the function.
int global = 5;

void display () {
    std::cout<<"The global variable is: " << global<< std::endl;
}
int main(){
    Student obj;
    obj.name = "James";
    obj.age = 45;
    obj.grade = 'A';
    // std::cout << obj.name << " " << obj.age << " " << obj.grade;

    Student *ptrStudent = & obj;
    for(int i = 0; i < obj.name.length(); i++){
        std::cout << obj.name[i] << std::endl;
    }
    std::cout << obj.name << " " << obj.grade << " " << obj.age;
    /**
     *Question 2: Implement a C++ program that manipulates strings, including concatenation and finding the length of a string.
    */
    std::string greeting = "Hey Cassious! How are you man?";
    std::cout << greeting.length() << std::endl;
    std::cout << greeting.append(" How is school going?") << std::endl;

    std::string first_name = "John ";
    std::string last_name = "Banda";
    std::string full_name = first_name + last_name;
    std::cout << "The Length of my name is: " <<full_name.length() << std::endl;
    std::cout <<full_name.append(" Mulenga")<< std::endl;
    std::cout << "My full names are: " << full_name << std::endl;

    /**
     *Question 3: Write a C++ program that uses bitwise operators to perform bitwise AND, OR, and XOR operations on two integers.
    */
   int a = 5;
   int b = 9;

   std::cout << "a & b = " <<(a & b) << std::endl;
   std::cout << "a | b = " <<(a | b) << std::endl;
   std::cout << "a ^ b = " <<(a ^ b) << std::endl;
    /**
     * Question 4: Explain the concept of variable scope in C++ and provide an example
illustrating local and global variables.
    */
    std::cout<< "My age is: ";
    func ();
    // invocking the global fuction 
     display ();
    global = 10;
    display ();
    return 0;
}