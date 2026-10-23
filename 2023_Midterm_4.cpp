#include<iostream>
#include<cmath>
using namespace std;

int main() {
    cin.tie()->sync_with_stdio();
    int N;
    cin >> N;
    while(N--) {
        int a,n,b,m;
        cin >> a >> n >> b >> m;
        long long c=0;
        for(int i=0;i<n;i++) c=c*10+a;
        for(int i=0;i<m;i++) c=c*10+b;
        bool ch=0;
        for(int i=2;i<=log(c);i++) {
            if(c%i==0) {
                ch=1;
                break ;
            }
        }
        if(!ch) cout << "YES\n";
        else cout << "NO\n";
    }
}