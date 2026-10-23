#include<iostream>
#include<algorithm>
using namespace std;

int main() {
    string s,ans="";
    while(cin >> s) {
        if(s=="END") break;
        reverse(s.begin(),s.end());
        if(ans=="") {
            ans=s;
            continue ;
        }
        int i=0,t=0;
        while(i<s.size() && i<ans.size()) {
            int sum=(s[i]-'0')+(ans[i]-'0')+t;
            if(sum>9) t=1;
            else t=0;
            ans[i]=(sum%10)+'0';
            i++;
        }
        while(i<s.size()) {
            int sum=(s[i]-'0')+t;
            if(sum>9) t=1;
            else t=0;
            ans+=(sum%10)+'0';
            i++;
        }
        while(i<ans.size()) {
            int sum=(ans[i]-'0')+t;
            if(sum>9) t=1;
            else t=0;
            ans[i]=(sum%10)+'0';
            i++;
        }
        if(t==1) ans+='1';
    }
    reverse(ans.begin(),ans.end());
    cout << ans;
}