#include <stdio.h>
    
   // PROGRAM TO CHECK A NUMBER IS PALINDROME OR NOT.

int main(){
    
   int n, r, reverse = 0;
   printf("Enter a number to check wheter it is palindrome or not: ");
   scanf("%d", &n);
   int temp = n;

   while(n>0){
    r = n % 10;
    reverse = reverse*10 + r;
    n = n / 10;
   }
   if( reverse == temp)
   printf("%d is palindrome number.", temp);
   else
   printf("%d is not a palindrome number.", temp);

    return 0;
}