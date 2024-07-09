/*#include <stdio.h>

int main(){

int i;
for ( i = 0; i < 10; i++)
 printf("%d\n", i);
// if there is one line in for loop then there is no need to use {}.

return 0;
}*/

/*#include <stdio.h>

int main(){

int i, age;
for ( i = 0; i < 10; i++){
 printf("%d\t Enter your age:\t", i);
scanf("%d", &age);
if (age>10)
{
    break;
}

}
return 0;
}// break statement 
*/

#include <stdio.h>
// continue statements
int main(){

int i, age;

// Start of a for loop that runs 10 times
    for(i = 0; i < 10; i++) {
        // Print the current value of i and prompt the user to enter their age
        printf("%d\t Enter your age\t", i);
        // Read the user input and store it in the age variable
        scanf("%d", &age);

        // Check if the entered age is greater than 10
        if(age > 10) {
            // If the condition is true, skip the remaining statements in the loop and continue with the next iteration
            continue;
        }

        // If the age is 10 or less, execute the following print statements
        printf("we have not come across any continue statements\n");
        printf("we have not come across any continue statements\n");
        printf("we have not come across any continue statements\n");
        printf("we have not come across any continue statements\n");

        // Print a message indicating Hemanta is a good boy
        printf("Hemanta is a good boy");

        // Exit the loop immediately after executing the above statements
        break;
    }
    return 0;
}
