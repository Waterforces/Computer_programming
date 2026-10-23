#include<iostream>
using namespace std;

int main() {
    string s;
    while(getline(cin,s)) {
        bool ch=0;
        for(int i=0;i<s.size();i++) {
            if((s[i]>='A' && s[i]<='Z') || (s[i]>='a' && s[i]<='z') || s[i]==' ' || s[i]=='.' || s[i]==',' || s[i]=='\'' || s[i]=='-') {
                if(ch) cout << s[i];
                continue ;
            }
            ch=!ch;
        }
        cout << "\n";
    }
}