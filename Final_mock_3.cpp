#include<bits/stdc++.h>
using namespace std;
int n,m,ct[30];
string nm[30];

void func(int sum,set<pair<int,string> > se,bool ch[],int idx) {
    if(ch[idx]) return ;
    sum+=ct[idx];
    ch[idx]=1;
    se.insert({ct[idx],nm[idx]});
    if(sum>m) return ;
    if(sum==m) {

    }
    for(int i=0;i<n;i++) {
        if(!ch[i]) func(sum,se,ch,i);
    }
}

int main() {
    cin >> m >> n;
    for(int i=0;i<n;i++) cin >> nm[i] >> ct[i];
    set<pair<int,string> > se;
    bool ch[n]={0};
    func(0,se,ch,-1);
}