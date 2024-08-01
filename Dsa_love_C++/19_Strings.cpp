#include <iostream>
#include <vector>
#include <string.h>
using namespace std;

// Function to find the length of a character array (string)
int findLength(char ch[], int size) {
    int length = 0;
    for(int i = 0; i < size; i++) {
        if(ch[i] == '\0') {
            break;
        } else {
            length++;
        }
    }
    return length;
}

// Function to convert a character array to uppercase
void convertToUpperCase(char ch[], int size) {
    int index = 0;
    while(ch[index] != '\0') {
        char currentCharacter = ch[index];
        // Check if the character is lowercase, then convert to uppercase
        if(currentCharacter >= 'a' && currentCharacter <= 'z') {
            ch[index] = currentCharacter - 'a' + 'A';
        }
        index++;
    }
}

// Function to check if a character array is a palindrome
bool checkPalindrome(char ch[], int size) {
    for(int i = 0, j = size -1; i <= j; i++, j--) {
        if(ch[i] != ch[j]) {
            return false;
        }
    }
    return true;
}

int main() {
    // Character Array
    char ch[100];

    // Input: Using getline to read a line of text (including spaces)
    cin.getline(ch, 100); // This will take all input including spaces up to 100 characters, stops after '\n'

    // Output: Print the character array
    cout << "String: " << ch << endl;

    // Length of the string
    int len = findLength(ch, 100);
    // cout << "Length of string is: " << len << endl;
    // cout << "Length of string: " << strlen(ch) << endl;

    // Convert the string to uppercase
    // convertToUpperCase(ch, len);
    // cout << "String in uppercase: " << ch << endl;

    // Check if the string is a palindrome
    if(checkPalindrome(ch, len)) {
        cout << "Given string is palindrome." << endl;
    } else {
        cout << "Given string is not a palindrome." << endl;
    }

    /*-------- Strings --------*/
    // Creation
    string name;

    // Input: Using getline to read a line of text into a string
    // cin >> name;
    getline(cin, name); // --> to take input as a whole line

    // Output: Print the string
    cout << "Printing name: " << name << endl;
    // cout << "Length of string: " << name.length() << endl;
    // cout << "Length of string: " << name.size() << endl;
    // cout << "String is empty or not (1: true, 0: false): " << name.empty() << endl;
    
    // cout << "String at 0th index: " << name.at(0) << endl;

    // String manipulation
    string desc = "This is is a car.";
    desc.erase(4, 3); // --> start from 4th index and erase 3 characters
    cout << "desc after removing: " << desc << endl;

    string middle = " beautiful";
    desc.insert(9, middle); // --> insert " beautiful" starting from the 9th index
    cout << "desc after inserting: " << desc << endl;

    string abc = "a";
    cout << desc.find(abc) << endl; // --> find the first occurrence of "a"

    // Extract a substring
    string substring = desc.substr(10, 9); // --> get a substring starting from 10th index of length 9
    cout << "substring from desc: " << substring << endl;
    
    return 0;
}
