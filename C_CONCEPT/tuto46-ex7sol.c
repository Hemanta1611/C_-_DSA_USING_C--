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

    for(int i = 1; i < 4; i++){
        printf("Enter the details of %d driver \n", i);
        printf("Enter the name of %d driver \n", i);
        scanf("%s", &d1.name);
        printf("Enter the driving licence of %d driver \n", i);
        scanf("%s", &d1.dlno);
        printf("Enter the route of %d driver \n", i);
        scanf("%s", &d1.kms);
    }

    return 0;
}