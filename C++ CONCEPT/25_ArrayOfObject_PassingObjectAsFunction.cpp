#include <iostream>
using namespace std;

class employee{
    private:
    int id;
    int salary;
    public:
    void setid_salary(void){
        cout<<"Enter the id of employee ";
        cin>>id;
        cout<<"Enter the salary of employee ";
        cin>>salary;
    }
    void getid_salary(void){
        cout<<"The id of this employee is "<<id<<endl;
        cout<<"The salary of this employee is "<<salary<<endl;
    }
};

class complex{
    private:
    int real; 
    int imaginary;
    public:
    void setdata(int v1, int v2){
        real = v1;
        imaginary = v2;
    }
    void setdata_bysum(complex o1, complex o2){
        real = o1.real + o2.real; // here dot means not product its just showing pointing value of real part of complex c1 and c2
        imaginary = o1.imaginary + o2.imaginary; // same here for dot 
    }
    void printnumber(){
        cout<<"Your complex number is "<<real<<" + "<<imaginary<<"i"<<endl;
    }
};

int main(){
    
    // employee fb[7];
    // for (int i = 0; i < 7; i++) 
    // {
    //     fb[i].setid_salary();
    //     fb[i].getid_salary();
    // }

    complex c1, c2, c3;
    c1.setdata(1,2);
    c1.printnumber();
    c2.setdata(3,4);
    c2.printnumber();

    c3.setdata_bysum(c1, c2);
    c3.printnumber();
    
    
    return 0;
}