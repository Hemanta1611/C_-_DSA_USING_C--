#include <stdio.h>
#include <string.h>
    // UNION
     union Student{
        int id;
        int marks;
        char fav_char;
        char name[34];
    };

int main(){
    
    union Student s1;
    s1.id = 1;
    s1.marks = 45;
    s1.fav_char = 'u';
    strcpy(s1.name, "Hemanta");// last condition only valid other became corrupt in union
    printf("The id is %d\n", s1.id);
    printf("The marks is %d\n", s1.marks);
    printf("The fav_char is %c\n", s1.fav_char);
    printf("The name is %s\n", s1.name);

    
    return 0;
}