#include <iostream>
#include <vector>
using namespace std;

class Animal{
    public:
    virtual void sound(){
        cout<<"Animal making sound"<<endl;
    }
    virtual ~Animal(){
        cout<<"Animal destroyed"<<endl;
    }
};

class Dog: public Animal{
    public:
    void sound() override{
        cout<<"Dog Barking"<<endl;
    }
    ~Dog(){
        cout<<"Dog destroyed"<<endl;
    }
};

class Cat: public Animal{
    public:
    void sound(){ // by defaut it becomes virtual (overrid)
        cout<<"Cat Meowing"<<endl;
    }
    ~Cat(){
        cout<<"Cat destroyed"<<endl;
    }
};

void sound(Animal *a){
    a->sound(); // polymorphism
    // animal->sound behaving as per required object allocated at run time
}

int main(){
    
    Animal *animal = new Dog();
    sound(animal);

    // animal = new Cat();
    // sound(animal);
    
    // animal = new Animal();
    // sound(animal);

    delete animal;
    
    return 0;
}