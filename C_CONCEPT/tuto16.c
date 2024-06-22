/*#include <stdio.h>

int main(){

int i;
for ( i = 0; i < 10; i++)
 printf("%d\n", i);
// if there is one line in for loop then there is no need to use {}.

return 0;
}*/

/*#include <stdio.h>

int main(){

int i, age;
for ( i = 0; i < 10; i++){
 printf("%d\t Enter your age:\t", i);
scanf("%d", &age);
if (age>10)
{
    break;
}

}
return 0;
}// break statement 
*/

#include <stdio.h>
// continue statements
int main(){

int i, age;
for(i=0; i<10; i++){
printf("%d\t Enter your age\t", i);
scanf("%d", &age);

if(age>10){
    continue;
}
//if age is greater than 10 than output will continue till it will less than 10
printf("we have not come across any continue statements\n");
printf("we have not come across any continue statements\n");
printf("we have not come across any continue statements\n");
printf("we have not come across any continue statements\n");
printf("Hemanta is a good boy");
break;
}
    return 0;
}
