#include<iostream>
using namespace std;

int main() {
    string s;
    int n;
    cin >> s >> n; 
    int l=s[0]-'0',r=(s[4]-'0')*100+(s[5]-'0')*10+(s[6 ]-'0');
    string q=s.substr(1,2);
    while(n--) {
        r++;
        if(r>999) {
            r=0;
            if(q[1]+1>='A' && q[1]+1<='Z') q[1]++;
            else {
                q[1]='A';
                if(q[0]+1>='A' && q[0]+1<='Z') q[0]++;
                else {
                    q[0]='A';
                    l++;
                }
            }
        }
    }
    string b=to_string(r);
    while(b.size()<3) b='0'+b;
    cout << l << q << "-" << b; 
}