#include <iostream>  // Includes the input-output stream library
using namespace std;  // Use the standard namespace

int main() {

   // Introduction message for the tutorial
   cout << "This is tutorial 9" << endl;

   // Variable to store user's age
   int age;
   cout << "Enter your age: ";
   cin >> age;  // Input age from the user

   // If-else statement to determine access to the party based on age
   if (age < 18) {
      cout << "You cannot come to my party" << endl;  // Output if age is less than 18
   }
   else if (age == 18) {
      cout << "You can come to the party for a short period of time" << endl;  // Output if age is exactly 18
   }
   else {
      cout << "You can come to the party till it gets over" << endl;  // Output if age is greater than 18
   }

   // Switch-case statement to provide specific messages based on the age
   switch (age) {
      case 18:
         cout << "Your age is 18" << endl;
         break;  // Exit the switch-case block if age is 18
      case 19:
         cout << "Your age is 19" << endl;
         break;  // Exit the switch-case block if age is 19
      case 20:
         cout << "Your age is 20" << endl;
         break;  // Exit the switch-case block if age is 20
      default:
         cout << "No Special Case" << endl;  // Default case if age does not match any of the above cases
         break;  // Exit the switch-case block
   }

   // Completion message for the switch-case block
   cout << "DONE WITH SWITCH CASE" << endl;

   return 0;  // Return 0 to indicate successful execution
}

/*
C++ BASIC CONTROL STRUCTURE

1. Sequence Structure:
   - The default control structure where actions are executed sequentially.
   - Example:
     step a: entry
     step b: action 1
     step c: action 2
     step d: exit

2. Selection Structure:
   - Used for decision making where a condition determines the path of execution.
   - Example:
     step a: entry 
     step b: condition
     step b.1: true 
     step b.2: false
     step c.1: action 1 (if condition is true)
     step c.2: action 2 (if condition is false)

3. Loop Structure:
   - Used to execute a block of code repeatedly based on a condition.
   - Example:
     step a: entry 
     step b: condition
     step b.1: true 
     step b.2: false
     step c.1: action 1 (if condition is true)
     step c.2: action 2 (if condition is false)
*/
