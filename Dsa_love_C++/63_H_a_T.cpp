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

/* --------- this chapter from here ---------*/
void collectAllWords(Trie *node, string suffix, vector<string> &ans) {
    if (node->isTerminal) {
        ans.push_back(suffix);
    }
    
    for (int i = 0; i < 26; i++) {
        if (node->children[i] != nullptr) {
            collectAllWords(node->children[i], suffix + node->children[i]->value, ans);
        }
    }
}

void findPrefixString(Trie *root, string input, vector<string> &ans){
    Trie *current = root;
    
    for (char ch : input) {
        int index = ch - 'a';
        if (current->children[index] == nullptr) {
            return; // No words with given prefix
        }
        current = current->children[index];
    }
    
    // Collect all words starting from the last node of the prefix
    collectAllWords(current, input, ans);
}

/* --------- to here --------- */

int main(){

    Trie *root = new Trie('-');
    insertWord(root, "hemanta");
    insertWord(root, "madhuri");
    insertWord(root, "hemanta");
    insertWord(root, "hemantabhoi");
    insertWord(root, "mango");
    insertWord(root, "apple");
    insertWord(root, "watermelon");
    insertWord(root, "hero");
    insertWord(root, "histogram");
    insertWord(root, "hexagonal");

    cout<<"insertion done."<<endl;
    // deleteWord(root, "mango");
    bool ans = searchWord(root, "mango");
    cout<<"present or not:"<<ans<<endl;

    string input = "h";
    vector<string> ansString;

    findPrefixString(root, input, ansString);

    for(auto i : ansString){
        cout<<i<<"\t";
    }cout<<"\n";

    return 0;
}