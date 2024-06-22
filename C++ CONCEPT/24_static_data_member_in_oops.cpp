#include <iostream>
using namespace std;
// static function is created only when we deal only with static variable / data member
class employee
{
private:
    int id;
    static int count; // if we don't use static then count will be equal to garbage value and to counter it we need to declare int count = 0.
    // static int count = 1000; for starting the count from 1000 but it will show syntax error , it will be corrent if it will be declare out side class 
public:
    void set_data(void);
    void get_data(void);
    static void getcount(){
        // cout<<id;  --> it will show error because id is int data type not a static variable
        cout<<"The value of count is "<<count<<endl;
    }
};

void employee::set_data(void)
{
    cout<<"Enter ID: ";
    cin>>id;
    count++;
}

void employee::get_data(void)
{
    cout<<"Employee ID: "<<id<<" and this is employee number "<<count <<endl;
}

    // count is the static data member of class employee
int employee:: count = 1000; // dafault value = 0

int main(){
    
    employee hemanta, prabhat, chintu;
    // hemanta.id = 1;
    // hemanta.count = 1;  // can't do this as id and count are private 
    
    hemanta.set_data();
    hemanta.get_data();
    employee::getcount();

    chintu.set_data();
    chintu.get_data();
    employee::getcount();

    prabhat.set_data();
    prabhat.get_data();
    employee::getcount();
    
    return 0;
}