#include<bits/stdc++.h>
using namespace std;

int main() {
    int n,k;
    cin >> n >> k;
    map<string,set<int> > mp;
    for(int i=0;i<n;i++) {
        string s;
        int t;
        cin >> s >> t;
        mp[s].insert(t);
    }
    int cnt=0;
    for(auto [a,b]: mp) {
        if(b.size()==k) cnt++;
    }
    cout << cnt;
}