#include<bits/stdc++.h>
using namespace std;

int main() {
    int n,m;
    cin >> n >> m;
    map<string,set<string> > dept;
    map<string,string> info;
    for(int i=0;i<n;i++) {
        string nm, dp;
        cin >> nm >> dp;
        dept[dp].insert(nm);
        info[nm]=dp;
    }
    for(int i=0;i<m;i++) {
        int t;
        string a,b;
        cin >> t >> a >> b;
        if(t==1) {
            string old=info[a];
            dept[old].erase(a);
            dept[b].insert(a);
            info[a]=b;
        }
        else {
            for(auto x: dept[a]) {
                info[x]=b;
                dept[b].insert(x);
            }
            dept.erase(a);
        }
    }
    for(auto [a,b]: dept) {
        cout << a << " ";
        for(auto c: b) cout << c << " ";
        cout << "\n";
    }
}