/* // CALL BY VALUE & CALL BY REFERENCE
#include <stdio.h>

float add(int a, int b){
    return a+b;
}
    
int main(){
    
    int x = 7, y = 9;
    // add(x,y);
    printf("sum = %f", add(x,y));
    
    return 0;
}*/

#include <stdio.h>

// Function to change the values of two integers using pointers
void changevalue(int *a , int *b) {
    *a = 1234; // Dereference the pointer and set the value to 1234
    *b = 6789; // Dereference the pointer and set the value to 6789
}

int main() {
    int a = 34, b = 56; // Initialize two integers a and b
    printf("The value of a is %d and b is %d \n", a, b); // Print the initial values of a and b
    changevalue(&a, &b); // Call changevalue function, passing the addresses of a and b
    printf("The value of a is now %d and b is %d\n", a, b); // Print the new values of a and b after changevalue is called

    return 0;
}



// #include<stdio.h>
// #include<string.h>
// int main()
// {
// char str[50] = "123456789";
// printf("After reversing string is =%s",strrev(str));
// return 0;}