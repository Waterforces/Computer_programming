#include<iostream>
#include<unordered_map>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
    unordered_map<string, vector<string> > mp;
    vector<string> v;
    
    string name, type;
    while(cin >> name >> type) {
        mp[type].push_back(name);
        if(find(v.begin(),v.end(),type)==v.end()) v.push_back(type);
    }
    for(auto x: v) {
        cout << x << ": ";
        for(auto y: mp[x]) cout << y << " ";
        cout << "\n";
        // cout << x << " ";
    }
}