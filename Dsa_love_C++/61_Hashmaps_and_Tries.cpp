#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <unordered_map>
using namespace std;



int main(){
    
    map<string, int> mp;
    mp["hemanta"] = 7;
    mp["prabhat"] = 9;

    // Use the map's iterator to access key-value pairs
    for (const auto& pair : mp) {
        cout << pair.first << " key: " << pair.first << ", value: " << pair.second << endl<<endl;
    }

    map<string, int>::iterator it;
    for (it = mp.begin(); it != mp.end(); ++it) {
        cout << it->first << " key: " << it->first << ", value: " << it->second << endl<<endl;
    }

    std::for_each(mp.begin(), mp.end(), [](const auto& pair) {
        cout << pair.first << " key: " << pair.first << ", value: " << pair.second << endl<<endl;
    });

    unordered_map<string, int> ump;
    ump["madhuri"] = 21;
    ump["manju"] = 27;

    pair<string, int> p = make_pair("love", 25);
    pair<string, int> q;
    q.first = "not love";
    q.second = 52;

    ump.insert(p);
    ump.insert(q);

    cout<<"Size of ump: "<<ump.size()<<endl;

    cout<<"value of love: "<<ump.at("love");
    cout<<"\tvalue of love: "<<ump["love"]<<endl;

    cout<<"count of some key: "<<ump.count("love")<<endl; // count can be used for key only, if not present then count = 0;

    if(ump.find("love") != ump.end()){ // it will find the iterator, if its not equal to end
        cout<<"the conditioned key is found."<<endl;
    }
    else{
        cout<<"the conditioned key is not found"<<endl;
    }

    cout<<ump["abab"]<<endl; // here we are trying to print the value, but if its not present then it will create even if its present in the cout<< with value = 0
    cout<<"size: "<<ump.size()<<endl;

    unordered_map<string, int> abc = {{"a", 1}, {"b", 2}};

    



    

    return 0;
}