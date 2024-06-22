#include <iostream>
using namespace std;

#define pi 3.14

int main(){
    
    for (int i = 0; i < 7; i++)
    {
        if (i == 2 || i == 5)
        {
            continue;
        }
        cout<<i<<"\t";
    }
    cout<<endl;
    for (int i = 0; i < 5; i++)
    {
        cout<<" Hello jii "<<endl;
        continue;
        cout<<" Kese ho? "<<endl;
    }
    
    int r;
    cin>>r;
    cout<<"area of circle: "<<(pi * r * r)<<endl;
    int a; // don't effect on any number --> it will print what ever the valueu of a(-ve, 0 or +ve)
    if(cin>>a){
        cout<<"hii "<<endl;
    }
    if (cout<<a<<endl)
    {
        cout<<"hello"<<endl;
    }
    
    
    
    return 0;
}