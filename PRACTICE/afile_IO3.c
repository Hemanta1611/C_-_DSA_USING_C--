#include <stdio.h>
#include <string.h>
#include <stdlib.h>
    
int main(){
    
    FILE * fptr;
    fptr = fopen("Student.txt", "w");
    char name[100];
    int age;
    float cgpa;

    printf("Enter name of student: ");
    scanf("%[^\n]s", name);
    printf("Enter age of student: ");
    scanf("%d", &age);
    printf("Enter cgpa of student: ");
    scanf("%f", &cgpa);

    fprintf(fptr, "Student Name: %s\n", name);
    fprintf(fptr, "Student Age: %d\n", age);
    fprintf(fptr, "Student Mark: %f\n", cgpa);

    fclose(fptr);

    return 0;
}