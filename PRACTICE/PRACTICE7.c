#include <stdio.h>
//Conditional Operators: Ternary
int main(){

int age;
printf("enter age : ");
scanf("%d", &age);

age >= 18 ? printf("adult\n") : printf("not adult\n");

    return 0;
}