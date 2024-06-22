#include <stdio.h>
//area of a circle , if we have to calculate area of square then we can use int and also float
int main (){

    float radius;
    printf("Enter radius");
    scanf("%f", &radius);

    printf("area is %f", 3.14 * radius * radius);
return 0;
}