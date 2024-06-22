#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

void printHW(int count);
int sumofnatuaralnumber(int n);
int sonn(int n);
int factorial(int n);
float tempconvert(float c);
float percentage(int s, int m, int o);
int fib(int n);
int fibonacci(int n);
    
int main(){
    
    printHW(5);
    int x = sumofnatuaralnumber(5);
    printf("Sum of natural number is %d\n", x);
    int y = sonn(5);
    printf("Sum of natural number is %d\n", y);
    int z = factorial(5);
    printf("Factorial of given number is %d\n", z);
    float xx = tempconvert(37);
    printf("37 degree celcius = %f farenhite temperature.\n", xx);
    float a = percentage(95,94,92);
    printf("Percentage of these three subjects is %f\n", a);
    int b = fibonacci(7);
    printf("fibonacci term at 7 is %d\n", b);

    
    return 0;
}
// recursive function
void printHW(int count){
    if(count == 0){
        return;
    }
    printf("hello world\n");
    printHW(count-1);
}

int  sumofnatuaralnumber(int n){

    if(n == 1){           // this is base case
        return 1;
    }

    // int sum = sumofnatuaralnumber(n-1);
    // int final = sum + n;

    int final = sumofnatuaralnumber(n-1) + n;

    return final;
}

int sonn(int n){
    if(n != 0){           // this is base case
        return n + sonn(n-1);
    }
    else
        return n;
}

// BASE CASE IS AN IMPORTANT BECAUSE IT IS THE CONDITION WHICH STOPS RECURSION

int factorial(int n){
    if(n==0){           // this is base case
        return 1;       
    }
    int final = factorial(n-1) * n;
    return final;
} 

// NORMAL FUNCTIONS
float tempconvert(float c){
    float f = ( c * 9 / 5 ) + 32;
    return f;
}

float percentage(int s, int m, int o){
    return (s + m + o) / 3.0;
}
// int fib(int n){

//     return;
// }
// RECURSIVE FUNCTIONS
int fibonacci(int n){
    if(n == 0){
        return 0;
    }
    else if(n == 1){
        return 1;
    }
    int fibn1 = fibonacci(n-1);
    int fibn2 = fibonacci(n-2);
    int fibn = fibn1 + fibn2;
    return fibn;
}
