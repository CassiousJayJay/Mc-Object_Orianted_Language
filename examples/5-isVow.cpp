#include <iostream>
using namespace std;

int main (){
    char letter;
    bool isLowercaseVowel, isUppercasVowel;

    cout << "Enter an alphabet: ";
    cin >> letter;

    isLowercaseVowel = (letter == 'a' || letter == 'e' || letter == 'i' || letter == 'o' || letter == 'u');
    isUppercasVowel = (letter == 'A' || letter == 'E' || letter == 'I' || letter == 'O' || letter == 'U');

    if(!isalpha(letter))
        printf("Error! Non-alphabetic letter.");

    else if (isLowercaseVowel || isUppercasVowel)
        cout << letter << " is a vowel,";
    else
        cout << letter << " is a consonant.";

    return 0;
}