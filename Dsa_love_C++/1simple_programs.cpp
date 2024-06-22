#include <iostream>
using namespace std;



int main(){
    
    /*
    cout << "Hemanta kumar Bhoi \n";
    cout << endl;
    cout << "HEMANT LOVE HEMANTA" << endl;
    int a = 7;
    bool c;
    if(a > 9){
        cout<< c;
    }
    else{
        cout << c;
    } */


    int num; // declaration
    num = 7; // initialization
    cout << sizeof(num)<<endl;

    for (int i = 0; i < 7; i++)
    {
        for (int j = 0; j < 7; j++)
        {
            if (i == 0 || j == 0 || j == 7 - i - 1)
            {
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
    
    int n;
    cin>> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < (2*n) -1; j++)
        {
            if(j < n -i -1){
                cout<<" ";
            }
            else if(j > n +i -1){
                cout<<" ";
            }
            else{
                cout<<"*";
            }
        }
        cout<<endl;
    }
    
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < (2*n) -1; j++)
        {
            if(j < n -i -1){
                cout<<" ";
            }
            else if(j > n +i -1){
                cout<<" ";
            }
            else{
                if (j == n -i -1 || j == n +i -1 || i == n-1)
                {
                    cout<<"*";
                }
                else{
                    cout<<" ";
                }
            }
        }
        cout<<endl;
    }
    
    
    
    return 0;
}