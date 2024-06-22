#include <stdio.h>
// Sum of 1st n natural numbers. Arranging n numbers in reverse order
int main(){

// int a, i, j;

// scanf("%d", &a);

// int sum = 0;
// for(i=1, j=a; i<=a && j>=1; i++, j--){
//     sum = sum + i;
//     printf("%d\n", j);
// }

int a, i;
scanf("%d\n", &a);

int sum = 0;
for(i=a; i>=1; i++){
    sum = sum + i;
     printf("%d\n", i);
}
printf("sum is %d\n", sum);
    return 0;
}