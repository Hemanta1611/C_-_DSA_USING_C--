#include <stdio.h>
#include "sum.c"
    
int main(){
    
    int a, b;
    scanf("%d %d", &a, &b);
    printf("sum of these two number is %d", sum(a,b));
    
    return 0;
}