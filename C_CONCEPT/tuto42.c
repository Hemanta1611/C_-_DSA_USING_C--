// STATIC VARIABLE
#include <stdio.h>
int c = 34; // GLOBAL VARIABLE
    int func1(int b){

    static int h = 9;
    printf("The value of h is %d\n", h);
        h++;
        printf("The value of b inside func1 is %d\n", c);
    // printf("The address of b inside func1 is %d \n", &b );
        return b + h;
    }
int main(){

    int b = 344;
    // printf("The address of b inside main is %d \n", &b );

    int val = func1(b);
    printf("The value in func1 is %d\n", val);
    val = func1(b);
    printf("Now The value in func1 is %d", val);

    return 0;
}