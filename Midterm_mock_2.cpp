#include<bits/stdc++.h>
using namespace std;

int main() {
    string x,y,c;
    int a,b,id=-1;
    long long suma=0,sumb=0;
    cin >> x >> a >> y >> b >> c;
    reverse(x.begin(),x.end());
    for(int i=0;i<x.size();i++) {
        int t=pow(a,i);
        if(x[i]>='0' && x[i]<='9') t*=(x[i]-'0');
        else if(x[i]>='A' && x[i]<='Z') t*=((x[i]-'A')+10);
        else if(x[i]=='&') {
            t=0;
            id=i-1;
        }
        suma+=t;
    }
    if(id>=0) {
        if(x[id]>='0' && x[id]<='9') suma*=(x[id]-'0');
        else if(x[id]>='A' && x[id]<='Z') suma*=((x[id]-'A')+10);
    }
    
    id=-1;
    reverse(y.begin(),y.end());
    for(int i=0;i<y.size();i++) {
        int t=pow(b,i);
        if(y[i]>='0' && y[i]<='9') t*=(y[i]-'0');
        else if(y[i]>='A' && y[i]<='Z') t*=((y[i]-'A')+10);
        else if(y[i]=='&') {
            t=0;
            id=i-1;
        }
        sumb+=t;
    }
    if(id>=0) {
        if(y[id]>='0' && y[id]<='9') sumb*=(y[id]-'0');
        else if(y[id]>='A' && y[id]<='Z') sumb*=((y[id]-'A')+10);
    }
    // cout << suma << " " << sumb;
    if(c=="+") cout << suma+sumb;
    else if(c=="-") cout << suma-sumb;
    else if(c=="*") cout << suma*sumb;
    else if(c=="/") cout << suma/sumb;
}