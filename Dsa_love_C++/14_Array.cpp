#include <iostream>
using namespace std;
int main(){
    
    // -ve number on left side and +ve number on right side
    /*
    int arr1[] = {23, -7, 12, -10, -11, 40, 60};
    for (int i = 0, j = 0; i < sizeof(arr1)/sizeof(int); i++)
    {
        if (arr1[i] < 0)
        {
            swap(arr1[i], arr1[j]);
            j++;
        }
        
    }
    for (int i = 0; i < sizeof(arr1)/sizeof(int); i++)
    {
        cout<<arr1[i]<<"\t";
    }
    */

    // Dynamic Memory Allocation:
    // 1. allocate int
    int *intPtr = new int(5); // pointer variable 'intPtr' that stores the value '5' in heap memory
    // without using new keyword
    int *intPtr2 = (int *) malloc(sizeof(int));
    *intPtr2 = 5;

    delete intPtr;
    free(intPtr2);


    // 2. allocate array
    int *arr = new int[5];
    // without using new keyword
    int *arr2 = (int *) malloc(5*sizeof(int));

    delete [] arr;
    free(arr2);

    // 3. allocate 2D array
    int rows = 5, cols = 5;
    int **arr3 = new int*[rows];
    for(int i = 0; i<rows; i++){
        arr3[i] = new int[cols];
    }
    // without using new keyword
    int **arr4 = (int **) malloc(rows*sizeof(int*));
    for(int i = 0; i<rows; i++){
        arr4[i] = (int *) malloc(cols*sizeof(int));
    }
    
    for(int i = 0; i<rows; i++){
        free(arr4[i]);
        delete [] arr3[i];
    }
    delete [] arr3;
    free(arr4);
    
    
    
    return 0;
}