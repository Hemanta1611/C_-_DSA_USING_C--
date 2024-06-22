#include <stdio.h>

int main(){

int age, marks;
printf("Enter you age\n");
scanf("%d", &age);

printf("Enter you marks\n");
scanf("%d", &marks);

switch (age)
{
case 3:
    printf("The age is 3\n");
    switch (marks)
    {
    case 45:
        printf("Your marks is 45");
        break;
    
    default:
    printf("Your marks is not 45");
        break;
    }
    break;

case 13:
    printf("The age is 13\n");
    

case 23:
    printf("The age is 23\n");
    break;

default:
printf("The age is not 3, 13 or 23\n");
    break;
}
return 0;
}

/* if we don't use break and
 then if we print any of above 'age' than than
  all statements will print until break reaches */