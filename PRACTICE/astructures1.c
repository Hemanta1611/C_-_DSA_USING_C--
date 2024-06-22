#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct student
{
    char name[100];
    int roll;
    float cgpa;
};
    // passing structure to function
void printinfo(struct student s1);
    
int main(){
    
    struct student s1,s2,s3;
    s1.roll = 12619644;
    s1.cgpa = 8.99;
    strcpy(s1.name, "hemanta");
    printf("student name of s1: %s.\n", s1.name);

    
    printf("Roll number of student s1: %d.\n", s1.roll);
    
    printf("CGPA of student s1: %f.\n", s1.cgpa);

    struct student cse[100], aiml[100];
    cse[0].roll = 12341;
    cse[1].roll = 12342;
    aiml[0].roll = 12343;
    aiml[1].roll = 12344;
    strcpy(cse[0].name, "hemanta");
    strcpy(aiml[0].name, "hemanta");
    printf("roll number of 1st cse student: %d.\n", cse[0].roll);
    printf("roll number of 2nd cse student: %d.\n", cse[1].roll);
    printf("roll number of 1st aiml student: %d.\n", aiml[0].roll);
    printf("roll number of 2nd aiml student: %d.\n", aiml[1].roll);
    printf("\n");
    printf("name of 1st cse student is: %s.\n",cse[0].name);
    printf("name of 1st aiml student is: %s.\n",aiml[0].name);
    printf("\n");
 
    // way of initializing a struct  
    struct student hemanta = {"hemanta", 12349, 8.99};
    printf("%s\t%d\t%f\n\n", hemanta.name, hemanta.roll, hemanta.cgpa);

    // struct using pointer
    struct student *ptr = &s1;
    printf("Roll number of s1 student: %d.\n", (*ptr).roll);
    printf("Roll number of s1 student(with arrow operator): %d.\n", ptr->roll);
    printf("Name of s1 student(with arrow operator): %s.\n", ptr->name);
    printf("CGPA of s1 student(with arrow operator): %f.\n", ptr->cgpa);
    printf("\n");

    printinfo(s1);

    return 0;
}

void printinfo(struct student s1){
    printf("student information : \n");
    printf("student.roll = %d\n", s1.roll);
    printf("student.cgpa = %f\n", s1.cgpa);
    printf("student.name = %s\n", s1.name);
}

