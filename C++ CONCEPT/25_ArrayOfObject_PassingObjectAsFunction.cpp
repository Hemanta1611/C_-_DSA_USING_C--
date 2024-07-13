#include <iostream>
using namespace std;

// Class definition for Employee
class employee {
private:
    int id; // Private member to store employee ID
    int salary; // Private member to store employee salary

public:
    // Function to set employee ID and salary
    void setid_salary(void) {
        cout << "Enter the ID of the employee: ";
        cin >> id;
        cout << "Enter the salary of the employee: ";
        cin >> salary;
    }

    // Function to display employee ID and salary
    void getid_salary(void) {
        cout << "Employee ID: " << id << endl;
        cout << "Employee Salary: " << salary << endl;
    }
};

// Class definition for Complex Number
class complex {
private:
    int real; // Private member to store real part of complex number
    int imaginary; // Private member to store imaginary part of complex number

public:
    // Function to set real and imaginary parts of complex number
    void setdata(int v1, int v2) {
        real = v1;
        imaginary = v2;
    }

    // Function to set data of complex number by summing two other complex numbers
    void setdata_bysum(complex o1, complex o2) {
        real = o1.real + o2.real;
        imaginary = o1.imaginary + o2.imaginary;
    }

    // Function to print the complex number in the form "real + imaginary i"
    void printnumber() {
        cout << "Your complex number is " << real << " + " << imaginary << "i" << endl;
    }
};

int main() {
    
    // Example usage of the Employee class
    // employee fb[7];
    // for (int i = 0; i < 7; i++) {
    //     fb[i].setid_salary();
    //     fb[i].getid_salary();
    // }

    // Example usage of the Complex class
    complex c1, c2, c3;

    // Set and print complex number c1
    c1.setdata(1, 2);
    cout << "Setting c1: ";
    c1.printnumber();

    // Set and print complex number c2
    c2.setdata(3, 4);
    cout << "Setting c2: ";
    c2.printnumber();

    // Set c3 to the sum of c1 and c2, then print c3
    c3.setdata_bysum(c1, c2);
    cout << "Sum of c1 and c2 (c3): ";
    c3.printnumber();

    return 0;
}
