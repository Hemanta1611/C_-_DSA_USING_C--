#include <stdio.h>
#include <math.h>

//divisible by 2 or not, divisible than output =1 ot undivisible than out put = 0


int main(){

int x;
printf("Enter a number:");
scanf("%d", &x);
printf("%d", x % 2 == 0);

    return 0;
}