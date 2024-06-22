#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// function declaration / prototype
void printHello();
void printbye();
void Namaste();
void Bonjour();
    
int main(){
    
    printf("Hello World\n");
    //function call
    printHello();
    printHello();
    printHello();
    printHello();
    printbye();
    printbye();
    printbye();
    char choice;
    printf("Enter i for indian and f for french: ");
    scanf("%c", &choice);
    
    if (choice == 'i')
    {
        Namaste();
    }
    else if (choice == 'f'){
        Bonjour();
    }
    else
        printf("You have entered wrong choice");
    
    return 0;
}

// function defination
void printHello(){
    printf("Hello\n");
}
void printbye(){
    printf("Good Bye\n");
}
void Namaste(){
    printf("Namaste\n");
    Bonjour();
}
void Bonjour(){
    printf("Bonjour\n");
}