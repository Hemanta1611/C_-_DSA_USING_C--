#include<iostream>  // Includes the input-output stream library
using namespace std;  // Use the standard namespace

int main() {
    // Uncomment the following block to see the behavior of the 'break' statement
    /*
    // For loop that runs from i = 0 to i < 40
    for (int i = 0; i < 40; i++) {
        if (i == 2) {
            break;  // Exit the loop when i is equal to 2
        }
        cout << i << endl;  // Print the value of i followed by a newline
    }
    */

    // For loop that runs from i = 0 to i < 40
    for (int i = 0; i < 40; i++) {
        if (i == 2) {
            continue;  // Skip the rest of the loop body when i is equal to 2 and continue with the next iteration
        }
        cout << i << endl;  // Print the value of i followed by a newline
    }

    return 0;  // Return 0 to indicate successful execution
}
