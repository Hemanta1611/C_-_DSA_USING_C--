#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;


// Nesting of member function
class binary{
    // private: even if we don't use private it will automatically and bydefault consider it as private. for public only we need to declare public:
    string s;
    public:
        void ones_complement(void);
        void read(void);
        void chk_bin(void); // check binary 
        void display(void);
};

// if we write check binary (chk_bin) function in private then it can be used only inside the function not in main function

void binary :: read(void){
    cout<<"Enter a binary number: ";
    cin>>s;
}

void binary :: chk_bin(void){
    for(int i = 0; i < s.length(); i++){
        if(s.at(i) != '0' && s.at(i) != '1'){
            cout<<"Incorrect binary format "<<endl;
            exit(0);
        }
    }
}

void binary :: ones_complement(void){
    chk_bin(); // if we used nested or we can say function inside fucntion then we don't need to write string variable it will automatically check all variable which will be called by this function(ones_complement)
    for(int i = 0; i < s.length(); i++){
        if(s.at(i) == '0'){
            s.at(i) = '1';
        }
        else{
            s.at(i) = '0';
        }
    }
}

void binary :: display(void){
    cout<<"Displaying your binary number: "<<endl;
    for(int i = 0; i < s.length(); i++){
        cout<<s.at(i);
    }
    cout<<endl;
}

int main(){
    
    binary b;
    b.read();
    // b.chk_bin();   --> it will be nested in ones_complement function
    b.ones_complement();
    b.display();
    
    return 0;
}
// to run program in terminal
// g++ .\1_intro.cpp
// .\a.exe