#include <iostream>
#include <vector>
    
    
    
using namespace std;
int main(){
    
    // Binary Search in 2D-Array
    class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row = matrix.size();
        int col = matrix[0].size();
        int n = row * col;

        int s = 0;
        int e = n - 1;

        while(s <= e){
            int mid = s + (e - s)/2;
            // any matrix[number] = matrix[number/ col][number % col]
            if(matrix[mid / col][mid % col] == target){
                return true;
            }
            else if(matrix[mid / col][mid % col] > target){
                e = mid - 1;
            }
            else{
                s = mid + 1;
            }
        }
        return false;
    }
};
    
    return 0;
}

/*
There is an integer array nums sorted in ascending order (with distinct values).

Prior to being passed to your function, nums is possibly rotated at an unknown pivot index k (1 <= k < nums.length) such that the resulting array is [nums[k], nums[k+1], ..., nums[n-1], nums[0], nums[1], ..., nums[k-1]] (0-indexed). For example, [0,1,2,4,5,6,7] might be rotated at pivot index 3 and become [4,5,6,7,0,1,2].

Given the array nums after the possible rotation and an integer target, return the index of target if it is in nums, or -1 if it is not in nums.

You must write an algorithm with O(log n) runtime complexity.

 

Example 1:

Input: nums = [4,5,6,7,0,1,2], target = 0
Output: 4
Example 2:

Input: nums = [4,5,6,7,0,1,2], target = 3
Output: -1
Example 3:

Input: nums = [1], target = 0
Output: -1

Solution:
class Solution {
public:
    int pivotIndex(vector<int>& nums){
        int start = 0;
        int end = nums.size() - 1;

        while(start <= end){
            int mid = start + (end - start) /2 ;
            // corner case:
            if(start == end){
                // single element
                return start;
            }
            if(mid + 1 <= nums.size() -1 && nums[mid] > nums[mid + 1]){
                return mid;
            }
            if(mid - 1 >= 0 && nums[mid] < nums[mid - 1]){
                return mid - 1;
            }


            if(nums[mid] >= nums[start]){
                start = mid + 1;
            }
            else{
                end = mid - 1;
            }
        }
        return -1;
    }

    int binarySearch(vector<int>& nums, int s, int e, int target){
        while(s <= e){
            int mid = s + (e - s) / 2;
            if(nums[mid] == target){
                return mid;
            }
            else if(nums[mid] > target){
                e = mid - 1;
            }
            else{
                s = mid + 1;
            }
        }
        return -1;
    }

    int search(vector<int>& nums, int target) {
        int start = 0;
        int end = nums.size() - 1;
        int pivotindex = pivotIndex(nums);
        int ans = -1;

        if(target >= nums[start] && target <= nums[pivotindex]){
            ans = binarySearch(nums, start, pivotindex, target);
        }
        else{
            ans = binarySearch(nums, pivotindex + 1, nums.size() - 1, target);
        }
        return ans;
    }
};

*/




/*
Given a non-negative integer x, return the square root of x rounded down to the nearest integer. The returned integer should be non-negative as well.

You must not use any built-in exponent function or operator.

For example, do not use pow(x, 0.5) in c++ or x ** 0.5 in python.
 

Example 1:

Input: x = 4
Output: 2
Explanation: The square root of 4 is 2, so we return 2.
Example 2:

Input: x = 8
Output: 2
Explanation: The square root of 8 is 2.82842..., and since we round it down to the nearest integer, 2 is returned


Solution:
class Solution {
public:
    int mySqrt(int x) {
        int ans;
        int s = 0;
        int e = x;
        while(s <= e){
            double m = s + (e - s) / 2;
            if(m * m == x){
                return m;
            }
            else if(m * m > x){
                e = m -1;
            }
            else{
                s = m + 1;
                ans = m;
            }
        }

        return ans;
    }
};
*/



/*


*/