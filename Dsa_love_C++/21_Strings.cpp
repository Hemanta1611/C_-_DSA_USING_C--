#include <iostream>
#include <vector>
#include <string.h>
#include <algorithm>
using namespace std;

class Solution {
public:
    string decodeMessage(string key, string message) {
        char start = 'a';
        char mapping[300] = {0};

        for(auto ch: key){
            if(ch != ' ' && mapping[ch] == 0){
                mapping[ch] = start;
                start++;
            }
        }
        string ans;
        for(auto ch: message){
            if(ch == ' '){
                ans.push_back(' ');
            }
            else{
                ans.push_back(mapping[ch]);
            }
        }
        return ans;
    }
};

class Solution2 {
public:
    int garbageCollection(vector<string>& garbage, vector<int>& travel) {
        int Mtime = 0;
        int Ptime = 0;
        int Gtime = 0;
        int x = 0;
        int y = 0;
        int z = 0;

        for(int i = 0; i < garbage.size(); i++){
            string temp = garbage[i];
            int Mcount = count(temp.begin(), temp.end(), 'M');
            if(Mcount > 0){
                Mtime = Mtime + Mcount;
                x = i;
            }
        }
        int MtravelTime = 0;
        if(x > 0){
            for(int j = 0; j < x; j++){
                MtravelTime += travel[j];
            }
        }
        Mtime = Mtime + MtravelTime;


        for(int i = 0; i < garbage.size(); i++){
            string temp = garbage[i];
            int Pcount = count(temp.begin(), temp.end(), 'P');
            if(Pcount > 0){
                Ptime = Ptime + Pcount;
                y = i;
            }
        }
        int PtravelTime = 0;
        if(y > 0){
            for(int j = 0; j < y; j++){
                PtravelTime += travel[j];
            }
        }
        Ptime = Ptime + PtravelTime;


        for(int i = 0; i < garbage.size(); i++){
            string temp = garbage[i];
            int Gcount = count(temp.begin(), temp.end(), 'G');
            if(Gcount > 0){
                Gtime = Gtime + Gcount;
                z = i;
            }
        }
        int GtravelTime = 0;
        if(z > 0){
            for(int j = 0; j < z; j++){
                GtravelTime += travel[j];
            }
        }
        Gtime = Gtime + GtravelTime;


        int totalTime = Mtime + Ptime + Gtime;
        return totalTime;
    }
};


class Solution3 {
public:
    string customSortString(string order, string s) {
        string ans = "";
        sort(s.begin(), s.end());

        for(int i = 0; i < order.size(); i++){
            char ch = order[i];
            int countCh = count(s.begin(), s.end(), ch);
            int index = s.find(ch);
            if(countCh > 0){
                for(int j = 0; j < countCh; j++){
                    ans.push_back(ch);
                }
                s.erase(index, countCh);
            }
        }
        ans = ans + s;
        return ans;
    }
};

int main(){
    
    
    cout<<"Hello World!"<<endl;

    
    return 0;
}