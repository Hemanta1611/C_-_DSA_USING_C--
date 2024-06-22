#include <iostream>
#include <vector>
using namespace std;


int main(){
    
    // Linear Search
    /*
    vector<int> arr{2, 5, 3, 4, 1, 9, 8, 7, 6};
    bool flag = false;
    int pos;
    for (int i = 0; i < arr.size(); i++)
    {
        if(arr[i] == 7){
            flag = true;
            pos = i;
            break;
        }
    }
    */
    // cout<<"Element present in the array: "<<flag<<" at position: "<<pos<<endl;

    // Binary Search --> applicable only on sorted array it may be ascending or descending
    /*
    vector<int> arr1{1, 2, 3, 4, 5, 6, 7, 8, 9};
    int target1 = 3;
    int start1 = 0;
    int end1 = arr1.size() - 1;
    int pos1;
    
    while (start1 <= end1)
    {
        int mid = (start1 + end1) / 2;
        if(arr1[mid] == target1){
            pos1 = mid;
        }
        else if (target1 < arr1[mid])
        {
            end1 = mid - 1;
        }
        else{
            start1 = mid + 1;
        }
    }
    */
    // cout<<"Element found at index: "<< pos1<<endl;


    /*
    vector<int> arr2{1, 2, 3, 3, 3, 4, 5, 6, 7, 8, 9};
    int target2 = 3;
    int start2 = 0;
    int end2 = arr2.size() - 1;
    int pos2;

    while (start2 <= end2)
    {
        int mid = (start2 + end2) / 2;   // Chances of integer overflow (start + end = can be greater than MAX_INT)
        // int mid = start2 + (end2-start2) / 2;    // to counter this overflow we can do this
        // int mid = start2 / 2 + end2 / 2;    // to counter this overflow we can do this
        if(arr2[mid] == target2){
            pos2 = mid;
            end2 = mid - 1;
            // start2 = mid + 1; // for to find occurance at last occurance index
        }
        else if (target2 < arr2[mid])
        {
            end2 = mid - 1;
        }
        else{
            start2 = mid + 1;
        }
    }
    cout<<"Element found at first occurance index: "<< pos2<<endl;
    */


   /*
    vector<int> arr3{10, 20, 30, 30, 30, 30, 40, 50};
    int target3 = 30;
    int firstOccurance3, lastOccurance3;
    int start3 = 0;
    int end3 = arr3.size() - 1;

    while (start3 <= end3)
    {
        int mid3 = (start3 + end3) / 2; 
        if (arr3[mid3] == target3)
        {
            firstOccurance3 = mid3;
            end3 = mid3 - 1;
        }
        else if(target3 < arr3[mid3]){
            end3 = mid3 -1;
        }
        else{
            start3 = mid3 + 1;
        }
        
    }

    start3 = 0;
    end3 = arr3.size() - 1;
    while (start3 <= end3)
    {
        int mid3 = (start3 + end3) / 2; 
        if (arr3[mid3] == target3)
        {
            lastOccurance3 = mid3;
            start3 = mid3 + 1;
        }
        else if(target3 < arr3[mid3]){
            end3 = mid3 -1;
        }
        else{
            start3 = mid3 + 1;
        }
        
    }
    cout << "The total number of "<< target3<< " element is: "<< (lastOccurance3 - firstOccurance3 + 1)<<endl;
    */



    /*
    Advanced Question on BINARY SEARCH:
    are based on this concept: when we found element in mid and then we move right or left for further search of element
    */


    // find missing element in a sorted array: we will do binary search
    /*
    vector<int> arr{1, 2, 3, 4, 6, 7, 8, 9};
    int index;
    int s = 0, e = arr.size() - 1;

    while (s <= e)
    {
        int m = (s + e ) / 2;
        if (arr[m] - m == 1)
        {
            s = m + 1;
        }
        else if(arr[m] - m != 1){
            index = m;
            e = m - 1;
        }
    }
    int ans = index + 1;
    cout<<"The missing value is: "<< ans<<endl;
    */

    

    
    
    return 0;
}