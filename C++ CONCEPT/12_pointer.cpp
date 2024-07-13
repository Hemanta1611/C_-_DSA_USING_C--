#include <iostream>  // Includes the input-output stream library

using namespace std;  // Use the standard namespace

int main() {
    // Pointer is another data type which stores the address of another variable

    int a = 3;  // Declare an integer variable 'a' and initialize it with 3

    // Declare a pointer variable 'b' and assign it the address of 'a'
    int *b = &a;  // The '*' denotes that 'b' is a pointer, '&' gives the address of 'a'
    
    // Output the address of 'a'
    cout << "Address of a: " << &a << ".\n";  // Use the '&' operator to get the address of 'a'

    // Output the address stored in pointer 'b'
    cout << "Address of a: " << b << endl;  // 'b' stores the address of 'a'

    // Output the value stored at the address pointed to by 'b'
    cout << "Value at address b is: " << *b << endl;  // The '*' operator dereferences 'b', giving the value at that address

    // Output the value stored at the address of 'a'
    cout << "Value at address b is: " << *(&a) << endl;  // The '&' operator gets the address of 'a', '*' dereferences it

    // Declare a pointer to a pointer variable 'c' and assign it the address of pointer 'b'
    int **c = &b;  // 'c' is a pointer to a pointer, it stores the address of 'b'

    // Output the address of pointer 'b'
    cout << "The address of b is: " << &b << endl;  // Use the '&' operator to get the address of 'b'

    // Output the address stored in pointer 'c'
    cout << "The address of b is: " << c << endl;  // 'c' stores the address of 'b'

    // Output the value stored at the address pointed to by 'c' (which is the address of 'a')
    cout << "The address of c is: " << *c << endl;  // The '*' operator dereferences 'c', giving the address of 'a'

    // Output the value stored at the address pointed to by the pointer to the pointer 'c'
    cout << "The value at address of c is: " << **c << endl;  // '**' dereferences 'c' twice, giving the value of 'a'

    // Output the value stored at the address pointed to by the pointer to the pointer 'b'
    cout << "The value at address of c is: " << *(*(&b)) << endl;  
    // The '&' operator gets the address of 'b', '*' dereferences it to get the address of 'a', '*' dereferences again to get the value of 'a'

    // This demonstrates pointer to pointer variables where a pointer stores the address of another pointer
    // We can achieve this by using double asterisks '**' for the pointer to pointer variable

    return 0;  // Return 0 to indicate successful execution
}
