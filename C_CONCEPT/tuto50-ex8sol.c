// EMPLOYEE MANAGER USING DYNAMIC MEMORY LOCATION
#include <stdio.h>
#include <stdlib.h>
    
int main(){
    
    int chars, i= 0;
    char *ptr;
    char a, b;
    while(i < 3){
        printf("Employee %d: Enter the number of characters in your employee id: ", i+1);
        scanf("%d", &chars);
        
        getchar();
        // if we don't use this get statement than it will skip or do not consider scanf statement
        printf("Enter the value of a: ");
        scanf("%c", &a);

        getchar();
        // if we don't use this get statement than it will skip or do not consider scanf statement
        printf("Enter the value of b: ");
        scanf("%c", &b);

        ptr = (char *) malloc((chars+1)*sizeof(char));
        printf("Enter your Employee id :");
        scanf("%s", ptr);
        printf("Your Employee id is %s\n", ptr);
        free(ptr);
        i++;
    }
    
    return 0;
}