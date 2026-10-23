#include<iostream>
#include<cstring>
using namespace std;

int main() {
    int n;
    cin >> n;
    string s[n];
    for(int i=0;i<n;i++) cin >> s[i];
    cin.ignore();
    string ask;
    getline(cin,ask);
    for(int idx=0;idx<ask.size();idx++) {
        if(ask[idx]!='S' && ask[idx]!='C') continue ;
        if(ask[idx]=='S') {
            string tmp[n/2+1];
            for(int i=0;i<n/2;i++) swap(tmp[i],s[i]);
            for(int i=n/2,j=1;i<n;i++,j+=2) swap(s[i],s[j]);
            for(int i=0;i<n/2;i++) swap(s[i*2],tmp[i]);
        }
        else if(ask[idx]=='C') {
            for(int i=0;i<n/2;i++) swap(s[i],s[i+n/2]);
        }
    }
    for(int i=0;i<n;i++) cout << s[i] << " ";
}