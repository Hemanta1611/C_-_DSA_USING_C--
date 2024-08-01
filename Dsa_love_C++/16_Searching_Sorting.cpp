#include <iostream>
#include <vector>

using namespace std;

int main() {
    
    // Binary Search in a 2D-Array
    class Solution {
    public:
        bool searchMatrix(vector<vector<int>>& matrix, int target) {
            int row = matrix.size(); // Get the number of rows
            int col = matrix[0].size(); // Get the number of columns
            int n = row * col; // Total number of elements in the matrix

            int s = 0; // Start of the search range
            int e = n - 1; // End of the search range

            while (s <= e) {
                int mid = s + (e - s) / 2; // Calculate the midpoint
                // Access the element at the flattened index mid
                if (matrix[mid / col][mid % col] == target) {
                    return true; // Element found
                } else if (matrix[mid / col][mid % col] > target) {
                    e = mid - 1; // Move the end to the left
                } else {
                    s = mid + 1; // Move the start to the right
                }
            }
            return false; // Element not found
        }
    };

    // Test the solution with an example
    Solution sol;
    vector<vector<int>> matrix = {
        {1, 3, 5, 7},
        {10, 11, 16, 20},
        {23, 30, 34, 60}
    };
    int target = 3;
    cout << (sol.searchMatrix(matrix, target) ? "Found" : "Not Found") << endl;
    
    return 0;
}

/*
There is an integer array nums sorted in ascending order (with distinct values).

Prior to being passed to your function, nums is possibly rotated at an unknown pivot index k (1 <= k < nums.length) 
such that the resulting array is [nums[k], nums[k+1], ..., nums[n-1], nums[0], nums[1], ..., nums[k-1]] (0-indexed). 
For example, [0,1,2,4,5,6,7] might be rotated at pivot index 3 and become [4,5,6,7,0,1,2].

Given the array nums after the possible rotation and an integer target, return the index of target if 
it is in nums, or -1 if it is not in nums.

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
    int pivotIndex(vector<int>& nums) {
        int start = 0;
        int end = nums.size() - 1;

        while (start <= end) {
            int mid = start + (end - start) / 2;
            // Corner case: if start is equal to end, we have a single element
            if (start == end) {
                return start;
            }
            // If mid is greater than the next element, mid is the pivot
            if (mid + 1 <= nums.size() - 1 && nums[mid] > nums[mid + 1]) {
                return mid;
            }
            // If mid is less than the previous element, mid-1 is the pivot
            if (mid - 1 >= 0 && nums[mid] < nums[mid - 1]) {
                return mid - 1;
            }
            // If mid is greater than or equal to start, the pivot is in the right half
            if (nums[mid] >= nums[start]) {
                start = mid + 1;
            } else {
                end = mid - 1;
            }
        }
        return -1;
    }

    int binarySearch(vector<int>& nums, int s, int e, int target) {
        while (s <= e) {
            int mid = s + (e - s) / 2;
            if (nums[mid] == target) {
                return mid;
            } else if (nums[mid] > target) {
                e = mid - 1;
            } else {
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

        // Search in the left half or right half depending on the target value
        if (target >= nums[start] && target <= nums[pivotindex]) {
            ans = binarySearch(nums, start, pivotindex, target);
        } else {
            ans = binarySearch(nums, pivotindex + 1, nums.size() - 1, target);
        }
        return ans;
    }
};

*/

/*
Given a non-negative integer x, return the square root of x rounded down to the nearest integer. 
The returned integer should be non-negative as well.

You must not use any built-in exponent function or operator.

For example, do not use pow(x, 0.5) in C++ or x ** 0.5 in Python.

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
        while (s <= e) {
            double m = s + (e - s) / 2;
            if (m * m == x) {
                return m;
            } else if (m * m > x) {
                e = m - 1;
            } else {
                s = m + 1;
                ans = m;
            }
        }
        return ans;
    }
};
*/
