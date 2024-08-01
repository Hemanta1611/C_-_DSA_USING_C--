#include <iostream>
#include <vector>
#include <string.h>
#include <algorithm>
using namespace std;

// Solution to decode a message using a given key
class Solution {
public:
    string decodeMessage(string key, string message) {
        char start = 'a';
        char mapping[300] = {0}; // Create an array to map characters from the key to 'a' to 'z'

        // Create the mapping based on the key
        for(auto ch : key) {
            if(ch != ' ' && mapping[ch] == 0) {
                mapping[ch] = start;
                start++;
            }
        }

        // Decode the message using the mapping
        string ans;
        for(auto ch : message) {
            if(ch == ' ') {
                ans.push_back(' '); // Keep spaces as they are
            } else {
                ans.push_back(mapping[ch]);
            }
        }
        return ans;
    }
};

// Solution to calculate total time for garbage collection
class Solution2 {
public:
    int garbageCollection(vector<string>& garbage, vector<int>& travel) {
        int Mtime = 0, Ptime = 0, Gtime = 0; // Initialize time counters for M, P, G
        int x = 0, y = 0, z = 0; // Variables to store the last positions of M, P, G

        // Calculate time for 'M' garbage collection
        for(int i = 0; i < garbage.size(); i++) {
            string temp = garbage[i];
            int Mcount = count(temp.begin(), temp.end(), 'M');
            if(Mcount > 0) {
                Mtime += Mcount;
                x = i;
            }
        }
        int MtravelTime = 0;
        if(x > 0) {
            for(int j = 0; j < x; j++) {
                MtravelTime += travel[j];
            }
        }
        Mtime += MtravelTime;

        // Calculate time for 'P' garbage collection
        for(int i = 0; i < garbage.size(); i++) {
            string temp = garbage[i];
            int Pcount = count(temp.begin(), temp.end(), 'P');
            if(Pcount > 0) {
                Ptime += Pcount;
                y = i;
            }
        }
        int PtravelTime = 0;
        if(y > 0) {
            for(int j = 0; j < y; j++) {
                PtravelTime += travel[j];
            }
        }
        Ptime += PtravelTime;

        // Calculate time for 'G' garbage collection
        for(int i = 0; i < garbage.size(); i++) {
            string temp = garbage[i];
            int Gcount = count(temp.begin(), temp.end(), 'G');
            if(Gcount > 0) {
                Gtime += Gcount;
                z = i;
            }
        }
        int GtravelTime = 0;
        if(z > 0) {
            for(int j = 0; j < z; j++) {
                GtravelTime += travel[j];
            }
        }
        Gtime += GtravelTime;

        // Calculate total time for all garbage collection
        int totalTime = Mtime + Ptime + Gtime;
        return totalTime;
    }
};

// Solution to custom sort a string based on the order of characters in another string
class Solution3 {
public:
    string customSortString(string order, string s) {
        string ans = "";
        sort(s.begin(), s.end()); // Sort the string to handle characters not in order

        // Append characters in 'order' first
        for(int i = 0; i < order.size(); i++) {
            char ch = order[i];
            int countCh = count(s.begin(), s.end(), ch);
            int index = s.find(ch);
            if(countCh > 0) {
                for(int j = 0; j < countCh; j++) {
                    ans.push_back(ch);
                }
                s.erase(index, countCh); // Remove the counted characters from 's'
            }
        }

        // Append remaining characters from 's'
        ans += s;
        return ans;
    }
};

int main() {
    cout << "Hello World!" << endl;
    return 0;
}
