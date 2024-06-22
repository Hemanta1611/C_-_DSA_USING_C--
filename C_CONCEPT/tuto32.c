// PASSING ARRAYS AS FUNCTION ARGUMENTS.

#include <stdio.h>

      int func1(int array[]){
      array[0] = 1234;
        for(int i = 0; i< 4; i++){
            printf("the value at %d is %d \n", i , array[i]);
        }
       
        return 0;
    }

    int func2(int *ptr){
        for(int i = 0; i< 4; i++){
            printf("the value at %d is %d \n", i , *(ptr+i));
            //OR printf("the value at %d is %d \n", i , ptr[i]);
        }
       *(ptr + 2) = 6543;
       return 0;
    }
    // we can use void also and hence we will not use return

    void func3(int arr[2][2]){
        for(int i = 0; i < 2; i++){
            for(int j =0 ; j< 2; j++){
                printf("the value at %d, %d index is %d \n", i,j, arr[i][j]);
            }
        }
    }
  
int main(){
    
    // int arr[] = {23, 13, 3, 4};
    // printf("The value of index 0 is %d \n", arr[0]);
    // func1(arr);
    // printf("The value of index 0 is %d \n", arr[0]);

    // func2(arr);
    // func2(arr);

    int arr[][2] = {{10, 20},{30,40}};
    func3(arr);

    return 0;
}