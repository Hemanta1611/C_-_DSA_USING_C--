#include <iostream>

using namespace std;

int main(){

    int num1, num2;
    cout<< "Enter the value of num1: \n";
    cin>> num1;

    // << == insertion operator & >> == extract operator
    // cout = same as printf of c and cin = same as scanf of c

    cout<< "Enter the value of num2: \n";
    cin>> num2;

    cout<< "The sum is: "<< num1 + num2<<".\n";

    return 0;
}