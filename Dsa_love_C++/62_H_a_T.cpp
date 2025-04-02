#include <iostream>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

class Trie{
public:
    char value;
    Trie *children[26]; // array of Trie data type
    bool isTerminal;

    Trie(char val){
        value = val;
        for(int i = 0; i < 26; i++){
            children[i] = nullptr;
        }
        isTerminal = false;
    }

    ~Trie(){
        for(int i = 0; i < 26; i++){
            if(children[i] != nullptr){
                delete children[i];
            }
        }
    }
};

void insertWord(Trie *root, string word){
    // base case:
    // cout<<"received word: "<<word<<"\n";
    if(word.length() == 0){
        root->isTerminal = true;
        return ;
    }

    char ch = word[0];
    int index = ch - 'a';
    Trie *child;

    if(root->children[index] != nullptr){
        // child present --> traverse
        child = root->children[index];
    }
    else{
        // child not present;
        // create & traversal
        child = new Trie(ch);
        root->children[index] = child;
    }

    // recursion:
    insertWord(child, word.substr(1));
}

bool searchWord(Trie *root, string word){
    // basecase
    if(word.length() == 0){
        return root->isTerminal;
    }

    char ch = word[0];
    int index = ch - 'a';
    Trie *child;

    if(root->children[index] != nullptr){
        // child present
        child = root->children[index];
    }
    else{
        // not found
        return false;
    }

    // recursion
    return searchWord(child, word.substr(1));
}

void deleteWord(Trie *root, string word){
    // basecase
    if(word.length() == 0){
        root->isTerminal = false;
        return;
    }

    char ch = word[0];
    int index = ch - 'a';
    Trie *child;

    if(root->children[index] != nullptr){
        child = root->children[index];
    }
    else{
        return;
    }
    deleteWord(child, word.substr(1));
}

int main(){

    Trie *root = new Trie('-');
    insertWord(root, "hemanta");
    insertWord(root, "madhuri");
    insertWord(root, "hemanta");
    insertWord(root, "hemantahhoi");
    insertWord(root, "mango");
    insertWord(root, "apple");
    insertWord(root, "watermelon");

    cout<<"insertion done."<<endl;
    // deleteWord(root, "mango");
    bool ans = searchWord(root, "mango");
    cout<<"present or not:"<<ans<<endl;

    return 0;
}