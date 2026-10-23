#include<iostream>
#include<vector>
using namespace std;

int main() {
    int n;
    bool b=1,comma=0;
    vector<int> v;
    cin >> n;
    for(int i=0;i<n;i++) {
        int a;
        cin >> a;
        if(b) v.push_back(a);
        else v.insert(v.begin(),a);
        b=!b;
    }
    while(cin >> n) {
        if(n==-1) break ;
        if(b) v.push_back(n);
        else v.insert(v.begin(),n);
        b=!b;
    }
    cout << "[";
    for(auto x: v) {
        if(comma) cout << ", ";
        cout << x ;
        comma=1;
    }
    cout << "]";
}