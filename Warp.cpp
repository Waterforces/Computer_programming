#include<iostream>
#include<vector>
#include<map>
using namespace std;
map<int, vector<int> > mp;
bool ans=0;

void warp(int a,int b) {
    if(a==b) {
        ans=1;
        return ;
    }
    for(auto y: mp[a]) warp(y,b);
    return ;
}

int main() {
    int n,a,b;
    cin >> n >> a >> b;
    for(int i=0;i<n;i++) {
        int x,y;
        cin >> x >> y;
        mp[x].push_back(y);
    }
    warp(a,b);
    if(ans) cout << "yes";
    else cout << "no";
}