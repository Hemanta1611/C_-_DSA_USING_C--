// TYPEDEF

#include <stdio.h>

typedef struct student{
        int id;
        int marks;
        char fav_char;
        char name[34];
    } std;
    // for converting student to std we have used typedef from struct student...
    // to char name[34];} than we write short name for student like here std
    // now we can use std instead of student in programm.
    
int main(){
    
    std s1, s2;
    s1.id = 2;
    s2.id = 7;
    printf("Value of s1 id is %d\n", s1.id);
    printf("Value of s2 id is %d\n", s2.id);
    // typedef int A;
    // A a = 5;
    // printf("Value of a is %d", a);
    
    return 0;
}