#include <iostream>
    
using namespace std;
    
int main(){
    
    int marks[7] = {23,34,45,56,67,78,89};
    cout<<"These are marks:"<<endl;
    cout<<marks[0]<<endl;
    cout<<marks[1]<<endl;
    cout<<marks[2]<<endl;
    cout<<marks[3]<<endl;
    cout<<marks[4]<<endl;
    cout<<marks[5]<<endl;
    cout<<marks[6]<<endl;
    int mathmarks[2];
    mathmarks[0] = 69;
    mathmarks[1] = 96;
    cout<<"these are math marks"<<endl;
    cout<<mathmarks[0]<<endl; 
    cout<<mathmarks[1]<<endl;

    cout<<"using for loop"<<endl;
    for(int i = 0; i < 7; i++){
        cout<<"Marks obtained by "<<i+1<<" student: "<<marks[i]<<endl;
    }
    
    cout<<"using while loop"<<endl;
    int a = 0;
    while(a<7){
        cout<<"marks obtained by "<<a+1<<" student: "<<marks[a]<<endl;
        a++;
    }

    // Pointers and arrays
    // int * p = marks; OR
    int * p = &marks[0];
    cout<<"The value of marks[0] is "<<*(p)<<endl;
    cout<<"The value of marks[1] is "<<*(p+1)<<endl;
    cout<<"The value of marks[2] is "<<*(p+2)<<endl;
    cout<<"The value of marks[3] is "<<*(p+3)<<endl;
    cout<<"The value of marks[4] is "<<*(p+4)<<endl;
    cout<<*(p++)<<endl;
    cout<<*(++p)<<endl;

    return 0;
}