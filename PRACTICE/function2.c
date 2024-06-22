#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

void printTable(int n);
int sum(int a, int b);
float suma(float a, float b);
void calculateprice(float value);
void areaofsquare(float a);
void areaofcircle(float b);
void areaofrectangle(float a, float b);

    
int main(){
    
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);
    printTable(a); // here a = argument or actual parameter means values that aae passed in fucntion call -> used to send value

    int n1, n2;
    printf("Enter two number for addition: \n");
    scanf("%d%d", &n1, &n2);
    printf("Sum of these two number is %d", sum(n1,n2));

    float n3, n4;
    printf("\nEnter two number for addition: \n");
    scanf("%f%f", &n3, &n4);
    printf("Sum of these two number is %f", suma(n3,n4));

    float n5;
    printf("\nEnter a value to find its total cost including GST: ");
    scanf("%f", &n5);
    calculateprice(n5);
    printf("value of n5 is %f\n", n5);

    float n6;
    printf("Enter a number to find its square: ");
    scanf("%f", &n6);
    printf("Square of a number is %f\n", pow(n6,2));

    float n7, n8, n9, n10;
    printf("Enter side of square: ");
    scanf("%f", &n7);
    areaofsquare(n7);
    printf("Enter radius of circle: ");
    scanf("%f", &n8);
    areaofcircle(n8);
    printf("Enter sides of rectangle: \n");
    scanf("%f%f", &n9,&n10);
    areaofrectangle(n9, n10);
    
    return 0;
}

void printTable(int n){ // here n is parameter or formal parameter means values in function declaration & definition -> used to receive value
    for (int i = 1; i < 11; i++)
    {
        printf("%d X %d = %d\n", n, i, n*i);
    }
}

int sum(int a, int b){
    int c = a + b;
    return c;
}

float suma(float a, float b){
    float c = a + b;
    return c;
}

void calculateprice(float value){
    value = value + (0.18 * value);
    printf("Final price is: %f\n", value);
}

void areaofsquare(float a){
    printf("Area of square is %f\n", a*a);
}

void areaofcircle(float r){
    printf("Area of circle is %f\n", 3.14*r*r);
}

void areaofrectangle(float a, float b){
    printf("Area of rectangle is %f\n", a*b);
}