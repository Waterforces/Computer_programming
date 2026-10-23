#include<bits/stdc++.h>
using namespace std;
int n,m,q,leader[1005];
map<string,int> name;
map<int,int> cost;
map<int,string> price;
vector<tuple<int,string,string> > v;

int run(int x,int y) {
    if(x>m) return y;
    if(leader[x]==y) return run(x+1,y+1);
    if(leader[x]==y-1) return run(x+1,y-1);
    return run(x+1,y);
}

int main() {
    cin >> n >> m >> q;
    for(int i=1;i<=n;i++) {
        string s;
        cin >> s;
        name[s]=i;
    }
    for(int i=1;i<=n;i++) {
        string s;
        int a;
        cin >> s >> a;
        price[i]=s;
        cost[i]=a;
    }
    for(int i=1;i<=m;i++) cin >> leader[i];
    v.emplace_back(0,"","");
    for(auto& [s,idx]: name) {
        int i = run(1,idx);
        v.emplace_back(cost[i],price[i],s);
    }
    sort(v.begin() + 1, v.end(), greater<tuple<int, string, string>>());
    for(int i=1;i<v.size();i++) {
        auto [ct,pc,s] = v[i];
        name[s]=i;
    }
    for(int i=0;i<q;i++) {
        string s;
        cin >> s;
        if(s=="rank") {
            int q;
            cin >> q;
            auto [ct,pc,s] = v[q];
            cout << s << " " << pc << "\n";
        }
        else {
            string q;
            cin >> q;
            auto [ct,pc,s] = v[name[q]];
            cout << pc << " " << ct << "\n";
        }
    }
}