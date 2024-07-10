#include <stdio.h>
#include <string.h>

// UNION
union Student {
    int id;
    int marks;
    char fav_char;
    char name[34];
};

int main() {
    // Declare a variable of type 'union Student'
    union Student s1;

    // Assign values to the members of the union
    s1.id = 1;
    s1.marks = 45;
    s1.fav_char = 'u';
    strcpy(s1.name, "Hemanta");

    // Print the values of the members of the union
    printf("The id is %d\n", s1.id);
    printf("The marks are %d\n", s1.marks);
    printf("The favorite character is %c\n", s1.fav_char);
    printf("The name is %s\n", s1.name);

    return 0;
}
