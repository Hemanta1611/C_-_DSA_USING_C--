#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct ComputerEngineeringStudent{
    int roll;
    float cgpa;
    char name[100];
}coe;

typedef struct address{
    int house_no;
    int block;
    char city[30];
    char state[30];
}ad;

struct complex{
    int real; 
    int imaginary;
};
    
int main(){
    
    coe s1;
    s1.roll = 1664;
    s1.cgpa = 9.3;
    strcpy(s1.name, "Hemanta");

    printf("Student roll number is: %d.\n", s1.roll);
    printf("Student cgpa is: %f.\n", s1.cgpa);
    printf("Student name is: %s.\n", s1.name);

    ad people[5];
    people[0].house_no = 1;
    people[1].house_no = 2;
    people[0].block = 7;
    people[1].block = 9;
    strcpy(people[0].city,  "bhubaneswar");
    strcpy(people[1].city,  "kolkata");
    strcpy(people[0].state, "Odisha");
    strcpy(people[1].state, "West_Bengal");

    printf("%d\t%d\t%d\t%d\n%s\t%s\n%s\t%s\n\n",people[0].house_no, people[0].block , people[1].house_no, people[1].block, people[0].city, people[0].state, people[1].city, people[1].state);

    struct complex number1 = {5,8};
    struct complex *num = &number1;
    printf("complex number1 is: %d + %di.\n",num->real, num->imaginary); 
    printf("complex number1 is: %d + %di.\n\n",(*num).real, (*num).imaginary); 

    return 0;
}