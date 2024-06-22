#include <iostream>
using namespace std;

int add(int a, int b){
    cout<<"using function with 2 arguments"<<endl;
    return a + b;
}

int add(int a, int b, int c){
    cout<<"using function with 3 arguments"<<endl;
    return a + b + c;
}

// volume of cylinder
float volume(double r, int h){
    return (3.14 * r * r * h);
}

// volume of cube
float volume(int a){
    return (a * a * a);
}

// volume of rectangle(cuboid)
float volume(int l, int b, int h){
    return (l * b * h);
}
    
int main(){
    
    int a = 2, b = 7, c =9;
    cout<<"The sum of a and c is: "<<add(a,c)<<endl;
    cout<<"The sum of a , b and c is: "<<add(a,b,c)<<endl;
    cout<<"The volume of cuboid is: "<<volume(5,5,5)<<endl;
    cout<<"The volume of cylinder is: "<<volume(5,5)<<endl;
    cout<<"The volume of cube is: "<<volume(5)<<endl;
    
    return 0;
}