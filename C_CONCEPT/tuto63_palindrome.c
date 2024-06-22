#include <stdio.h>
#include <string.h>

int checkPalindrome(int num){
    int reminder, reversed = 0;
    int temp = num;

    while(num != 0){
    reminder = num % 10;
    reversed = reversed * 10 + reminder;
    num = num / 10;
    }

    if(reversed == temp){
        return 1;
    }
    else{
        return 0;
    }
}

int main(){
    
    int n;
    printf("Enter a number to check a number is palindrome or not \n");
    scanf("%d", &n);
    if(checkPalindrome(n) == 1){
        printf("%d is palindrome number.", n);
    }
    else{
        printf("%d is not a palindrome number.", n);
    }
    
    return 0;
}