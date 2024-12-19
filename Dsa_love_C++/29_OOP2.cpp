#include <iostream>
#include <vector>
using namespace std;

class Student{
private:
    string gf;
public:
    int id;
    int age;
    string name;
    int nosubjects;
    bool isPresent;
    int *ptr; // this pointer and we create it on heap memory

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
        this->ptr = new int(10); // heap memory, to destroy it we need to delete it in destructor
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

    // copy ctor
    /*
    const: This keyword ensures that the copy constructor doesn't modify the original object (srcObj) 
    being copied. By making the parameter const, you guarantee that the copy constructor 
    only reads from the original object and doesn't modify it.
    
    &: This symbol indicates that the parameter is a reference to an existing object, 
    and that the copy constructor should create a new object rather than a copy of the object. 
    By using a reference, you avoid creating a temporary copy of the object, 
    which would be inefficient and potentially lead to issues with complex objects.

    */
    Student(const Student &srcObj){
        this->id = srcObj.id;
        this->name = srcObj.name;
        this->age = srcObj.age;
        this->nosubjects = srcObj.nosubjects;
        this->isPresent = srcObj.isPresent;
        this->gf = srcObj.gf;
        cout<<"Copy ctor called of Student"<<endl;
    }

    // Destructor
    ~Student(){
        cout<<"Destructor called"<<endl;
        delete ptr;
    }

    // to get the private value
    string getGf(){
        return gf;
        // return this.gf; // this will also work
    }
    // to set the private value
    string setGf(string gf){
        this->gf = gf;
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

int main(){
    
    // copy ctor
    Student s1 (1, 12, "Chhota Bheem", 2, 0, "Chutki");
    // Student s2;
    // s2 = s1;
    // Student s2 = s1; 
    Student s2 (s1); 
    cout<<"name: "<<s1.name<<" age:"<<s1.age<<" id:"<<s1.id<<" subject:"<<s1.nosubjects<<" present:"<<s1.isPresent<<" gf: "<<s1.getGf()<<endl;
    cout<<"s2.name: "<<s2.name<<endl;
    // cout<<"s2.gfName: "<<s2.getGf()<<endl;
    s2.setGf("Indumati");
    cout<<"s2.gfName: "<<s2.getGf()<<endl;
    


    
    return 0;
}