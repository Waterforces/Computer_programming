#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>
#include<tuple>
#include<functional>
using namespace std;

int main() {
    string q;
    double all=0;
    vector<tuple<int,double,string> > v; 
    while(cin >> q) {
        if(q=="END") break ;
        int n;
        cin >> n;
        v.emplace_back(0,n,q);
        all+=n;
    }
    all/=100;
    int cnt=0,sz=v.size();
    pair<double,int> dec[sz];
    for(int i=0;i<sz;i++) {
        auto& [p,n,A] = v[i];
        double fl=n/all;
        p=floor(fl);
        cnt+=p;
        dec[i]={fl-p,i};
    }
    if(cnt<100) {
        cnt=100-cnt;
        sort(dec,dec+sz,greater<pair<double,int> >());
        for(int i=0;i<cnt;i++) {
            auto [f,s] = dec[i];
            auto& [p,A,B] = v[s];
            p++;
        }
    }
    sort(v.begin(),v.end(),greater<tuple<int,double,string> >());
    for(auto [a,b,c]: v) {
        if(a>=1) cout << c << " " << a << " " << b << "\n";
    } 
}