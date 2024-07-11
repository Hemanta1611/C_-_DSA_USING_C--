//AREA OF CIRCLE USING FUNCTION POINTER
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Function to calculate distance between two points
float distance(int x1, int y1, int x2, int y2) {
    float dist = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
    return dist;
}

int main() {
    // Declaring function pointer for distance function
    float (*fptr)(int, int, int, int);
    fptr = &distance; // Assigning address of distance function to fptr

    // User input for coordinates of two points
    int a, b, c, d;
    printf("Enter the coordinates of two points (x1, y1, x2, y2):\n");
    scanf("%d %d %d %d", &a, &b, &c, &d);

    // Calculating the radius (distance between two points)
    float radius = (*fptr)(a, b, c, d);

    // Calculating and printing the area of the circle
    float area = 3.14 * radius * radius;
    printf("Area of the circle is: %f\n", area);

    return 0;
}
