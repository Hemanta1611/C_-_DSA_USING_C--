#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int countodd(int arr[], int n);
void reverse(int arr[], int n);

int main(){
    
    int arr[9] = {1,2,3,4,5,6,7,8,9};
    int z = countodd(arr, 9);
    printf("total odd number = %d\n", z);
    reverse(arr, 9);
    int n;
    printf("\nEnter n (n>2) to print fibonacci series You want to printf of: ");
    scanf("%d",&n);
    int fib[n];
    fib[0]=0;
    fib[1]=1;
    printf("%d\t%d\t",fib[0],fib[1]);

    for(int i = 2; i < n; i++){
        fib[i] = fib[i-1]+ fib[i-2];
        printf("%d\t", fib[i]);
    }
    printf("\n");


    return 0;
}

int countodd(int arr[], int n){
    int count = 0;
    int i = 0;
    while (i < n)
    {
        if(arr[i] % 2 != 0){
            count++;
        }
        i++;
    }
    return count;
}
void reverse(int arr[], int n){
    int temp;
    for (int i = 0; i < n/2; i++)
    {
        temp = arr[i];
        arr[i] = arr[n-1-i];
        arr[n-1-i] = temp;
    }
    for (int i = 0; i < n; i++)
    {
        printf("arr[%d] = %d\t", i+1, arr[i]);
    }
}

