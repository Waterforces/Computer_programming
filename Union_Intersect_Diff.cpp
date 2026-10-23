#include<iostream>
#include<set>
#include<vector>
#include <sstream>
using namespace std;

int main() {
    set<int> un, in, dif;
    string s;
    bool b=0;
    int n=0;
    while(getline(cin,s)) {
        stringstream ss(s);
        int val;
        set<int> cur;
        while(ss >> val) cur.insert(val);
        if(!b) {
            b=1;
            un=cur;
            in=cur;
            dif=cur;
        }
        else {
            for(auto x: cur) un.insert(x);
            set<int> tmp;
            for(auto x: cur) {
                if(in.count(x)) tmp.insert(x);
            }
            in=tmp;
            for(auto x: cur) {
                if(dif.count(x)) dif.erase(x);
            }
        }
    }
    cout << "U: ";
    if(un.empty()) cout << "empty set";
    else {
        for(auto x: un) cout << x << " ";
    }
    cout << "\nI: ";
    if(in.empty()) cout << "empty set";
    else {
        for(auto x: in) cout << x << " ";
    }
    cout << "\nD: ";
    if(dif.empty()) cout << "empty set";
    else {
        for(auto x: dif) cout << x << " ";
    }
}