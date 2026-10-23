#include<iostream>
using namespace std;

int main() {
    string s,ans="";
    string d0[]={"", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    string d1[]={"ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen"};
    string d2[]={"","","twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety"};
    string d[]={"", "thousand", "million", "billion", "trillion"};
    cin >> s;
    if(s=="0") cout << "zero";
    else {
        while(s.size()%3!=0) s="0"+s;
        int sz = s.size()/3;
        for(int i=0;i<sz;i++) {
            int a=s[i*3]-'0',b=s[i*3+1]-'0',c=s[i*3+2]-'0';
            if(a==0 && b==0 && c==0) continue ;
            if(a>0) ans+=d0[a]+" hundred ";
            if(b==1) ans+=d1[c]+" ";
            else {
                if(b>1) ans+=d2[b]+" ";
                if(c>0) ans+=d0[c]+" ";
            }
            ans+=d[sz-i-1]+" ";
        }
        cout << ans;
    }
}