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

    struct student{
        int id;
        int marks;
        char fav_char;
        char name[34];
    };
int main(){
    
    struct student hemanta, sandeep, dibyanshu;
    hemanta.id = 2;
    sandeep.id = 1;
    dibyanshu.id = 3;
    hemanta.marks = 233;
    sandeep.marks = 234;
    dibyanshu.marks = 235;
    hemanta.fav_char = 'a';
    sandeep.fav_char = 's';
    dibyanshu.fav_char = 't';
    strcpy(hemanta.name, "hemanta is student of this 2023 year");
    strcpy(sandeep.name, "gadha of the year 2089");
    printf("Hemanta got %d marks\n", hemanta.marks);
    printf("Good news guys: %s\n", hemanta.name);
    printf("lol guys sandeep is : %s\n", sandeep.name);

    /*
                Arrow Operator
        (*ptr).code   ==   ptr->co.de
    */
    

    return 0;
}