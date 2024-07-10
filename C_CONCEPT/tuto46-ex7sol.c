#include <stdio.h>
    
typedef struct driver{
    char name[45];
    char dlno[45];// dlno = driving licence number
    int kms;
    }dr;
int main(){
    
    dr d1,d2,d3;
    // printf("Enter the details of the drivers \n");
    // printf("Enter the name of the 1st drivers \n");
    // scanf("%s", &d1.name);
    // printf("Enter the driving licence  of the 1st drivers \n");
    // scanf("%s", &d1.dlno);
    // printf("Enter the route of the 1st drivers \n");
    // scanf("%d", &d1.kms);
    // // similarly we can copy paste above and print details of other drivers

    // Input details for each driver
    for (int i = 0; i < 3; i++) {
        printf("Enter the details of driver %d:\n", i + 1);
        printf("Enter the name of driver %d: ", i + 1);
        scanf("%s", drivers[i].name); // No & needed for array names (string)
        printf("Enter the driving licence of driver %d: ", i + 1);
        scanf("%s", drivers[i].dlno);
        printf("Enter the route of driver %d: ", i + 1);
        scanf("%d", &drivers[i].kms); // Use & for integers
    }

    // Displaying entered details
    printf("\nDriver details:\n");
    for (int i = 0; i < 3; i++) {
        printf("Driver %d:\n", i + 1);
        printf("Name: %s\n", drivers[i].name);
        printf("Driving Licence Number: %s\n", drivers[i].dlno);
        printf("Kms driven: %d\n", drivers[i].kms);
        printf("\n");
    }

    return 0;
}