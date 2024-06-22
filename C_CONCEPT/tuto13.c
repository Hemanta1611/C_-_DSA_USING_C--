/*#include <stdio.h> 
//Do-while loop
int main (){

int num, index=0;
printf("Enter a number\n");
scanf("%d", &num);

do
{
    printf("%d\n", index+1);
    index = index + 1;
} while (index < num);

return 0;
}*/

#include <stdio.h> 
//Do-while loop
int main (){

int a, i=0;
printf("Enter a number\n");
scanf("%d", &a);

do
{
    printf("%d\n", i+1);
    i++;
} while (i < a);

return 0;
}