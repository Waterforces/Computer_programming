#include<iostream>
#include<set>
using namespace std;

int main() {
    int n;
    cin >> n;
    set<int> s;
    int m,cnt=0;
    while(cin >> m) {
        s.insert(m);
    }
    for(auto x: s) {
        int a = n-x;
        if(s.count(a)) cnt++;
    }
    cout << cnt/2;
}