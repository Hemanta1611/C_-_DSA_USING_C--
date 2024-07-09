#include <stdio.h>

int main() {
    char input;  // Declare a character variable 'input' to store user input
    float kmsTOmiles = 0.62137;      // Conversion factors for different units
    float inchesTOfoot = 0.08333333;
    float cmsTOinches = 0.39370079;
    float poundTOkgs = 0.45359237;
    float inchesTOmeters = 0.0254;
    float first, second;  // Variables to store user input and converted values

    while (1) {  // Infinite loop to continue running until 'q' is entered
        // Prompt the user to enter an input character or 'q' to quit
        printf("Enter the input character. 'q' to quit\n"
               "  1. kms to miles\n"
               "  2. inches to foot\n"
               "  3. cms to inches\n"
               "  4. pound to kg\n"
               "  5. inches to meters\n");
        scanf(" %c", &input);  // Read the input character

        switch (input) {
            case 'q':  // If 'q' is entered, exit the program
                printf("Quitting the program...\n");
                goto end;  // Jump to the end label to terminate the program
                break;

            case '1':  // If '1' is entered, convert kms to miles
                printf("Enter quantity in terms of first unit:\n");
                scanf("%f", &first);  // Prompt and read the quantity in kms
                second = first * kmsTOmiles;  // Convert kms to miles
                printf("%f kilometers is equal to %f miles\n", first, second);
                break;

            case '2':  // If '2' is entered, convert inches to foot
                printf("Enter quantity in terms of first unit:\n");
                scanf("%f", &first);  // Prompt and read the quantity in inches
                second = first * inchesTOfoot;  // Convert inches to foot
                printf("%f inches is equal to %f foot\n", first, second);
                break;

            case '3':  // If '3' is entered, convert cms to inches
                printf("Enter quantity in terms of first unit:\n");
                scanf("%f", &first);  // Prompt and read the quantity in cms
                second = first * cmsTOinches;  // Convert cms to inches
                printf("%f cms is equal to %f inches\n", first, second);
                break;

            case '4':  // If '4' is entered, convert pound to kg
                printf("Enter quantity in terms of first unit:\n");
                scanf("%f", &first);  // Prompt and read the quantity in pounds
                second = first * poundTOkgs;  // Convert pound to kg
                printf("%f pound is equal to %f kgs\n", first, second);
                break;

            case '5':  // If '5' is entered, convert inches to meters
                printf("Enter quantity in terms of first unit:\n");
                scanf("%f", &first);  // Prompt and read the quantity in inches
                second = first * inchesTOmeters;  // Convert inches to meters
                printf("%f inches is equal to %f meters\n", first, second);
                break;

            default:  // Default case if an invalid input is entered
                printf("Invalid input. Please enter a valid option.\n");
                break;
        }
    }

end:
    return 0;
}
