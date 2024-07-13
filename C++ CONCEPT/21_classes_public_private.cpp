#include <iostream> // Include the input-output stream library
using namespace std; // Use the standard namespace

// Define a class named Employee
class Employee { 
    // Private section: accessible only within the class
    private:
        int a, b, c; // Private member variables
    
    // Public section: accessible from outside the class
    public:
        int d, e; // Public member variables

        // Declaration of a member function to set data (definition outside the class)
        void setData(int a1, int b1, int c1); 

        // Declaration and definition of a member function to get data (inside the class)
        void getData() { 
            cout << "The value of a is " << a << endl;
            cout << "The value of b is " << b << endl;
            cout << "The value of c is " << c << endl;
            cout << "The value of d is " << d << endl;
            cout << "The value of e is " << e << endl;
        }
} hemanta; // Create an object of the Employee class named hemanta

// Definition of the setData member function outside the class
void Employee::setData(int a1, int b1, int c1) {
    a = a1; // Set the private member variable 'a' to 'a1'
    b = b1; // Set the private member variable 'b' to 'b1'
    c = c1; // Set the private member variable 'c' to 'c1'
}

int main() {
    // The following lines would produce errors because 'a', 'b', and 'c' are private:
    // hemanta.a = 2; 
    // hemanta.b = 7; 
    // hemanta.c = 9; 

    
    // hemanta.x = 2;     THIS CAN'T BE HAPPEN    
    // hemanta.y = 7;     THIS CAN'T BE HAPPEN     
    // hemanta.z = 9;     THIS CAN'T BE HAPPEN
    // hemanta.a1 = 2;     THIS CAN'T BE HAPPEN BECAUSE THESE ARE VARIABLE USED IN THE FUNCTION     
    // hemanta.b1 = 7;     THIS CAN'T BE HAPPEN BECAUSE THESE ARE VARIABLE USED IN THE FUNCTION     
    // hemanta.c1 = 9;     THIS CAN'T BE HAPPEN BECAUSE THESE ARE VARIABLE USED IN THE FUNCTION     
    hemanta.d = 79;
    hemanta.e = 97;
    hemanta.setData(2,7,9);
    hemanta.getData();
    
    return 0;
}