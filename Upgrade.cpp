#include<iostream>
#include<vector>
using namespace std;

int main() {
    string id,grade;
    vector<pair<string,string> >   v;
    while(cin >> id) {
        if(id=="q") break ;
        cin >> grade;
        v.push_back({id,grade});
    }
    while(cin >> id) {
        for(auto& [i,g]: v) {
            if(i==id) {
                if(g=="B+") g="A";
                else if(g=="B") g="B+";
                else if(g=="C+") g="B";
                else if(g=="C") g="C+";
                else if(g=="D+") g="C";
                else if(g=="D") g="D+";
                else if(g=="F") g="D";
            }
        }
    }
    for(auto [i,g]: v) cout << i << " " << g << "\n";
}