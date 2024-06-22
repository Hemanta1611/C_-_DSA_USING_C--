#include <stdio.h>
// reverse table
int main(){

int a;
printf("enter number:");
scanf("%d", &a);

for (int i = 10; i>=1; i--){
printf("%d\n", a*i);
}

    return 0;
}