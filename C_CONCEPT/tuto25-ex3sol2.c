#include <stdio.h>
    
int main(){
    
    int n, c;
    int a=0, b=1;

    printf("Enter number of Terms: \n");
    scanf("%d", &n);

   for (int i = 1; i <= n; i++)
   {
    printf("%d \t", a);
    c = a+b;
    a=b;
    b=c;
   }

    return 0;
}