//STRING FUNCTIONS AND STRING.H LIBRARY

#include <stdio.h>
#include <string.h>
    
int main(){
    
    char s[] = "hii";
    // char s[] = "108396";// char string can also store numbers
    char z[] = "hello";
    char a[34];
    
    strcat(s,z);
    // this function is used to concatenate or combine two given strings
    printf("%s\n", s);
    // or
    //puts(strcat(s,z));  

    printf("The length of s is %d\n", strlen(s));
    printf("The length of z is %d\n", strlen(z));
    //strlen functions is used to find length of string  

    printf("The reversed of string s is %s\n", strrev(s));
    printf("The reversed of string z is %s\n", strrev(z));
    //or
    //printf("the length of s is: ");
    //puts(strrev(s));
    // strrev function is used to reverse the string  

    strcpy(a,s);
    // strcpy function is used to copy string into another string
    puts(a);
    printf("\n");

    printf("The compare of two string s1 & s2 is %d", strcmp(s,z));
    // some time it return +ve value when character of 1st string is greater
    // don't necessery thar it will return ascii value
    // return -ve value when character of 1st string is less than 2nd string

    return 0;
}

/*
            IMPORTANT NOTE
    1. scanf() can't input multi-word strings with spaces
    2. gets() and puts() is used to print multi-word string with spaces only 
*/

