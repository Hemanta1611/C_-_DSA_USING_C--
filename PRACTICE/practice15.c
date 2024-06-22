// #include <stdio.h>
// // Taking number until user enters an odd numbers.
// int main(){
// int n;
// do
// {
//     printf("Enter number: ");
//    scanf("%d", &n);
//    printf("%d\n", n);


// if(n % 2 != 0){
//     break;
// }
// } while (1);// 1= true 

// printf("Thank You");
//     return 0;
// }

#include <stdio.h>
// taking numbers until user enters a numbers which is multiple of 7.
int main(){
    int n;
do{
printf("Enter a number:");
scanf("%d", &n);
printf("%d\n", n);

if ( n % 7 == 0){
break;
}
}
while(1);
printf("Thank You");
    return 0;
}