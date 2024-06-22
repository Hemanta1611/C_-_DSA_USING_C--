#include <stdio.h>
// With argument and with return value
int sum(int a, int b)
{
    return a + b;
}
int main(){

int a,b,c;
a = 34;
b = 93;
c = sum(a,b);
printf("a+b = %d", c);

    return 0;
}