#include <iostream>
using namespace std;

int getUnique(int arr[], int size)
{
    // int ans;
    // for (int i = 0; i < size; i++)
    // {
    //     int flag = 0;
    //     for (int j = 0; j < size; j++)
    //     {
    //         if (i != j && arr[i] == arr[j])
    //         {
    //             flag = 1;
    //         }
    //     }
    //     if (flag == 0)
    //     {
    //         ans = arr[i];
    //         break;
    //     }
    // }


    int ans = 0;
    for (int i = 0; i < size; i++)
    {
        ans = ans ^ arr[i];
    }
    
    return ans;
}
int main()
{

    int arr[] = {2, 10, 11, 10, 2, 13, 15, 13, 15};
    int finalAns = getUnique(arr, 9);
    cout << "Final Answer is:" << finalAns << endl;
    // int a = 0, b= 10, c = 2, d = 11, e = 10, f = 2, g = 12, h = 15, i = 12, j = 15;
    // int result = a^b^c^d^e^f^g^h^i^j;
    // cout<<result;


    int arr1[] = {10, 20, 30};
    for (int i = 0; i < sizeof(arr1)/sizeof(int); i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout<<"("<<arr1[j]<<","<<arr1[i]<<")\t";
        }
        cout<<endl;
    }
    

    int arr2[] = {0, 1, 0, 1, 1, 0, 0, 0, 0};
    int zero = 0, one = 0;
    for (int i = 0; i < 8; i++)
    {
        if(arr2[i] == 0)
            zero++;
        else
            one++;
    }
    for (int i = 0; i < 8; i++)
    {
        if(i < zero)
            arr2[i] = 0;
        else if (i >= zero)
            arr2[i] = 1;
    }
    for (int i = 0; i < 8; i++)
    {
        cout<<arr2[i]<<"\t";
    }
    cout<<endl;

    int arr3[] = {10, 20, 30 , 40, 50, 60};
    int temp3 = arr3[5];
    for (int i = 5; i >= 0; i--)
    {
        arr3[i] = arr3[i-1];
        if(i==0)
            arr3[i] = temp3;
    }

    for (int i = 0; i < 6; i++)
    {
        cout<<arr3[i]<<"\t";
    }
    
    
    
    
    

    return 0;
}



