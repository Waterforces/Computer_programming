#include<iostream>
#include<map>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    map<string,double> mp,tt;
    while(n--) {
        string name;
        double cost;
        cin >> name >> cost;
        mp[name]=cost;
    }
    cin >> n;
    double sum=0,mx=0;
    while(n--) {
        string name;
        int num;
        cin >> name >> num;
        if(!mp.count(name)) continue ;
        double all=mp[name]*num;
        tt[name]+=all;
        mx=max(mx,tt[name]);
        sum+=all;
    }
    vector<string> ans;
    for(auto [name,num]: tt) {
        if(num==mx) ans.push_back(name);
    }
    sort(ans.begin(),ans.end());
    if(sum==0) cout << "No ice cream sales";
    else {
        cout << "Total ice cream sales: " << sum << "\n" << "Top sales: ";
        for(auto x: ans) cout << x << " ";
    }
}