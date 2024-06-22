// MEMORY LEAK IN C
// memory leak means garbage data or program which has no use in some time and 
// we forget to free that data/memory so it makes garbage on heap and that is called memory leak
#include <stdio.h>
#include <string.h>
#include <stdlib.h>


    
int main(){
    
    int a, i = 0;
    int *i2;
    while(i< 4555){
        printf("Welcome to code with harry");
        i2 = malloc(34444*sizeof(int));
        if(i%100 == 0){
            getchar();
        }
        i++;
        free(i2);// if we dont use this free than memory of this program will increase with each time we enter/run and it will crash when memory full
    }
    
    return 0;
}