#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
    string s;
    string dig[12]={"soon", "neung", "song", "sam", "si", "ha", "hok", "chet", "paet", "kao","sip","et"};
    string ten[6]={"sip", "roi", "phan", "muen", "saen", "lan"};
    int num[12]={0,1,2,3,4,5,6,7,8,9,10,1};
    int num10[6]={10,100,1000,10000,100000,1000000};
    while(getline(cin,s)) {
        if(s=="q") return 0;
        vector<string> v;
        string q="";
        for(int i=0;i<s.size();i++) {
            if(s[i]!=' ') q+=s[i];
            else {
                v.push_back(q);
                q="";
            }
        }
        v.push_back(q);
        if(v.size()==1) {
            for(int i=0;i<11;i++) {
                if(v[0]==dig[i]) {
                    cout << num[i] << "\n";
                    break ;
                }
            }
        }
        else {
            int sum=0,sz=v.size();
            for(int i=0;i<sz-sz%2;i+=2) {
                int a=1,b=0,c=0;
                for(int j=0;j<10;j++) {
                    if(v[i]==dig[j]) {
                        a=num[j];
                        break ;
                    }
                }
                for(int j=0;j<6;j++) {
                    if(v[i+1]==ten[j]) {
                        b=num10[j];
                        break ;
                    }
                }
                for(int j=0;j<12;j++) {
                    if(v[i+1]==dig[j] && dig[j]!="sip") {
                        c=num[j];
                        break ;
                    }
                }
                if(v[i]=="yi") a=2;

                if(c>0) {
                    for(int j=0;j<6;j++) {
                        if(v[i]==ten[j]) {
                            b=num10[j];
                            break ;
                        }
                    }
                }
                sum+=(a*b)+c;
            }
            if(sz%2==1) {
                for(int i=0;i<12;i++) {
                    if(v[sz-1]==dig[i]) {
                        sum+=num[i];
                    }
                }
            }
            cout << sum << "\n";
        }
    }
}