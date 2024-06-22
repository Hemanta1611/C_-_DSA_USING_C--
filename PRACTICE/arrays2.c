#include <stdio.h>
#include <string.h>
#include <stdlib.h>
    
int main(){
    
    int mark[] = {1,2,3,4,5,6,7};
    int marks[7] = {1,2,3,4,5,6,7};

    printf("mark = %d\tmarks = %d\n", mark[2],marks[2]);
    printf("%d", sizeof(mark));
    printf("\n%d\n", sizeof(marks));
    printf("adress of mark = %d\taddress of marks = %d\n",&mark[0],&marks[0]);
    printf("adress of mark = %d\taddress of marks = %d\n",mark,marks);

    for(int i = 0; i < 7; i++){
        printf("mark[%d] = %d\tmarks[%d] = %d\n", i+1,mark[i],i+1,marks[i]);
    }
    
    int adhar[4];
    int * ptr = &adhar[0];
    for (int i = 0; i < 4; i++)
    {
        printf("index[%d]: ",i+1);
        scanf("%d", (ptr+i));
    }printf("\n\n");
    for (int i = 0; i < 4; i++)
    {
        printf("index[%d]: %d\n",i+1, *(ptr+i));
    }
    
    
    return 0;
}