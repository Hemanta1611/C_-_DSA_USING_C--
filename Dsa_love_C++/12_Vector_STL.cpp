/*--------- Very Important ---------*/

/*
---------- Standard Template Library ---------

1. The STL provides a collectiion of template classes and functions that
offer common DSA to make programming more efficient and convenient.
2. A vector in C++ is a dynamic array that can grow or shrink in size, making it a veratile
and efficient data structure for storing and manipulating sequences of elements.

*/


#include <iostream>
#include <vector>
using namespace std;

void fun(int a[], int n){
    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<"\t";
    }
    cout<<endl;
}

void print(vector<int> v){
    int size = v.size();
    for (int i = 0; i < size; i++)
    {
        // cout<<v[i]<<"\t";
        cout<<v.at(i)<<"\t";
    }
    cout<<"\n";
}

void print_vector(vector<int> v){
    for(auto element: v){
        cout<<element<<"\t";
    }
    cout<<endl;
}
int main(){
    
    // Static Array
    /*
    int arr1[5] = {1, 2, 3, 4, 5};
    fun(arr1, 5);
    */

    // Dynamic Array
    /*
    int n;
    cin>>n;
    int *arr2 = new int[n]; // each element would be 0 or garbage as we haven't added any element
    for (int i = 0; i < n; i++)
    {
        cin>>arr2[i];
    }
    fun(arr2, n);
    */


    // in vector, we don't need to tell size of vector, just keep inserting elements, vector will manage the size
    // vector<int> varr;   // its just an array but dynamic

    // Inserting elements
    /*
    varr.push_back(1);
    varr.push_back(2);
    varr.push_back(3);
    print(varr);
    cout<<"capacity:"<< varr.capacity()<<"\tsize: "<<varr.size()<<endl; // capacity increases dynamically/automatically by compiler

    // Deleting elements
    varr.pop_back(); // delete last element
    print(varr);
    cout<<"capacity:"<< varr.capacity()<<"\tsize: "<<varr.size()<<endl; // capacity increases dynamically/automatically by compiler

    int n;cin>>n;
    for (int i = 0; i < n; i++)
    {
        int element;
        cin>>element;
        varr.push_back(element);
    }
    print(varr);

    // to remove all elements from vector/ clear the vector
    varr.clear();
    cout<<"Vector: ", print(varr);
    */


   // Vector Initialization
   vector<int> arr1; // default vector with no data, 0 size
   vector<int> arr2(5, 69); // initial size of 5, with data = 69: 5times
   print(arr1);
   arr2.push_back(96);
   print(arr2);
    
    vector<int>arr3 = {1,2,3,4};
    arr3.pop_back();
    arr3.push_back(7);
    print(arr3);

    vector<int>arr4{2,4,6,8};
    print(arr4);

    // copy vector
    vector<int> arr5{1,2,3,4,5};
    vector<int> arr6(arr5);
    cout<<"arr6 = ", print_vector(arr6);

    // element at some position
    cout<<"First element: "<< arr6[0]<<endl;
    cout<<"First element: "<< arr6.front()<<endl;
    cout<<"Last element: "<< arr6[arr6.size() -1]<<endl;
    cout<<"Last element: "<< arr6.back()<<endl;

    vector<char> arr11;
    arr11.push_back('a');
    arr11.push_back('b');
    arr11.push_back('c');
    for (int i = 0; i < arr11.size(); i++)
    {
        cout<<arr11[i]<<"\t";
    }
    cout<<endl;

    
    return 0;
}