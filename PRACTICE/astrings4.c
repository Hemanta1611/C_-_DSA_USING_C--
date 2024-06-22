#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Write a function to count the occurrence of vowels in a string.

int countvowels(char str[]);
int checkcharacter(char str[], char ch);
    
int main(){
    
    char name[] = "hemanta";
    int count = countvowels(name);
    printf("Total vowels in the string is: %d.\n", count);
    char ch = 'b';
    int index = checkcharacter(name, ch);
    printf("character %c found at index %d.\n", ch, index);
    
    return 0;
}

int countvowels(char str[]){
    int count = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u'){
            count++;
        }
    }
    return count;
}

int checkcharacter(char str[], char ch){
    int i;
    for (i = 0; str[i] != '\0'; i++)
    {
        if(str[i] == ch){
            goto end;
        }
        else 
        return -1;
    }
        end:
        return i;
}