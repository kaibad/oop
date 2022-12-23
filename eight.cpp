//C++ Program to Check Whether a character is Vowel or Consonant.
#include<iostream>
using namespace std;
 int main(){
char c;
    bool isLowercaseVowel, isUppercaseVowel;

    cout << "Enter an alphabet: ";
    cin >> c;

    // evaluates to 1 (true) if c is a lowercase vowel
    isLowercaseVowel = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');

    // evaluates to 1 (true) if c is an uppercase vowel
    isUppercaseVowel = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');

    // show error message if c is not an alphabet
    if (!isalpha(c))
      printf("Error! Non-alphabetic character.");
    else if (isLowercaseVowel || isUppercaseVowel)
        cout << c << " is a vowel.";
    else
        cout << c << " is a consonant.";

    return 0;
 }
 /*The character entered by the user is stored in variable c.

The isLowerCaseVowel evaluates to true if c is a lowercase vowel and false for any other character.

Similarly, isUpperCaseVowel evaluates to true if c is an uppercase vowel and false for any other character.

If both isLowercaseVowel and isUppercaseVowel is true, the character entered is a vowel, if not the character is a consonant.

The isalpha() function checks whether the character entered is an alphabet or not. If it is not, it prints an error message.*/