#include <iostream>
#include <vector>
#include <string.h>
#include <algorithm>
using namespace std;

// Solution to remove consecutive duplicates in a string
class Solution {
public:
    string removeDuplicates(string s) {
        string result;
        for(char c : s) {
            if(!result.empty() && result.back() == c) {
                result.pop_back();
            } else {
                result.push_back(c);
            }
        }
        return result;
    }
};

// Solution to remove all occurrences of a substring from a string
class Solution2 {
public:
    string removeOccurrences(string s, string part) {
        // Keep erasing the found part until it's no longer found in the string
        while(s.find(part) != string::npos) {
            s.erase(s.find(part), part.length());
        }
        return s;
    }
};

// Solution to check if a string can become a palindrome by removing at most one character
class Solution3 {
public:
    // Helper function to check if a substring is a palindrome
    bool checkPalindrome(string s, int start, int end) {
        for(int i = start, j = end; i <= j; i++, j--) {
            if(s[i] != s[j]) {
                return false;
            }
        }
        return true;
    }

    bool validPalindrome(string s) {
        int i = 0;
        int j = s.size() - 1;

        while(i <= j) {
            if(s[i] == s[j]) {
                i++;
                j--;
            } else {
                // Check if the string becomes a palindrome by removing one character
                bool ans1 = checkPalindrome(s, i + 1, j);
                bool ans2 = checkPalindrome(s, i, j - 1);
                return ans1 || ans2;
            }
        }
        return true;
    }
};

// Solution to find the minimum time difference between any two time points in a list
class Solution4 {
public:
    int findMinDifference(vector<string>& timePoints) {
        vector<int> minutesInfo;
        for(int i = 0; i < timePoints.size(); i++) {
            string substring = timePoints[i];
            string shour = substring.substr(0, 2);
            int hour = stoi(shour);
            string sminute = substring.substr(3, 2);
            int minute = stoi(sminute);
            int totalTime = (hour * 60) + minute;
            minutesInfo.push_back(totalTime);
        }

        // Sort the times in minutes
        sort(minutesInfo.begin(), minutesInfo.end());

        // Find the minimum difference between consecutive times
        int minDistance = INT_MAX;
        for(int i = 0; i < minutesInfo.size() - 1; i++) {
            int dist = abs(minutesInfo[i + 1] - minutesInfo[i]);
            if(dist < minDistance) {
                minDistance = dist;
            }
        }

        // Check the time difference across midnight
        int lastdist = 1440 + minutesInfo.front() - minutesInfo.back();
        if(lastdist < minDistance) {
            minDistance = lastdist;
        }

        return minDistance;
    }
};

int main() {
    return 0;
}
