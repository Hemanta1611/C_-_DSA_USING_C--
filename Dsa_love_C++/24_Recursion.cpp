#include <iostream>
#include <vector>
using namespace std;

int twoToThePowerN(int n){
    // base case
    if(n == 0){
        return 1;
    }
    int ans = 2 * twoToThePowerN(n - 1);
    return ans;
}

int fibonacci(int n){
    if(n == 0) return 0;
    if(n == 1) return 1;
    return fibonacci(n-1) + fibonacci(n-2);
}

void printArray(int arr[], int size, int index){
    // base case
    if(index >= size) return ;

    cout<<arr[index]<<" ";

    printArray(arr, size, index+1);
}



int main(){
    
    cout<<"2 To the power 10: "<< twoToThePowerN(10)<<endl;
    cout<<"7th term in fibonacci series: "<<fibonacci(7)<<endl;
    
    int arr[] = {10, 20, 30, 40, 50};
    int size = 5;
    int index = 0;
    printArray(arr, size, index);
    
    return 0;
}

/*
Key Points
Base Case: 
    It is essential for terminating the recursive calls and preventing infinite loops.
Recursive Case: 
    This is where the function calls itself with a modified argument, moving towards the base case.
Stack Memory: 
    Each recursive call uses stack memory. Too many recursive calls can lead to a stack overflow. 

*/