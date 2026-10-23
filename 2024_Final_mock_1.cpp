#include<bits/stdc++.h>
using namespace std;

int main() {
    int m,k,a,b;
    cin >> m >> k >> a >> b;
    map<int,int> x,h;
    for(int i=0;i<m;i++) {
        int key,val;
        cin >> key >> val;
        x[key]=val;
    }
    for(int i=0;i<k;i++) {
        int key,val;
        cin >> key >> val;
        h[key]=val;
    }
    for(int i=a;i<=b;i++) {
        int sum=0;
        for(auto [j,val]: x) {
            if(h.count(i-j)) sum+=val*h[i-j];
        }
        cout << sum << " ";
    }
}