#include<iostream>
#include<vector>
using namespace std;

int main() {
    int n;
    vector<int> v;
    cin >> n;
    while(n!=1) {
        v.push_back(n);
        if(n%2==0) n/=2;
        else n=3*n+1;
    }
    v.push_back(1);
    int sz = int(v.size())-15<=0 ? 0 : int(v.size())-15;
    for(int i=sz;i<v.size();i++) {
        cout << v[i];
        if(i!=v.size()-1) cout << "->";
    }
}