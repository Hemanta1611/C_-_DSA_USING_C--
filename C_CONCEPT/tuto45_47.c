// MEMORY LAYOUT OF C PROGRAMS - DYNAMIC MEMORY ALLOCATION
// Malloc(), Calloc(), Realloc(), free().
#include <stdio.h>
#include <stdlib.h>

int main(){
    
// use of malloc()
int *ptr;
int n;
// printf("Enter the size of array you want to create \n");
// scanf("%d", &n);

// ptr = (int *) malloc(n * sizeof(int));

// for(int i = 0; i < n; i++){
//     printf("Enter the value no %d of this array\n", i);
//     scanf("%d", &ptr[i]);
// }
// for(int i = 0; i < n; i++){
//     printf("Enter the value at %d of this array is %d\n", i, ptr[i]);
// }

// Use of calloc()
    printf("Enter the size of array you want to create: \n");
    scanf("%d", &n);

    ptr = (int *) calloc(n, sizeof(int)); // Allocating memory using calloc

    if (ptr == NULL) {
        printf("Memory allocation failed. Exiting...\n");
        return 1;
    }

    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++) {
        printf("Enter the value no %d of this array: ", i);
        scanf("%d", &ptr[i]);
    }

    printf("Printing %d integers:\n", n);
    for (int i = 0; i < n; i++) {
        printf("Value at index %d of this array is %d\n", i, ptr[i]);
    }

    // Use of realloc()
    printf("\nEnter the new size of the array you want to create: \n");
    scanf("%d", &n);

    ptr = (int *) realloc(ptr, n * sizeof(int)); // Reallocating memory using realloc

    if (ptr == NULL) {
        printf("Memory reallocation failed. Exiting...\n");
        return 1;
    }

    printf("Enter %d new integers:\n", n);
    for (int i = 0; i < n; i++) {
        printf("Enter the value no %d of this array: ", i);
        scanf("%d", &ptr[i]);
    }

    printf("Printing %d integers:\n", n);
    for (int i = 0; i < n; i++) {
        printf("Value at index %d of this array is %d\n", i, ptr[i]);
    }

    free(ptr); // Freeing dynamically allocated memory

    return 0;
}