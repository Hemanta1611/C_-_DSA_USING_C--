#include <iostream>
using namespace std;



int main(){
    
    int n, row, col;
    cin>>n;
    
    /*
    for (row = 0; row < n; row++)
    {
        for (col = 0; col < n - row - 1; col++)
        {
            cout<<" ";
        }
        for (col = 0; col < row + 1; col++)
        {
            cout<<"* ";
        }
        cout<<endl;
    } 
    for (row = 0; row < n; row++)
    {
        for (col = 0; col < row; col++)
        {
            cout<<" ";
        }
        for (col = 0; col < n - row; col++)
        {
            cout<<"* ";
        }
        cout<<endl;
    } 
    for (row = 0; row < n; row++)
    {
        for (col = 0; col < n - row - 1; col++)
        {
            cout<<" ";
        }
        for (col = 0; col < row + 1; col++)
        {
            if(col == 0 || col == row){
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }
    for (row = 0; row < n; row++)
    {
        for (col = 0; col < row; col++)
        {
            cout<<" ";
        }
    int totalCol = n-row;
    for (col = 0; col < totalCol; col++)
    {
        if(col == 0 || col == totalCol-1){
            cout<<"* ";
        }
        else{
            cout<<"  ";
        }
    }
        cout<<endl;
    }

   for (row = 0; row < n; row++)
   {
        for (col = 0; col < 2*n+1; col++)
        {
            if (col >= n-row && col <= n+row )
            {
                cout<<" ";
            }
            else{
                cout<<"*";
            }
        }
        cout<<endl;
   }
   for (row = 0; row < n; row++)
   {
        for (col = 0; col < 2*n+1; col++)
        {
            if (col > row && col < 2*n -row )
            {
                cout<<" ";
            }
            else{
                cout<<"*";
            }
        }
        cout<<endl;
   }
   
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= 2*i-1; j++)
        {
            if(j % 2 == 1){
                cout<<i;
            }
            else{
                cout<<"*";
            }
        }
        cout<<endl;
    }
    */

    char ch;
    cin>>ch;
    for (char i = 'A'; i <= ch; i++)
    { 
        for (char c = 'A'; c <= i; c++)
        {
            cout<<c;
        }
        for (char d = i-1; d >= 'A'; d--)
        {
            cout<<d;
        }
        
        cout<<endl;
    }
    
    

    
    return 0;
}