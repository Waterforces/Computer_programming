#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int h[n+1],ans[n+1]={0},mn=160000;
    for(int i=0;i<n;i++) cin>> h[i];
    for(int d=1;d<=n;d++) {
        int m=0,v[n+1],I=0;
        bool b[n+1]={0};
        while(!b[m]) {
            b[m]=1;
            v[I]=h[m];
            I++;
            m=(m+d)%n;
        }
        if(I<n) continue ;
        int cnt=0;
        for(int i=0;i<n;i++) {
            // cout << v[i] << " " << ans[i] << endl;
            if(v[i]>ans[i]) {
                for(int j=i;j<n;j++) ans[j]=v[j];
                mn=d;
                break ;
            }
            else if(v[i]==ans[i]) cnt++;
            else break ;
        } 
        if(cnt==n) mn=min(mn,d);
        // cout << d << endl;
        // for(int i=0;i<n;i++) cout << v[i] << " "; cout << endl;
        // cout << "ans = " << mn << endl;
        // for(int i=0;i<n;i++) cout << ans[i] << " "; cout << endl << endl;
    }
    cout << mn << "\n";
    for(int i=0;i<n;i++) cout << ans[i] << " ";
}