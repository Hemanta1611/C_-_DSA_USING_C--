#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Write a function named slice, which takes a string & returns a sliced string from index n to m.

void slice(char str[], int n, int m);
    
int main(){
    
    char name[] = "hemanta";
    slice(name,2,5);
    
    return 0;
}

// void slice(char str[], int n, int m){
//     char sliced[100];
//     int length = strlen(str);
//     for (int i = 0; i < length; i++)
//     {
//         sliced[i] = str[n+i];
//         printf("%c",sliced[i]);
//     }
// }

void slice(char str[], int n, int m){
    char newstr[100];
    int j = 0;
    for (int i = n; i <= m; i++, j++)
    {
        newstr[j] = str[i];
        printf("%c", newstr[j]);
    }
    newstr[j] = '\0';
}