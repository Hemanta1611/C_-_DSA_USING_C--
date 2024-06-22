#include <stdio.h>

int main(){

int m , s;
printf("Enter math marks as m \n");
scanf("%d", &m);

printf("Enter science mark as s \n");
scanf("%d", &s);

printf("You have entered %d as math mark\n and %d as scinence mark\n", m, s);

if (m>=40 && s<40)
{
    printf("You have passed the exam and got 20 rupees\n");
}
else if (m>=40 && s>=40)
{
    printf("You have passed in both exam and got 50 rupees\n");
}
else if (m<40 && s>=40)
{
    printf("You have passed the exam and got 20 rupees\t");
}
else
{
    printf("You have failed in exam and got nothing!!");
}
return 0;
}