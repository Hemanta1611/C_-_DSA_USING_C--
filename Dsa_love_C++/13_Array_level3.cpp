#include <iostream>
#include <vector>
using namespace std;

void print2Darray(int arr[][3], int row, int col)
{   
    cout<<"Row Wise Elements Access: "<<endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    // cout<<"Column Wise Elements Access: "<<endl;
    // for (int i = 0; i < col; i++)
    // {
    //     for (int j = 0; j < row; j++)
    //     {
    //         cout << arr[j][i] << " ";
    //     }
    //     cout << endl;
    // }
}

void rowsum_colsum(int arr[][4], int row, int column){
    cout<<"Array with row sum & column sum : "<<endl;
    int newarr[row+1][column+1];
    for (int i = 0; i < row; i++)
    {
        int sum = 0;
        for (int j = 0; j < column; j++)
        {
            sum = sum + arr[i][j];
            newarr[i][j] = arr[i][j];
        }
        newarr[i][column] = sum;
    }
    for (int i = 0; i < column+1; i++)
    {
        int sum = 0;
        for (int j = 0; j < row; j++)
        {
            sum = sum + newarr[j][i];
        }
        newarr[row][i] = sum;
    }
    for (int i = 0; i < row+1; i++)
    {
        for (int j = 0; j < column+1; j++)
        {
            cout<<newarr[i][j]<<"\t";
        }
        cout<<endl;
    }
}

void swapArray(int arr[][3], int row, int col){
    for (int i = 0; i < row; i++)
    {
        for (int j = i; j < col; j++)
        {
            swap(arr[i][j], arr[j][i]);
        }
    }
}


int main()
{

    // int arr1[][2] = {{1, 2}, {3, 4}, {5, 6}};
    // print2Darray(arr1, 3, 2);

    // atleast we must have to initialize size/number of column
    // Actually all elements stores/placed linearly in the memory so idex of an element is : c * (i + j) where c = column

    // int arr2[3][4] = {{10, 20, 5, 7}, {2, 4, 6, 8}, {10, 15, 15, 10}};
    // rowsum_colsum(arr2, 3, 4);

    // int arr3[3][3] = {{1,2,3}, {4,5,6}, {7,8,9}};
    // swapArray(arr3, 3, 3);
    // print2Darray(arr3, 3, 3);



    /*------- 2D Array -------*/
    vector<vector<int>> varr(5, vector<int>(10,0));
    // row size = vector.size()
    // column size = vector[row].size()
    /*
    for (int i = 0; i < varr.size(); i++)
    {
        for (int j = 0; j < varr[i].size(); j++)
        {
            cout<< varr[i][j] << " ";
        }
        cout<<endl;
    } 
    */


    vector<vector<int>> varr2;
    vector<int> v1(5, 0);
    vector<int> v2(3, 1);
    vector<int> v3(1, 0);
    vector<int> v4(7, 1);
    vector<int> v5(4, 0);
    varr2.push_back(v1);
    varr2.push_back(v2);
    varr2.push_back(v3);
    varr2.push_back(v4);
    varr2.push_back(v5);

    for (int i = 0; i < varr2.size(); i++)
    {
        for (int j = 0; j < varr2[i].size(); j++)
        {
            cout<< varr2[i][j] << " ";
        }
        cout<<endl;
    }


    return 0;
}