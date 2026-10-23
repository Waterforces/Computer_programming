#include<iostream>
#include<algorithm>
#include<vector>
#include<functional>
using namespace std;

int main() {
    string s;
    cin >> s;
    int n;
    vector<vector<int> > v;
    while(cin >> n) {
        bool b=0;
        if(s=="first") {
            for(auto& x: v) {
                int sum=0;
                for(auto y: x) sum+=y;
                if(sum+n>100) continue ;
                x.push_back(n);
                b=1;
                break ;
            }
            if(!b) v.push_back({n});
        }
        else {
            bool b=0;
            int mx=0,id;
            for(int i=0;i<v.size();i++) {
                int sum=0;
                for(auto y: v[i]) sum+=y;
                sum+=n;
                if(sum>100 || sum<=mx) continue ;
                mx=sum;
                id=i;
                b=1;
            } 
            if(!b) v.push_back({n});
            if(mx>0) v[id].push_back(n);
        }   
    }     
    for(auto& x: v) sort(x.begin(),x.end());
    sort(v.begin(),v.end(),[](const vector<int>&a ,const vector<int>& b) {
        int sumA=0,sumB=0;
        for(auto x: a) sumA+=x;
        for(auto x: b) sumB+=x;
        if(sumA==sumB) {
            if(a.size()==b.size()) {
                for(int j=0;j<a.size();j++) {
                    if(a[j]==b[j]) continue ;
                    return a[j]<b[j];
                }
            }
            return a.size()<b.size();
        }
        return sumA>sumB;
    });

    // cout << v.size() << endl;
    for(auto x: v) {
        for(auto y: x) cout << y << " ";
        cout << endl;   
    }
}