#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    map<pair<int,string>, string> mp;
    map<pair<int,string>, int> fail;
    map<string,int> tm,cnt;
    set<string> se;
    for(int i=0;i<n;i++) {
        int min,num;
        string name,ans;
        cin >> min >> name >> num >> ans;
        se.insert(name);
        // cout << num << " " << name << " " << cnt[name] << " " << tm[name] << endl;
        if(mp[{num,name}]=="T") continue ;
        if(ans=="T") {
            tm[name]+=min+(fail[{num,name}]*20);
            mp[{num,name}]="T";
            cnt[name]++;
        }
        else fail[{num,name}]++;
    }
    vector<tuple<int,int,string> > v;
    for(auto x: se) {
        if(cnt[x]>0) v.emplace_back(-cnt[x],tm[x],x);
    }
    sort(v.begin(),v.end());
    int j=0,a=0,b=0;
    for(auto [x,y,z]: v) {
        if(j<3 || (a==-x && b==y)) {
            cout << z << " " << -x << " " << y << "\n";       
            a=-x;
            b=y;
        }
        j++;
    }
}