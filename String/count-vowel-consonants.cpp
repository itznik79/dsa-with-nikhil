/*
Problem: Count Vowels and Consonants in a String
Description:
Read a string from the user and count the number of vowels and consonants.
Non-letter characters are ignored.

Example:
Input:
Hello World!

Output:
Vowels: 3
Consonants: 7

Explanation:
- `toLowerCase()` converts all letters to lowercase for easy comparison.
- `isLetter()` checks whether a character is a letter.
- `countVowelAndConsonant()` loops through each character:
    - If the character is a vowel → increment vowel count
    - Else if letter → increment consonant count
- Non-letter characters are skipped.

Time Complexity: O(n)
Space Complexity: O(1)
Tags: String, Vowels, Consonants, Functions, C++, DSA Basics
Author: Nikhil Gautam

Approach:
1. Take input string from the user.
2. Convert the string to lowercase using `toLowerCase()`.
3. Loop through each character:
   - Skip non-letter characters
   - If vowel → increment vowel count
   - Else → increment consonant count
4. Print total vowels and consonants.
*/

#include <iostream>
#include <string>
using namespace std;

// ✅ Function to convert uppercase letters to lowercase
void toLowerCase(string &str) {
    for (int i = 0; i < str.length(); i++) {
        if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = str[i] + ('a' - 'A');
        }
    }
}

// ✅ Function to check if a character is a letter
bool isLetter(char c) {
    return (c >= 'a' && c <= 'z');
}

// ✅ Function to count vowels and consonants in a string
void countVowelAndConsonant(string str, int &vowel, int &consonant) {
    toLowerCase(str); // convert to lowercase
    vowel = 0;
    consonant = 0;

    for (int i = 0; i < str.length(); i++) {
        if (!isLetter(str[i])) continue; // skip non-letter characters

        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
            vowel++;
        else
            consonant++;
    }
}

int main() {
    string str;

    // ✅ Input: string from user
    cout << "Enter string: ";
    getline(cin, str);

    int vowels = 0, consonants = 0;

    // ✅ Count vowels and consonants
    countVowelAndConsonant(str, vowels, consonants);

    // ✅ Output
    cout << "Vowels: " << vowels << endl;
    cout << "Consonants: " << consonants << endl;

    return 0; // ✅ Successful program termination
}
