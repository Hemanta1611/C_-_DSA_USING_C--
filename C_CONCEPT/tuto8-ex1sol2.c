/*#include <stdio.h>

int main(){

int num;
printf("Enter the number you want multiplication table of:\n");
scanf("%d", &num);

printf("Multiplication table of %d is as follows:\n", num);

for (int i = 0; i < 11; i++)
{
    printf("%d X %d = %d\n", num,i, num*i);
}
    return 0;
}*/

#include <stdio.h>

int main(){

int a, i;
printf("Multiplication table of:\n");
scanf("%d", &a);

printf("Multiplication table of %d:\n", a);

for (i = 0; i <= 10; i++)
{
    printf("%d X %d = %d\n", a,i, a*i);
}
    return 0;
}