#include <stdio.h>
#include <string.h>
#include <stdlib.h>
    
int main(){
    
    int marks[9];
    printf("Enter the marks of 1st student: ");
    scanf("%d", &marks[0]);

    int cost[3];
    printf("Enter price of aloo, baigan, piaz: \n");
    scanf("%d%d%d", &cost[0],&cost[1],&cost[2]);

    float total_cost = (cost[0]+ cost[1]+ cost[2]) + (0.18)*(cost[0]+ cost[1]+ cost[2]);

    printf("Total cost of all three items is %f.\n", total_cost);
    
    return 0;
}