#include <iostream>
#include <vector>
#include <string.h>
using namespace std;

int findLength(char ch[], int size){
    int length = 0;
    for(int i = 0; i < size; i++){
        if(ch[i] == '\0'){
            break;
        }
        else{
            length++;
        }
    }
    return length;
}

void convertToUpperCase(char ch[], int size){
    int index = 0;

    while(ch[index] != '\0'){
        char currentCharacter = ch[index];
        // check if lowercase, then convert to upper case
        if(currentCharacter >= 'a' && currentCharacter <= 'z'){
            ch[index] = currentCharacter - 'a' + 'A';
        }
        index++;
    }
}

bool checkPalindrome(char ch[], int size){
    for(int i = 0, j = size -1; i <= j; i++, j--){
        if(ch[i] != ch[j]){
            return false;
        }
    }
    return true;
}



int main(){
    
    // Character Array:
    char ch[100];

    // Input: --> no need of for loop
    // cin >> ch; // this will take input upto it reaches "\n", "\t", " "
    cin.getline(ch, 100); // this will take all input "\t", spaces(" ") upto 100 character, stops after "\n"


    // Output: --> no need of for loop
    cout <<"String: "<< ch <<endl;

    // Length of a String:
    int len = findLength(ch, 100);
    // cout<<"Length of string is: "<<len<<endl;
    // cout<<"Length of string: "<< strlen(ch)<<endl;


    // convertToUpperCase(ch, len);
    // cout<<"String in uppercase: "<< ch<<endl;

    // check palindrome
    if(checkPalindrome(ch, len)){
        cout<<"given string is palindrome."<<endl;
    }
    else{
        cout<<"given string is not a palindrome."<<endl;
    }


    /*-------- Strings --------*/
    // Creation
    string name;

    // input
    // cin>>name;
    getline(cin, name); // --> to take input as whole line

    // output
    cout<<"Printing name: "<< name<<endl;
    // cout<<"Length of string: "<< name.length()<<endl;
    // cout<<"Length of string: "<< name.size()<<endl;
    // cout<<"String is empty or not(1: true, 0: false): "<< name.empty()<<endl;
    
    // cout<<"String at 0th index: "<<name.at(0)<<endl;

    string desc = "This is is a car.";
    desc.erase(4, 3); // --> start from 4 index and erase 3 characters
    cout<<"desc after removing: "<<desc<<endl;
    string middle = " beautiful";
    desc.insert(9, middle);
    cout<<"desc after inserting: "<<desc<<endl;

    string abc = "a";
    cout<<desc.find(abc)<<endl;

    // to take out substring
    string substring = desc.substr(10, 9);
    cout<<"substring from desc: "<<substring<<endl;
    
    return 0;
}

