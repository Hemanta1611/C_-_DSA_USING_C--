#include <iostream>
#include <vector>
using namespace std;

class abc{
    public:
    int x;
    int *y;

    abc(int _x, int _y): x(_x), y(new int(_y)){}

    // default dumb copy constructor: id does SHALLOW COPY
    // abc(const abc &obj): x(obj.x), y(obj.y){}

    // OUR SMART DEEP COPY
    abc(const abc &obj){
        x = obj.x;
        y = new int(*obj.y);
    }

    void print() const{
        printf("X: %d, PTR Y: %d, Content of Y: %d\n", x, y, *y);
    }

    ~abc(){
        delete y;
    }
};

class Box{
    int width;
    // private ctor // no compilation problem
    Box(int _w): width(_w){}

    public:
    // ctor
    // Box(int _w): width(_w){}

    int getWidth() const{
        return width;
    }

    void setWidth(int _value){
        width = _value;
    }

    friend class BoxFactory;
};

class BoxFactory{
    int count;

    public:
    Box getABox(int _w){
        ++count; // to know the total how many boxes created
        return Box(_w);
    }
};
int main(){

    // Box box1(10);
    BoxFactory boxFactory;
    Box box1 = boxFactory.getABox(10);
    cout<<box1.getWidth()<<endl;

    
    /*
    abc a(1,2);
    cout<<"printing a: "<<endl;
    a.print();

    abc b = a; // copy constructor called
    cout<<"printing b: "<<endl;
    b.print();

    *b.y = 3;
    cout<<"printing b: "<<endl;
    b.print();
    cout<<"printing a: "<<endl;
    a.print();
    */
    
    return 0;
}