#include<iostream>
using namespace std;

int main() {
    string s;
    cin >> s;
    string q="";
    int t,ch;
    for(int i=0;i<s.size();i++) {
        if(s[i]>='0' && s[i]<='9') t=1;
        else if(s[i]>='a' && s[i]<='z') t=2;
        else if(s[i]>='A' && s[i]<='Z') t=3;
        if(q=="") {
            q+=s[i];
            ch=t;
            continue ;
        }
        if(t==1 && t==ch) q+=s[i];
        else if(t==2 && (t==ch || ch==3)) q+=s[i];
        else {
            cout << q << ", ";
            q=s[i];
            ch=t;
        }
    }
    cout << q;
}