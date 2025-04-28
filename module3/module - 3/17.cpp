//17.String Palindrome Check o Write a C++ program to check if a given string is a palindrome (reads the same forwards and backwards).

	#include <iostream>
#include <string>
using namespace std;

bool isPalindrome(string str) {
    int start = 0;
    int end = str.length() - 1;

    while (start < end) {
        if (str[start] != str[end]) {
            return false; 
        }
        start++;
        end--;
    }

    return true; 
}

int main() {
    string input;

    cout << "Enter a string: ";
    cin >> input;

   
    if (isPalindrome(input)) {
        cout << "\"" << input << "\" is a palindrome." << endl;
    } else {
        cout << "\"" << input << "\" is not a palindrome." << endl;
    }

    return 0;
}

