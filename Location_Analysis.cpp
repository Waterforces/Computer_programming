#include <iostream>
#include <map>
#include <set>
using namespace std;

int main() {
    int n;
    cin >> n;
    map<string, set<string> > mp;
    string id[n];
    for(int i=0;i<n;i++) {
        cin >> id[i];
        string node;
        while(cin >> node) {
            if(node=="*") break ;
            mp[id[i] ].insert(node);
        }
    }
    string s;
    cin >> s;
    bool check=0;
    for(int i=0; i<n; i++) {
        for(auto x: mp[s]) {
            if(mp[id[i]].count(x)) {
                check = 1;
                cout << ">> " << id[i] << "\n";
            }  
        }
    }
    if(!check) cout << ">> Not Found";
}