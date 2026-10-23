#include<iostream>
using namespace std;

int main() {
    string s;
    cin >> s;
    int n,sz=s.size();
    cin >> n;
    while(n--) {
        int h,k;
        string t=s;
        cin >> h >> k;
        for(int i=1;i<sz;i++) {
            int is = (h + i) % sz;
            int offset = (i - k) % (sz - 1);
            if (offset <= 0) offset += (sz - 1);
            int j = (h + offset) % sz;
            s[j] = t[is];
        }
    }
    cout << s;
}
