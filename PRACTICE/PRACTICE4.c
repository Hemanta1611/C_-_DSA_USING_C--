#include <stdio.h>

int main(){
 
int a, b;

printf("Enter a number a = \n");
printf("Enter a number b = \n");

scanf("%d %d", &a, &b);

printf("%d", a%b==0);

    return 0;
}

// a is divisible of b if out put = 1 and undivisible if out put = 0.