#include<bits/stdc++.h>
using namespace std;

int main() {
    int n,m,mx=0,mn=INT_MAX;
    vector<pair<string,string> > v_mx,v_mn;
    cin >> n >> m;
    map<string,int> mp;
    string s[n];
    for(int i=0;i<n;i++) {
        int v;
        cin >> s[i] >> v;
        mp[s[i]]=v;
    }
    for(int i=0;i<n;i++) {
        for(int j=i+1;j<n;j++) {
            int dif = abs(m-(mp[s[i] ]+mp[s[j] ]));
            if(dif<mn) {
                mn=dif;
                v_mn.clear();
                v_mn.push_back({s[i],s[j]});
            }
            else if(dif==mn) v_mn.push_back({s[i],s[j]});
            if(dif>mx) {
                mx=dif;
                v_mx.clear();
                v_mx.push_back({s[i],s[j]});
            }
            else if(dif==mx) v_mx.push_back({s[i],s[j]});
        }
    }
    cout << "Best Pair:\n";
    for(auto [f,s]: v_mn) cout << f << " " << s << "\n";
    cout << "Worst Pair:\n";
    for(auto [f,s]: v_mx) cout << f << " " << s << "\n";
}