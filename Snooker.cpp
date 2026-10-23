#include<iostream>
#include<cstring>
using namespace std;

int main() {
    int N;
    cin >> N;
    cin.ignore();
    while(N--) {
        string s,tmp="YGNBPK";
        int ch=0,sum=0,j=0,NoR=0;
        getline(cin,s);
        // cout << s << endl;
        for(int i=0;i<s.size();i+=2) {
            if(i==0) {
                if(s[i]=='R') sum++;
                else ch=1;
            }
            else {
                if(s[i-2]!='R') {
                    // cout << s[i-2] << " " << s[i] << endl;
                    if(s[i]==tmp[j]) {
                        j++;
                        NoR=1;
                    }
                    else if(s[i]!='R' || NoR) ch=1;
                }
                if(s[i-2]=='R' && s[i]=='R') ch=1;
                else if(s[i]=='R') sum++;
                else if(s[i]=='Y') sum+=2;
                else if(s[i]=='G') sum+=3;
                else if(s[i]=='N') sum+=4;
                else if(s[i]=='B') sum+=5;
                else if(s[i]=='P') sum+=6;
                else if(s[i]=='K') sum+=7;
            }
        }
        if(ch==1) cout << "WRONG_INPUT\n";
        else cout << sum << "\n";
    }
}