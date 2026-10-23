#include<iostream>
#include<set>
using namespace std;
int main() {
    int n;
    set<int> s;
    while(cin >> n) {
        int o_sz=s.size();
        s.insert(n);
        int n_sz=s.size();
        if(o_sz==n_sz) {
            cout << n_sz+1;
            return 0;
        }
    }
}