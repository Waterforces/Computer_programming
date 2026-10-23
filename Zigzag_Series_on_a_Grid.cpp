#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int n,t, a[10][10];
int same,sumA,sumB,cntA[10][10];

void A(int x,int y,int cnt) {
    if(cnt==n*n) return ;
    cntA[x][y]=cnt;
    if(cnt%2==0) sumA-=a[x][y];
    else sumA+=a[x][y];
    if(x%2==0) {
        if(y==n-1) A(x+1,y,cnt+1);
        else A(x,y+1,cnt+1);
    }
    else {
        if(y==0) A(x+1,y,cnt+1);
        else A(x,y-1,cnt+1);
    }
}

void B(int x,int y,int cnt) {
    if(cnt==n*n) return ;
    int v=a[x][y];
    if(cnt==cntA[x][y]) same++;
    if(v%2==0) {
        if(cnt!=cntA[x][y]) sumB+=a[x][y];
        B(((x+v)%n +n)%n, ((y+v+1)%n +n)%n,cnt+1);
    }
    else {
        if(cnt!=cntA[x][y]) sumB-=a[x][y];
        B(((x+v)%n +n)%n, ((y-v-1)%n +n)%n,cnt+1);
    }
}

int main() {
    cin >> n;
    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++) cin >> a[i][j];
    }
    cin >> t;
    A(0,0,0);
    B(0,0,0);
    if(t==1) {
        if(sumA>sumB) cout << "A " << sumA << " " << sumB;
        else if(sumA<sumB) cout << "B " << sumA << " " << sumB;
        else cout << "EQUAL " << sumA << " " << sumB;
    }
    else cout << same;
}