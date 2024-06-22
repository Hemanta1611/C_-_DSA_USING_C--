#include <stdio.h>
// Factorial of a number 'n'.
int main(){

int n, a=1;
printf("enter number:");
scanf("%d", &n);

    for( int i = 1; i<=n; i++){
       a = a * i;
    }
printf("Final factorial is %d:", a);
    return 0;
}