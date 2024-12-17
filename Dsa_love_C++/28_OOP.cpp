#include <iostream>
#include <vector>
using namespace std;

// macros
#define PI 3.14
#define MAXX(x, y) (x > y ? x : y)

// int x = 2; // global variable

class Student{
private:
    string gf;
public:
    int id;
    int age;
    string name;
    int nosubjects;
    bool isPresent;

    // Constructor | ctor | Default Constructor
    // no empty student needed
    // Student(){
    //     cout<<"Student ctor called"<<endl;
    // }

    Student(int _id, int _age, string _name, int _nosubjects, bool _isPresent){
        id = _id;
        age = _age;
        name = _name;
        nosubjects = _nosubjects;
        isPresent = _isPresent;
        cout<<"Student parameterized ctor called"<<endl;
    }
    Student(int id, int age, string name, int nosubjects, bool isPresent, string gf){
        // when parameter having same name as variable name inside class then `this` will be called for constructor 
        // so that it can points at current object
        this->id               =       id;
        //    class variable          local variable / function parameter/variable  
        this->age = age;
        this->name = name;
        this->nosubjects = nosubjects;
        this->isPresent = isPresent;
        this->gf = gf;
        cout<<"Student parameterized ctor with gf called"<<endl;
    }

    Student(int id, string name, int nosubjects, bool isPresent, string gf){
        this->id = id;
        this->name = name;
        this->nosubjects = nosubjects;
        this->isPresent = isPresent;
        this->gf = gf;
        cout<<"Student parameterized ctor with out 'age' called"<<endl;
    }

    void study(){
        cout<<"Studying"<<endl;
    }
    void sleep(){
        cout<<"Sleeping"<<endl;
    }
    void bunk(){
        cout<<"Bunking"<<endl;
    }
private:
    void gfChat(){
        cout<<"Chats"<<endl;
    }
};


class abc{
    public:
    static int a, b;

    void print() const{
        cout<<"a: "<<a<< " "<<"b: "<<b<<endl;
    }
};
int abc::a;
int abc::b;


int main(){


    // static keyword
    abc obj1;
    obj1.a = 1;
    obj1.b = 2;
    obj1.print();
    abc obj2;
    obj2.a = 10;
    obj2.b = 20;
    obj1.print();
    obj2.print();
    
    /*
    x = 7;
    int x = 5; // local to main function
    cout<< x <<endl;
    cout<<"Global Variable: "<< ::x <<endl;
    */

    /*
    
    // cout<<"Size of Class / BluePrint:  "<<sizeof(Student)<<endl;
    // Student s1; // no empty student;
    Student s1(2, 21, "Hemanta", 5, true);
    // s1.name = "Hemanta";
    cout<<"name: "<<s1.name<<endl;
    // s1.age = 21;
    // s1.id = 2;
    // s1.nosubjects = 5;
    // s1.isPresent = true;

    // Student s2(3, 21, "Prabhat", 5, false);
    Student s3(4, 21, "ABC", 7, true, "DEF");
    Student s4(5, "abc", 9, true, "def");

    // allocating on heap
    Student *s5 = new Student(6, "pqr", 11, true, "rst");
    cout<<"name: "<<s5->name<<endl;
    cout<<"name: "<<(*s5).name<<endl;
    // no leak
    delete s5;
    */
    
    const int x = 7;
    // x = 9
    cout<<"x: "<<x<<endl;

    // 2. const with pointers
    // const int *a = new int(2); // CONST data, NON-CONST pointer
    int const *a = new int(2); // CONST data, NON-CONST pointer // same // coz if we use const just befor the `*` then the things will be same (i.e. data is const not the pointer)
    // *a = 2; // can't change the content of pointer.
    cout<<"a: "<<*a<<endl;
    // delete a;
    int b = 5;
    a = &b;  // but pointer itself can be reassigned.
    cout<<"a: "<<*a<<endl;

    // 3. const pointer, but non-const data.
    int * const c = new int(11);
    *c = 22;
    cout<<"c: "<<*c<<endl;
    int d = 33;
    // c = &d; // won't work

    // 4. const pointer , const data
    const int * const f  = new int(10);
    // *f = 20; // won't work
    // f = &d; // won't work


    
    return 0;
}