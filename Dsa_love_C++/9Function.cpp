#include <iostream>
using namespace std;

void printName(string name){
    for (int i = 0; i < 7; i++)
    {
        cout<< name <<endl;
    }
}

void printMax(int n1, int n2, int n3){
    int ans = max(n1,n2); // max is inbuild funtion used to find maximum number between two numbers
    int ans1 = max(ans,n3);
    cout<<"Greatest Number of given three number = "<<ans1<<endl;
}

bool checkPrime(int n){
    for (int i = 2; i <= n/2; i++)
    {
        if (n % 2 == 0)
        {
            return false;
        }
    }
    return true;
}

void evenORodd(int n){
    if (n & 1)
    {
        cout<<"Given number is odd."<<endl;
    }
    else{
        cout<<"Given number is even."<<endl;
    }
}

int main(){
    
    // string name;
    // cin>>name;
    // printName(name);
    // char name1[35];
    // cin>>name1;
    // printName(name1);
    printMax(2,7,7);
    bool check = checkPrime(97);
    if(check){
        cout<<"Its a prime number."<<endl;
    }
    else{
        cout<<"Its not a prime number."<<endl;
    }
    evenORodd(7);

    cout<<INT32_MIN<<endl;
    cout<<INT32_MAX<<endl;


    return 0;
}