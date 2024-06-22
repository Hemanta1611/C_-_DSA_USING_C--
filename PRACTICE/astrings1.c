#include <stdio.h>
#include <string.h>
#include <stdlib.h>
    
int main(){
    
    // char name[] = "hemanta kumar bhoi\n";
    // printf("%s", name);
    // scanf("%[^\n]s", name);
    // printf("%s\n", name);
    // char names[] = {'H','E','M','A','N','T','A','\0'};
    // printf("%s\n", names);
    // char allo[199];
    // scanf("%s", allo);
    // printf("%s\n", allo);

    // char firstname[20];
    // char lastname[20];
    // printf("Enter 1st name : ");
    // scanf("%s", firstname);
    // printf("Enter last name : ");
    // scanf("%s", lastname);
    // printf("1st character of 1st name is %c\n", firstname[0]);
    // printf("characters in the full name is: \n");
    // for (char i = 0; firstname[i] != '\0'; i++)
    // {
    //     printf("<%c>\t", firstname[i]);
    // }
    // for (char i = 0; lastname[i] != '\0'; i++)
    // {
    //     printf("<%c>\t", lastname[i]);
    // }
    // printf("\n");

    // char name[100];
    // printf("enter name: \n");
    // gets(name);
    // puts(name);
    // printf("enter name: \n");
    // fgets(name,100,stdin);
    // puts(name);

    // char *canchange = "hello world";
    // puts(canchange);
    // canchange = "hello";
    // puts(canchange);

    // char cannotchange[] = "hello world";
    // puts(cannotchange);
    // cannotchange = "hello"; // can't be done because this can't be reintialized 
    // puts(cannotchange);

    char name[100];
    fgets(name,100,stdin);
    puts(name);
    printf("Total letters in the name is: ");
    int count = 0;
    // int i = 0;
    // while (name[i] != '\0')
    // {
    //     count = i;
    //     i++;
    // }
    // printf("%d\n", count);
    for (int i = 0; name[i] != '\0'; i++)
    {
        count++;
    }
    printf("%d\n", count-1);
    

    return 0;
}