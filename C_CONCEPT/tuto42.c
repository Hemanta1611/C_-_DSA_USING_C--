// STATIC VARIABLE
#include <stdio.h>

int c = 34; // Global variable

int func1(int b) {
    static int h = 9; // Static variable initialized only once
    printf("The value of h is %d\n", h);
    h++; // Incrementing static variable h
    printf("The value of c inside func1 is %d\n", c); // Accessing global variable c
    return b + h;
}

int main() {
    int b = 344;

    int val = func1(b);
    printf("The value returned by func1 is %d\n", val);

    val = func1(b);
    printf("Now the value returned by func1 is %d\n", val);

    return 0;
}
