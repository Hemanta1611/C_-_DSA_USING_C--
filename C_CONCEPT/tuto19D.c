// #include <stdio.h>

// //Funtion Declaration
// void add();

// int main()
// {
//     //Function calling
//     add();
//     return 0;
// }
// // Function Defination
// void add()
// {
//     int a, b, c;
//     printf("\n Enter the value of A & B : ");
//     scanf("%d %d", &a, &b);
//     c = a + b;
//     printf("\n Total : %d", c);
// }

#include <stdio.h>

void Star_Patteern();

int main()
{
    int a;
    printf("Enter how many stars(*) you want : \n ");
    scanf("%d", &a);
    for ( int i = 0; i < a; i++){
        printf("*");
    }
}