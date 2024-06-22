// STRINGS

#include <stdio.h>

    void printstr(char str[]){
        int i = 0;
        while(str[i] != '\0'){
            printf("%c", str[i]);
            i++;
        }
    }

    int main(){

    // char str[] = {'h','e','m','a','n','t','a','\0'};
    // char srr[8] = "hemanta";
    char str[34];
    gets(str);
    printstr(str);
    
    return 0;
}
/*
#include <stdio.h>
    
int main(){
    
    char name[123] = "Hemanta kumar Bhoi";
    printf("%s", name);
    char details[1234];
    scanf("%[^\n]s", details);
    printf("details are = %s", details);
    
    return 0;
}*/
