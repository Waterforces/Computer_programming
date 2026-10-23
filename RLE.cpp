#include<iostream>
using namespace std;

int main() {
    string s;
    cin >> s;
    int cnt=0;
    char tmp=s[0];
    for(int i=0;i<s.size();i++) {
        if(tmp==s[i]) cnt++;
        else {
            cout << tmp << " " << cnt << " ";
            cnt=1;
            tmp=s[i];
        }
    }
    cout << tmp << " " << cnt;
}