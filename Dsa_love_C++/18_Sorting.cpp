#include <iostream>
#include <vector>
#include <algorithm> // used to sort the array
using namespace std;
    
void bubbleSort(vector<int>& v){
    int n = v.size();
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1 - i; j++)
        {
            if(v[j] > v[j+1]){
                swap(v[j], v[j+1]);
            }
        }
    }
}

void selectionSort(vector<int> &v){
    int n = v.size();
    for (int i = 0; i < n - 1; i++)
    {
        int minIndex = i; // assume
        for(int j = i + 1; j < n; j++){
            if(v[minIndex] > v[j]){
                swap(v[minIndex], v[j]);
            }
        } 
    }
}

void insertionSort(vector<int> &v){
    int n = v.size();
    for (int i = 1; i < n; i++)
    {   int j;
        int key = v[i];
        for (j = i - 1; j >= 0 && v[j] > key; j--) // v[j] > key --> it means it will run the loop till key is greater than the compared value
        {
            v[j+1] = v[j];
        }
        v[j+1] = key;
    }   
}

void print(vector<int> &v){
    for(int i = 0; i < v.size(); i++){
        cout<< v[i]<< " ";
    }
    cout<<endl;
}

void print2Dv(vector<vector<int>> &v){
        for (int i = 0; i < v.size(); i++)
    {
        for (int j = 0; j < v[i].size(); j++)
        {
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
}    

bool myComparator(int &a, int &b){
    // return a < b;  // increasing order sorting
    // return a > b;  // decreasing order sorting
}

bool myCompFor1stIndex(vector<int> &a, vector<int> &b){
    // return a[0] < b[0]; // sorting based on 0th index
    return a[1] < b[1]; // sorting based on 1st index
}

int binarySearch(vector<int> &v, int start, int end, int target){
    while(start <= end){
        int mid = start + (end - start)/2;
        if(v[mid] == target){
            return mid;
        }
        else if(v[mid] < target){
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
    }
    return -1;
}


int main(){
    
    /*
    vector<int> v = {5, 4, 3, 2, 1};
    bubbleSort(v);
    // selectionSort(v);
    // insertionSort(v);


    sort(v.begin(), v.end());
    sort(v.begin(), v.end(), myComparator);
    // print(v);
    int arr[] = {4, 2, 2, 1, 4, 2, 9, 7 , 5};
    
    sort(arr, arr+ sizeof(arr)/sizeof(int));

    vector<vector<int>> v1{{1 ,22}, {0, 55}, {0, 44}, {0, 33}, {2, 11}};
    cout<<"sorting based on 0th index of each vector"<<endl;
    sort(v1.begin(), v1.end()); // sorting based on 0th index of each vector
    print2Dv(v1);

    cout<<"sorting based on 1th index of each vector"<<endl;
    sort(v1.begin(), v1.end(), myCompFor1stIndex); // sorting based on 1th index of each vector
    print2Dv(v1);



    for (int i = 0; i < sizeof(arr)/sizeof(int); i++)
    {
        cout<<arr[i]<<" ";
    }
    */


    // Exponential Search / Doubling Search/ Galloping Search:
    /*
    vector<int> arr{3, 4, 5, 6, 11, 13, 14, 15, 56, 70};
    int target = 13;

    if(arr[0] == target){
        cout<<"Target element found at index: 0"<<endl;
    }
    else{
        int i = 1;
        while(i < arr.size() && arr[i] <= target){
            i*=2;
        }
        int endIndex = arr.size() - 1;
        int s = i / 2;
        int e = min(i, endIndex);
        int result = binarySearch(arr, s, e, target);

        if(result == -1){
            cout<<"Element is not present in the array: "<<endl;
        }
        else{
            cout<<"Element is present in the array of index: "<< result<<endl;
        }
    }
    */

    
    
    
    return 0; 
}