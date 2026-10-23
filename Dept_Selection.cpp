#include<iostream>
#include<map>
#include<tuple>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    map<string,int> mj;
    map<string,string> mp;
    for(int i=0;i<n;i++) {
        string major;
        int num;
        cin >> major >> num;
        mj[major]=num;
    }
    int m;
    cin >> m;
    vector<tuple<double,string,vector<string>>> t;
    for(int i=0;i<m;i++) {
        string id;
        double sc;
        vector<string> v;
        cin >> id >> sc;
        for(int j=0;j<4;j++) {
            string ma;
            cin >> ma;
            v.push_back(ma);
        }
        t.emplace_back(sc,id,v);
    }
    sort(t.begin(),t.end(),[](const tuple<double,string,vector<string>>& a,tuple<double,string,vector<string>>&b){
        return get<0>(a)>get<0>(b);
    });
    for(auto [sc,id,ma]: t) {
        for(auto x: ma) {
            if(mj[x]>0) {
                mj[x]--;
                mp[id]=x;
                break ;
            }
        }
    }
    for(auto [f,s]: mp) {
        cout << f << " " << s << "\n";
    }
}