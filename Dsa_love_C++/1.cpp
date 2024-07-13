#include <iostream>
using namespace std;
// #include "2_2.cpp"

#include "2.h" // this shows that there is funtion name called showfrom2cpp BUT it will not tell where it is present
/* 
To solve this problem we have to do following:
    PS C:\Users\heman\C & C++ & DSA\Dsa_love_C++> g++ -c 1.cpp
    PS C:\Users\heman\C & C++ & DSA\Dsa_love_C++> g++ -c 2.cpp
    PS C:\Users\heman\C & C++ & DSA\Dsa_love_C++> g++ 1.o 2.o -o 1_cpprun 
    PS C:\Users\heman\C & C++ & DSA\Dsa_love_C++> ./1_cpprun
    showing from show funtiion
    showing from function present in 2.cpp  
 */
//  .h is the header file 

void show(){
    cout<<"showing from show funtiion"<<endl;
}

int main(){
    
    show();
    showFrom2cpp();
    
    return 0;
}

// to run program in terminal
// g++ .\1_intro.cpp
// .\a.exe