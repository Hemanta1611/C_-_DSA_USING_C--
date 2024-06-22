#include <iostream>
    
using namespace std;
    
typedef struct employee
{
    int emid;
    char favchar;
    float salary;
}ep;

struct student
{
    int emid;
    char favchar;
    float salary;
}madhuri,manju;

union money
{
    int rupee;
    char fav_method_of_exhange;
    float dollar;
};

enum meal{breakfast, lunch, snacks, dinner};
    // meal became now a data type

int main(){
    
    cout<<"structures:- "<<endl;
    ep aloo;
    struct employee hemanta;
    struct employee prabhat;
    hemanta.emid = 1;
    hemanta.favchar = 'A';
    hemanta.salary = 12300000000;
    prabhat.emid = 2;
    aloo.emid = 3;
    cout<<hemanta.salary<<endl;
    cout<<hemanta.favchar<<endl;
    cout<<hemanta.emid<<endl;
    cout<<prabhat.emid<<endl;
    cout<<aloo.emid<<endl<<endl;

    madhuri.emid = 7;
    manju.emid = 9;
    cout<<madhuri.emid<<endl;
    cout<<manju.emid<<endl;

    cout<<sizeof(employee)<<endl;
    cout<<sizeof(student)<<endl;
    cout<<sizeof(money)<<endl;

    cout<<"-------union-------"<<endl;
    union money m1;
    m1.rupee = 1;
    m1.dollar = 69.69;
    m1.fav_method_of_exhange = 'S';
    cout<<m1.rupee<<endl;
    // cout<<m1.dollar<<endl;
    // cout<<m1.fav_method_of_exhange<<endl<<endl;

    cout<<"-------enum-------"<<endl;
    cout<<breakfast<<endl;
    cout<<lunch<<endl;
    cout<<snacks<<endl;
    cout<<dinner<<endl;
    
    meal gajar = breakfast;
    cout<<"The gajar comes under "<<gajar<<" number in enum"<<endl;

    return 0;
}