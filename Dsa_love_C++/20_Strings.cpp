#include <iostream>
#include <vector>
#include <string.h>
#include <algorithm>
using namespace std;

class Solution {
public:
    string removeDuplicates(string s) {
        string result;
        for(char c : s){
            if(!result.empty() && result.back() == c){
                result.pop_back();
            }
            else
                result.push_back(c);
        }
        return result;
    }
};

class Solution2 {
public:
    string removeOccurrences(string s, string part) {
        // int strlen = s.size();
        // int partlen = part.size();

        // while(s.find(part) != string::npos){
        //     for(int i = 0; i < s.size(); i++){
        //         if(s.substr(i, partlen) == part){
        //             s.erase(i, partlen);
        //             goto x;
        //         }
        //     }
        //     x:
        // }

        while(s.find(part) != string::npos){
            s.erase(s.find(part), part.length());
        }

        return s;
    }
};

class Solution3 {
public:
    bool checkPalindrome(string s, int start, int end){
        for(int i = start, j = end; i <= j; i++, j--){
            if(s[i] != s[j]){
                return false;
            }
        }
        return true;
    }
    bool validPalindrome(string s) {
        int i = 0;
        int j = s.size() - 1;

        while(i <= j){
            if(s[i] == s[j]){
                i++;
                j--;
            }
            else{
                // s[i] != s[j]
                // 1 time removal of 1 character is allowed
                // check palindrome for remaining after removal of character

                // i th character remove
                bool ans1 = checkPalindrome(s, i+1, j);
                // j th character remove
                bool ans2 = checkPalindrome(s, i, j-1);
                // if(ans1 == false && ans2 == false){
                //     return false;
                // }
                return ans1 || ans2;
            }
        }
        return true;
    }
};

class Solution4 {
public:
    int findMinDifference(vector<string>& timePoints) {
        vector<int> minutesInfo;
        for(int i = 0; i < timePoints.size(); i++){
            string substring = timePoints[i];
            string shour = substring.substr(0, 2);
            int hour = stoi(shour);
            string sminute = substring.substr(3, 2);
            int minute = stoi(sminute);
            int totalTime = (hour * 60) + minute;
            minutesInfo.push_back(totalTime);
        }
        sort(minutesInfo.begin(), minutesInfo.end());
        int minDistance = INT_MAX;
        for(int i = 0; i < minutesInfo.size() -1; i++){
            int dist = abs(minutesInfo[i+1] - minutesInfo[i]);
            if(dist < minDistance){
                minDistance = dist;
            }
        }

        // to check the midnight time properly:
        int lastdist = 1440 + minutesInfo.front() - minutesInfo.back();
        if(lastdist < minDistance){
            minDistance = lastdist;
        }
        return minDistance;
    }
};



int main(){
    
    
    
    return 0;
}