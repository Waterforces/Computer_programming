#include<iostream>
#include<set>
using namespace std;

int main() {
    int n,cnt=1;
    set<int> se;
    while(cin >> n) {
        se.insert(n);
    }
    cout << se.size() << "\n";
    for(auto x: se) {
        if(cnt>10) return 0;
        cout << x << " ";
        cnt++;
    }
}