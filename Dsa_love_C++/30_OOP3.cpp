#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Bird
{
public:
    int age, weight, nol;
    string color;

    void eat()
    {
        cout << "Eating" << endl;
    }
    void fly()
    {
        cout << "Flying" << endl;
    }
};

class Sparrow : public Bird
{
public:
    Sparrow(int age, int weight, int nol, string color)
    {
        this->age = age;
        this->weight = weight;
        this->nol = nol;
        this->color = color;
    }
    void sing()
    {
        cout << "Singing" << endl;
    }
};

class Pegion : public Bird
{
public:
    void swim()
    {
        cout << "Swiming" << endl;
    }
};

// multiple inheritance:
class Teacher
{
public:
    string name;
    int age;
    void teach()
    {
        cout << "Teaching" << endl;
    }
};

class Researcher
{
public:
    string field;
    void research()
    {
        cout << "Researching" << endl;
    }
};

class Professor : public Teacher, public Researcher
{
public:
    void publish()
    {
        cout << "Publishing" << endl;
    }
};

// operator overloading
class Vector{
    int x, y;
    public:
    Vector (int x, int y) : x(x), y(y){}

    void operator+(const Vector &src){
        this->x = this->x + src.x;
        this->y = this->y + src.y;
    }

    void display(){
        cout<<"x: "<<x<<" "<<"y: "<<y<<endl;
    }
};

int main()
{

    Sparrow s(1, 2, 3, "Brown");
    cout << "Sparrow: " << "age: " << s.age << " weight: " << s.weight << " nol: " << s.nol << " color: " << s.color << endl;

    Professor p;
    cout << "Professor: " << endl;
    p.teach();
    p.research();
    p.publish();

    // operator overloading:
    Vector v1(2, 4);
    Vector v2(7, 5);

    v1 + v2;
    v1.display();


    return 0;
}

/*
Yes, the **diamond problem** exists in **C++**, but it is handled differently than in
Java due to the fundamental differences in how multiple inheritance is implemented in
these languages.

### What is the Diamond Problem?
The diamond problem occurs in multiple inheritance when a class inherits from two classes
that both inherit from a common base class. This creates ambiguity about which version
of the base class's methods or properties to use.

#### Example of the Diamond Problem in C++:

```cpp
#include <iostream>
using namespace std;

class A {
public:
    void display() {
        cout << "Class A" << endl;
    }
};

class B : public A { };

class C : public A { };

class D : public B, public C { };

int main() {
    D obj;
    // obj.display(); // Ambiguity: which A::display() to call?
    return 0;
}
```

In the above example:
- `B` and `C` both inherit from `A`.
- `D` inherits from both `B` and `C`.
- When you try to call `obj.display()`, the compiler cannot determine which `A::display()`
to use, leading to ambiguity.

### Resolving the Diamond Problem in C++
C++ provides a mechanism called **virtual inheritance** to resolve this issue.

#### Virtual Inheritance Solution:

```cpp
#include <iostream>
using namespace std;

class A {
public:
    void display() {
        cout << "Class A" << endl;
    }
};

class B : virtual public A { };

class C : virtual public A { };

class D : public B, public C { };

int main() {
    D obj;
    obj.display(); // No ambiguity: Only one A::display() exists
    return 0;
}
```

Here:
- `B` and `C` inherit `A` virtually using `virtual public`.
- This ensures that only one instance of `A` is shared among all derived classes,
resolving the ambiguity.

### How Does This Differ from Java?
In **Java**, multiple inheritance of classes is not allowed, so the diamond problem
is avoided altogether at the class level. Java resolves similar issues in its **interface system**:
- Java allows multiple inheritance of interfaces.
- If conflicting methods exist in the interfaces, the implementing class must explicitly resolve the ambiguity.

### Conclusion:
The diamond problem exists in both C++ and Java but is handled differently:
- In C++, you resolve it using **virtual inheritance**.
- In Java, the language design avoids it by disallowing multiple class inheritance
and requiring explicit resolution in interfaces.
*/