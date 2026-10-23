#include<iostream>
#include<string>
#include<map>
#include<set>
#include<vector>
#include<tuple>
#include<algorithm>
using namespace std;

int main() {
    string song, name, type, time;
    map<string,pair<int,int> > mp;
    set<string> s;
    while(cin >> song >> name >> type >> time) {
        s.insert(type);
        int col = time.find(':');
        string min=time.substr(0,col), sec=time.substr(col+1,time.size());
        auto& [m,s] = mp[type];
        m+=stoi(min);
        s+=stoi(sec);
        m+=s/60;
        s%=60;
    }
    vector<tuple<int,int,string> > vt;
    for(auto x: s) {
        auto [m,s] = mp[x];
        vt.emplace_back(m,s,x);
    }
    sort(vt.begin(),vt.end(),greater<tuple<int,int,string> >());
    for(int i=0;i<vt.size();i++) {
        auto [m,s,t] = vt[i];
        cout << t << " --> " << m << ":" << s << "\n";
        if(i==2) return 0;
    }
}