#include<iostream>
using namespace std;

int main() {
    string s;
    int cnt[26]={0};
    getline(cin,s);
    for(int i=0;i<s.size();i++) {
        if(s[i]>='A' && s[i]<='Z') cnt[s[i]-'A']++;
        else if(s[i]>='a' && s[i]<='z') cnt[s[i]-'a']++;
    }
    for(int i=0;i<26;i++) {
        if(cnt[i]>0) cout << char(i+'a') << " -> " << cnt[i] << "\n";
    }
}