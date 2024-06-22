#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// BOTH MALLOC AND CALLOC ARE ALMOST SIMILAR BOTH PROVIDE DYNAMIC MEMORY
// with just little different don't effect much.
// We use free() which is allocated using malloc & calloc
    
int main(){
    
    int *ptr;
    ptr = (int *) malloc(5*sizeof(int));
    ptr[0] = 1;
    ptr[1] = 3;
    ptr[2] = 5;
    ptr[3] = 7;
    ptr[4] = 9;

    for (int i = 0; i < 5; i++)
    {
        printf("%d\t", ptr[i]);
    }
    printf("\n");
    free(ptr);

    // CALLOC -> even if we don't assign any value to calloc, by default it will store 0 or 0.000000 in memory
    int *ptr1;
    ptr1 = (int *) calloc(5, sizeof(int));

    for (int i = 0; i < 5; i++)
    {
        printf("%d\t", ptr1[i]);
    }
    printf("\n");
    free(ptr1);

    float *ptr2;
    int n;
    printf("Enter how much memory you want: ");
    scanf("%d", &n);
    ptr2 = (float *) calloc(n,sizeof(float));

    for (int i = 0; i < n; i++)
    {
        printf("%f\t", ptr2[i]);
    }
    printf("\n");
    free(ptr2);

    // REALLOC
    // ex- allocate memory for 5 members. then dynamically increase it to 8 numbers
    int * ptr3;
    ptr3 = (int *) calloc(5, sizeof(int));

    printf("Enter numbers(5): \n");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &ptr3[i]);
    }

    ptr3 = realloc(ptr3, 8);
    printf("Enter numbers(8): \n");
    for (int i = 0; i < 8; i++)
    {
        scanf("%d", &ptr3[i]);
    }

    printf("Numbers are: \n");
    for (int i = 0; i < 8; i++)
    {
        printf("number at index[%d] is %d\n",i, ptr3[i]);
    }

    return 0;
}