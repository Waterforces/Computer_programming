#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    set<int, greater<int> > se;
    map<int,set<string>  > mp;
    cin >> n;
    for(int i=0;i<n;i++) {
        string s;
        int a;
        cin >> s >> a;
        se.insert(a);
        mp[a].insert(s);
    }
    // reverse(se.begin(),se.end());
    int m;
    cin >> m;
    for(auto x: se) {
        m--;
        if(m<0) return 0;
        cout << x << " ";
        for(auto y: mp[x]) cout << y << " ";
        cout << "\n"; 
    }
}