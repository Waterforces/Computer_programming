#include<iostream>
#include<vector>
#include<set>
#include<map>
using namespace std;
map<int, set<int> > mp;
bool ans=0;

void warp(int a,int b,vector<int> v) {
    if(a==b) {
        v.push_back(b);
        ans=1;
        bool b=0;
        for(auto x: v) {
            if(b) cout << " -> ";
            cout << x;
            b=1;
            
        }
        cout << endl;
        return ;
    }
    v.push_back(a);
    for(auto y: mp[a]) warp(y,b,v);
    return ;
}

int main() {
    int n,a,b;
    cin >> n >> a >> b;
    for(int i=0;i<n;i++) {
        int x,y;
        cin >> x >> y;
        mp[x].insert(y);
    }
    vector<int> v;
    warp(a,b,v);
    if(!ans) cout << "no";
}