#include<iostream>
using namespace std;

int main() {
    int a[10]={0},full=0;
    string s;
    bool check=0;
    cin >> s;
    for(int i=0;i<s.size();i++) {
        if(s[i]>='0' && s[i]<='9') a[s[i]-'0']++;
    }
    for(int i=0;i<10;i++) {
        if(a[i]>0) full++;
    }
    if(full==10) cout << "None";
    else {
        for(int i=0;i<10;i++) {
            if(a[i]==0) {
                if(check) cout << ",";
                cout << i;
                check=1;
            }
        }
    }
}