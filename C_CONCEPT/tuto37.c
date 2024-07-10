// STRUCTURES

/*#include <stdio.h>
// struct Employee{
//     int id;
//     char name[78];
//     float marks;
// };
// struct Employee e1, e2;
    
// int main(){
    
//     struct Employee hb;
    

// OR

struct Employee{
    int id;
    char name[78];
    float marks;
} e1, e2;

    
int main(){
    
    // struct Employee hb;
    // e1.id = 12;
    // e1.marks = 34.12;
    // [.]dot operator used for access structure elements


    // OR

    sturct Employee e1 = {12, 34.12};

    return 0;
}*/
#include <stdio.h>
#include <string.h>

// Define a structure called 'student'
struct student {
    int id;          // ID of the student
    int marks;       // Marks obtained by the student
    char fav_char;   // Favorite character of the student
    char name[34];   // Name of the student
};

int main() {
    
    // Declare variables of type 'struct student'
    struct student hemanta, sandeep, dibyanshu;

    // Assign values to the members of 'hemanta'
    hemanta.id = 2;
    hemanta.marks = 233;
    hemanta.fav_char = 'a';
    strcpy(hemanta.name, "hemanta is student of this 2023 year");

    // Assign values to the members of 'sandeep'
    sandeep.id = 1;
    sandeep.marks = 234;
    sandeep.fav_char = 's';
    strcpy(sandeep.name, "gadha of the year 2089");

    // Assign values to the members of 'dibyanshu'
    dibyanshu.id = 3;
    dibyanshu.marks = 235;
    dibyanshu.fav_char = 't';
    // No name is assigned to 'dibyanshu'

    // Print information about 'hemanta'
    printf("Hemanta got %d marks\n", hemanta.marks);
    printf("Good news guys: %s\n", hemanta.name);

    // Print information about 'sandeep'
    printf("lol guys sandeep is : %s\n", sandeep.name);

    /*
        Arrow Operator
        (*ptr).code   ==   ptr->code
    */

    return 0;
}
