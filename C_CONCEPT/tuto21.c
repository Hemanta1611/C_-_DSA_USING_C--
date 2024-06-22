#include <stdio.h>
// RECURSION FUNCTION
int factorial(int num){

    if(num == 1 || num == 0){
    return 1;
    }

    else {
        return (num*factorial(num - 1));
    }
}
int main(){

    int num;
    printf("Enter the number u want the factorial of \n");
    scanf("%d", &num);
    printf("The factorial of %d is %d \n", num, factorial(num) );
    return 0;
}
// easy metod available in (practice17.c)