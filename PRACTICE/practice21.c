// LEAP YEAR
#include <stdio.h>
    
int main(){
    
    int years;
    printf("enter the year u want to check whether it is leap year or not :  ");
    scanf("%d", &years);

    if(years % 100 == 0){
        if(years % 400 == 0){
            printf("This is leap year");
        }
        else
        printf("This is not a leap year");
    }
    else{
        if(years % 4 == 0){
            printf("This is leap year");
        }
        else
        printf("This is not a leap year");
    }
    
    return 0;
}