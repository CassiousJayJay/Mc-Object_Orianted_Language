#include <iostream>

/* 1. Research and list down at least three different programming languages
(1). Python
(2). JavaScript
(3). Java
2. Compare and contrast the strengths and weaknesses of each programming
language.
Python(Weakness)
- Nested functions kind of like in that you can’t modify variables in the outer scope.
– It has database access limitations
– Python is slower in performance than other languages
Python(Strength)
- Python’s syntax is easy to learn, so both non-programmers and programmers can start programming right away.
- Python’s syntax is very clear, so it is easy to understand program code.
JavaScript(Strength)
- JavaScript's syntax was inspired by Java's and is relatively easy to learn compared to other popular languages like C++.
- JavaScript is client-side, so it reduces the demand on servers overall, and simple applications may not need a server at all.
JavaScript(Weakness)
- Since JavaScript code is executed on the client-side, 
bugs and oversights can sometimes be exploited for malicious purposes. Because of this, 
some people choose to disable JavaScript entirely.
Java(Strength)
- It grants you to make standard projects and reusable code.
- It has no unequivocal pointer. Besides this, it is a security administrator that characterizes the entrance of classes.
Java(Weakness)
- The default look of GUI applications written in Java utilizing the Swing toolbox is very not quite the same as local applications
3. Python (Google)
Java(Finance)
JavaScript(Ebay, Google)
*/

// 2. ▷ Write a C++ program that demonstrates the use of variables with different data types.
int main(){
    int int_variable = 5;
    float float_variable = 3.14;
    double double_variable = 2.71828;
    char char_variable = 'a';

    std::cout << "Integer variable: " << int_variable << std::endl;
    std::cout << "Float variable: " << float_variable << std::endl;
    std::cout << "Double variable: " << double_variable << std::endl;
    std::cout << "Char variable: " << char_variable << std::endl;
    
    return 0;
}
