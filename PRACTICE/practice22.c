#include <stdio.h>
    
   // PROGRAM FOR INPUT A +VE NUMBER AND TEST FOR ARMSTRONG NUMBER.

int main(){
    
    int a,r,n,c, t = 0;
    printf("Enter a number : ");
    scanf("%d", &n);
    while(n > 0){
        r = n % 10;
        c = r*r*r;
        t = t + c;
        n = n / 10;
       
        printf("cube of digit = %d\n", c);
    }
    
    printf("sum of cube of all digit = %d\n", t);
    if(n = t)
    printf("this number is armstrong number");
    else
    printf("this number is not a armstrong number");
    return 0;
}