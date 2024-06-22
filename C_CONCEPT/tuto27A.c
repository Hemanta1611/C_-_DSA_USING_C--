// ARRAYS & POINTER IN ARITHMATIC IN C
#include <stdio.h>

int main(){

char a = '3'; 
char *ptra = &a;
printf("%d\n", ptra);
ptra--;
printf("%d\n", ptra);
printf("%d", ptra - 1);

// int a = 34;
// int *ptra = &a;

// printf("%d\n", ptra);
// printf("%d", ptra + 1);

    return 0;
}
// arr[i] == *(arr + i)  same thing
// &arr[i] == arr + i    same thing