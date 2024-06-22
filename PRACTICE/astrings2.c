#include <stdio.h>
#include <string.h>
#include <stdlib.h>
    
int main(){
    
    // char name[] = "hemanta kumar bhoi";
    // char newname[] = "madhuri manju";
    // int length = strlen(name);
    // printf("length of the string is: %d.\n", length);
    // strcat(name,newname);
    // puts(name);
    // strcpy(name, newname);
    // printf("%s  %s.\n", name, newname);
    // char class[] = "hemanta";
    // printf("%s\n", strrev(class));

    // taking input in string using character not by direct word
    // char str[100];
    // char ch;
    // int i = 0;
    // while(ch != '\n'){
    //     scanf("%c", &ch);
    //     str[i] = ch;
    //     i++;
    // }
    // str[i]= '\0';
    // printf("the string is: %s", str);
    
    char password[50];
    char salt[] = "123";
    printf("Enter your password: ");
    scanf("%s", password);
    strcat(password, salt);
    printf("Your new password is: %s", password);
    // char newpassword[100];
    // strcpy(newpassword,password);
    // strcat(newpassword, salt);
    // printf("Your new password is: %s", newpassword);

    return 0;
}