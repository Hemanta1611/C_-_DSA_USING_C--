// TYPEDEF

#include <stdio.h>

// Define a structure 'student' and create a typedef alias 'std'
typedef struct student {
    int id;          // ID of the student
    int marks;       // Marks obtained by the student
    char fav_char;   // Favorite character of the student
    char name[34];   // Name of the student
} std;
// Using typedef, we create an alias 'std' for 'struct student'.
// Now, instead of writing 'struct student', we can simply use 'std' in the program.

int main() {
    
    // Declare variables of type 'std' (which is an alias for 'struct student')
    std s1, s2;

    // Assign values to the members of 's1'
    s1.id = 2;

    // Assign values to the members of 's2'
    s2.id = 7;

    // Print the ID of 's1'
    printf("Value of s1 id is %d\n", s1.id);

    // Print the ID of 's2'
    printf("Value of s2 id is %d\n", s2.id);

    // Example of using typedef with basic types (commented out)
    // typedef int A;
    // A a = 5;
    // printf("Value of a is %d", a);

    return 0;
}
