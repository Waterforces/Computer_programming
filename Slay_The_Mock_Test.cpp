#include<bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int h,p,n,m;
    cin >> h >> p >> n >> m;
    char s[n][m];
    for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++) cin >> s[i][j];
    }
    int atk[2*n]={0}, def[2*n]={0};
    bool b=0,w[n]={0};
    for(int i=0;i<2*n;i++) {
        int I=i%n;
        for(int j=0;j<m;j++) {
            if(s[I][j]=='S') {
                atk[i]+= b ? 9 : 6;
                b=0;
            }
            else if(s[I][j]=='B') {
                atk[i]+= b ? 12 : 8;
                b=1;
            }
            else if(s[I][j]=='W') {
                atk[i]+= b ? 4 : 3;
                b=0;
                w[I]=1;
            }
            else def[i]+=5;
        }
    }
    for(int i=0;h>0 && p>0;i++) {
        int dmg= w[i%n] ? (i+1)*5*0.75 : (i+1)*5;
        dmg= dmg-def[i%(2*n)]<0 ? 0 : dmg-def[i%(2*n)];
        h-=dmg;
        p-=atk[i%(2*n)];
    }
    if(p<=0) cout << "\"You Win :D\"";
    else cout << "\"You Lose D:\"";
}