#include<iostream>
#include<cstring>
using namespace std;

int main() {
    string tmp,s;
    cin >> tmp;
    cin.ignore();
    getline(cin,s);
    int cnt=0,i=0;
    while(s.find(tmp,i)!=string::npos) {
        i = s.find(tmp,i)+1;
        if(s[i-2]>='A' && s[i-2]<='Z' && i>0) continue ;
        if(s[i-2]>='a' && s[i-2]<='z' && i>0) continue ;
        if(s[i+tmp.size()-1]>='A' && s[i+tmp.size()-1]<='Z' && i<s.size()-1) continue ;
        if(s[i+tmp.size()-1]>='a' && s[i+tmp.size()-1]<='z' && i<s.size()-1) continue ;
        cnt++;
    }
    cout << cnt;
}