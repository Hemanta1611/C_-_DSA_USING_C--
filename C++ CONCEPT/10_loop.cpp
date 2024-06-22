#include <iostream>
    
using namespace std;
    
int main(){
    
    /* For Loop in C++ */
    for (int i = 0; i < 9; i++)
    {
        cout<<i<<"--ILU-IHU\n";
    }
    
    // \n is faster than endl because endl is a function which creates buffer

    /*While Loop in C++*/
    int a;
    cout<<"Enter value of a: ";
    cin>>a;
    while(a<19){
        cout<<a<<"\n";
        a++;
    }

    // int c;
    // while(true){
    //     cout<<c<<endl;
    //     c++;
    //     // infinite loop
    // }

    /*Do-While Loop in C++*/
    int b;
    cout<<"Enter value of b: ";
    cin>>b;
    do{
        cout<<b<<"\n";
        b++;
    }
    while(b < 19);
    
    return 0;
}