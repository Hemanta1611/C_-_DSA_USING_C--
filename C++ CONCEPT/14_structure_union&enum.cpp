#include <iostream>  // Includes the input-output stream library

using namespace std;  // Use the standard namespace

// Define a struct 'employee' with the typedef keyword
typedef struct employee {
    int emid;       // Employee ID
    char favchar;   // Favorite character
    float salary;   // Salary
} ep;  // 'ep' is an alias for 'struct employee'

// Define a struct 'student'
struct student {
    int emid;       // Student ID
    char favchar;   // Favorite character
    float salary;   // Salary
} madhuri, manju;  // Declare two instances of 'struct student'

// Define a union 'money'
union money {
    int rupee;                    // Rupees
    char fav_method_of_exhange;   // Favorite method of exchange
    float dollar;                 // Dollars
};

// Define an enum 'meal'
enum meal { breakfast, lunch, snacks, dinner };
// 'meal' becomes a new data type

int main() {

    cout << "structures:- " << endl;

    // Declare instances of 'struct employee'
    ep aloo;
    struct employee hemanta;
    struct employee prabhat;

    // Assign values to members of 'hemanta'
    hemanta.emid = 1;
    hemanta.favchar = 'A';
    hemanta.salary = 12300000000;

    // Assign values to members of 'prabhat' and 'aloo'
    prabhat.emid = 2;
    aloo.emid = 3;

    // Output the values of 'hemanta'
    cout << hemanta.salary << endl;
    cout << hemanta.favchar << endl;
    cout << hemanta.emid << endl;

    // Output the value of 'prabhat'
    cout << prabhat.emid << endl;

    // Output the value of 'aloo'
    cout << aloo.emid << endl << endl;

    // Assign values to members of 'madhuri' and 'manju'
    madhuri.emid = 7;
    manju.emid = 9;

    // Output the values of 'madhuri' and 'manju'
    cout << madhuri.emid << endl;
    cout << manju.emid << endl;

    // Output the size of 'struct employee', 'struct student', and 'union money'
    cout << sizeof(employee) << endl;
    cout << sizeof(student) << endl;
    cout << sizeof(money) << endl;

    cout << "-------union-------" << endl;

    // Declare an instance of 'union money'
    union money m1;

    // Assign values to members of 'm1'
    m1.rupee = 1;
    m1.dollar = 69.69;  // This will overwrite 'm1.rupee'
    m1.fav_method_of_exhange = 'S';  // This will overwrite 'm1.dollar'

    // Output the value of 'm1.rupee'
    cout << m1.rupee << endl;  // The output will be an undefined value due to the union

    // Uncommenting the following lines will result in undefined behavior
    // cout << m1.dollar << endl;
    // cout << m1.fav_method_of_exhange << endl << endl;

    cout << "-------enum-------" << endl;

    // Output the values of the enum 'meal'
    cout << breakfast << endl;  // 0
    cout << lunch << endl;      // 1
    cout << snacks << endl;     // 2
    cout << dinner << endl;     // 3

    // Assign a value from the enum 'meal' to a variable
    meal gajar = breakfast;
    cout << "The gajar comes under " << gajar << " number in enum" << endl;

    return 0;
}
