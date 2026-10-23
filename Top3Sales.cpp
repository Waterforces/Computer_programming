#include<iostream>
#include<vector>
#include<tuple>
#include<algorithm>
using namespace std;

int main() {
    string s,q;
    double c;
    vector<tuple<double,double,string> > v;
    while(cin >> s)  {
        if(s=="END") break ;
        cin >> c;
        v.push_back({0,c,s});
    }
    while(cin >> q) {
        for(auto& [sum,cost,name]: v) {
            if(q==name) sum+=cost;
        }
    }
    sort(v.begin(), v.end(), greater<tuple<double, double, string>>());
    if(get<0>(v[0])==0) cout << "No Sales";
    else {
        for(int i=0;i<min(3,(int)v.size());i++) {
            auto [sum,N,name] = v[i];
            if(sum>0) cout << name << " " << sum << endl; 
        }        
    }
}