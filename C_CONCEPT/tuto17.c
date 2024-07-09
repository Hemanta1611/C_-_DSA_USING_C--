// Goto statements, try to avoid this and use only when we need to break multiple loops using single statements

#include <stdio.h>

int main(){

/* 
    Commented out code that uses a label and goto statements:
    label:
    printf("we are inside label\n");
    goto end;
    printf("Hello World\n");
    goto label;
    end:
    printf("we are at end\n");
    */

// Outer for loop that iterates 8 times
    for (int i = 0; i < 8; i++) {
        printf("%d\t", i);  // Print the current iteration number of the outer loop
        
        // Inner for loop that iterates 8 times
        for (int j = 0; j < 8; j++) {
            printf("Enter the number. enter 0 to exit\t");  // Prompt the user to enter a number
            scanf("%d", &num);  // Read the user input and store it in the variable num
            
            if(num == 0) {  // Check if the entered number is 0
                goto end;  // If true, use goto to jump to the label 'end' and exit both loops
            }
        }
    }
    
    end:  // Label 'end' used to exit the loops and mark the end of the program
    return 0;
}