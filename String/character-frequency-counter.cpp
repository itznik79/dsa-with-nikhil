/*
  Program: Character Frequency Counter
  Language: C++
  Author: Nikhil Gautam
  Description:
    This program counts the frequency of each character in a given string 
    using simple nested loops — without using STL maps or arrays.
    It ignores already counted characters by marking them as '0'.

  Example:
    Input:  hello
    Output:
      h : 1
      e : 1
      l : 2
      o : 1
*/

#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;

    cout << "Enter a string: ";
    cin >> str;  // Input without spaces

    for (int i = 0; i < str.length(); i++) {
        int count = 1;

        // Skip characters already counted
        if (str[i] == '0') continue;

        for (int j = i + 1; j < str.length(); j++) {
            if (str[i] == str[j]) {
                count++;
                str[j] = '0';  // Mark as counted
            }
        }

        cout << str[i] << " : " << count << endl;
    }

    return 0;
}
