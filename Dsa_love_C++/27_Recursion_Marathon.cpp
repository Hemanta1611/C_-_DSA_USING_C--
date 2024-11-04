#include <iostream>
#include <vector>
using namespace std;

/*
Given two strings word1 and word2, return the minimum number of operations required to convert word1 to word2.

You have the following three operations permitted on a word:

Insert a character
Delete a character
Replace a character
*/

class Solution {
public:
    int solve(string word1, string word2, int i, int j){
        // base case
        if(i >= word1.length()){
            // means here word1 string ends here..
            return word2.length() - j;
        }
        if(j >= word2.length()){
            // means word2 ends
            return word1.length() - i;
        }

        int ans = 0;
        if(word1[i] == word2[j]){
            // character matches
            ans = 0 + solve(word1, word2, i+1, j+1);
        }
        else{
            // character don't matches
            // perform three possible operations:
            // insert
            int option1 = 1 + solve(word1, word2, i, j+1);
            // remove
            int option2 = 1 + solve(word1, word2, i+1, j);
            // replace
            int option3 = 1 + solve(word1, word2, i+1, j+1);
            ans = min(option1, min(option2, option3));
        }
        return ans;
    }
    int minDistance(string word1, string word2) {
        int i = 0;
        int j = 0;
        int ans = solve(word1, word2, i, j);
        return ans;
    }
};

/*
Given an m x n binary matrix filled with 0's and 1's, 
find the largest square containing only 1's and return its area.
*/

class Solution1 {
public:
    int solve1(vector<vector<char>>& matrix, int i, int j, int row, int col, int & maxi){
        // base case
        if(i >= row || j >= col) return 0;

        // explore 3 directions: right, diagonal, down
        int right = solve1(matrix, i, j+1, row, col, maxi);
        int diagonal = solve1(matrix, i+1, j+1, row, col, maxi);
        int down = solve1(matrix, i+1, j, row, col, maxi);

        // check can we build we square from current position
        if(matrix[i][j] == '1'){
            int ans = 1 + min(right, min(down, diagonal));
            maxi = max(maxi, ans);
            return ans;
        }
        else{
            // when we stand on '0'
            return 0;
        }
    }

    int maximalSquare(vector<vector<char>>& matrix) {
        int i = 0, j = 0, row = matrix.size(), col = matrix[0].size();
        int maxi = 0;
        int ans = solve1(matrix, i, j, row, col, maxi);
        return maxi*maxi;
    }
};


int main(){
    
    
    
    return 0;
}