#include <iostream>
#include <vector>
    
int searchNearlySorted(int arr[], int size, int target){
    int s = 0;
    int e = size - 1;
    int ans;

    while(s <= e){
        int mid = s + (e -s) / 2;
        if(arr[mid] == target){
            return mid;
        }
        else if(mid - 1 >= 0 && arr[mid - 1] == target){
            return mid - 1;
        }
        else if(mid + 1 < size && arr[mid + 1] == target){
            return mid + 1;
        }
        else if(target > arr[mid]){
            s = mid + 2;
        }
        else{
            e = mid - 2;
        }
    }
    return -1;
}

int findOddOccurringElement(int arr[], int size){
    int s = 0;
    int e = size - 1;

    while(s <= e){
        int mid = s + (e - s) / 2; 
        if(s == e){
            return s;
        }
        if(mid % 2 == 0){
            if(mid + 1 < size && arr[mid] == arr[mid + 1]){
                s = mid + 2;
            }
            else{
                e = mid;
            }
        }
        else{
            if(mid -1 >= 0 && arr[mid] == arr[mid - 1]){
                s = mid + 1;
            }
            else{
                e = mid - 1;
            }
        }
    }
    return -1;
}
    
using namespace std;
int main(){
    
    // binaray search in nearly sorted array:
    int arr[] = {20, 10, 30, 50, 40, 70, 60};
    int n = 7;
    int target = 20;

    int index = searchNearlySorted(arr, n, target);
    if(index == -1){
        cout<<"element not found"<<endl;
    }
    else{
        cout<<"element found at index: "<< index<<endl;
    }

    int arr1[] = {1, 1, 2, 2, 3, 4, 4, 5, 5, 8, 8};
    int size1 = 11;
    int index1 = findOddOccurringElement(arr1, size1);
    if(index1 == -1){
        cout<<"There is no such element."<<endl;
    }
    else{
        cout<<"Element present at index: "<<index1<<endl;
    }
    
    return 0;
}