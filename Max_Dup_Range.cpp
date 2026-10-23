#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
    int n;
    vector<int> v;
    vector<pair<int,pair<int,int> > > vp;
    while(cin >> n) v.push_back(n);
    v.push_back(-1);
    int l=0,r=-1,t=v[0],mx=0;
    for(int i=0;i<v.size();i++) {
        if(t!=v[i]) {
            if(r-l+1>mx) {
                while(!vp.empty()) vp.pop_back();
                mx=r-l+1;
            }
            if(r-l+1>=mx) vp.push_back({t, {l, r}});
            t=v[i];
            l=r=i;
        }
        else r++;
    }
    sort(vp.begin(),vp.end());
    for(auto [ans,p]: vp) {
        auto [l,r] = p;
        cout << ans << " --> x[ " << l << " : " << r+1 << " ]\n";
    } 
}