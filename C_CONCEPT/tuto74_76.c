//AREA OF CIRCLE USING FUNCTION POINTER
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

float distance(int x1, int x2, int y1, int y2){

    float c;
    c = sqrt(((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1)));

    return c;
}
    
int main(){
    
   float (*fptr)(int, int, int, int);
   fptr = &distance;
   int a,b,c,d;
   printf("Choose 4 coordinate of two points:\n");
   scanf("%d%d%d%d", &a,&b,&c,&d);
   float radius = (*fptr)(a,b,c,d);
   printf("area of circle is %f\n", 3.14*radius*radius); 
    
    return 0;
}