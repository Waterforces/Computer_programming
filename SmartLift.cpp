#include<iostream>
#include<limits.h>
using namespace std;

int main() {
    int n,m;
    cin >> n;
    int now[n+1],stop[n+1];
    for(int i=1;i<=n;i++) {
        int a,b,c;
        cin >> a >> b >> c;
        now[a]=b;
        stop[a]=c;
    }
    cin >> m;
    while(m--) {
        int a,b;
        cin >> a >> b;
        int mn=INT_MAX,num;
        for(int i=1;i<=n;i++) {
            int dif;
            if(now[i]<=a && b>=a) {
                if(b<=stop[i]) dif=0;
                else dif=b-stop[i];
            }
            else if(now[i]>=a && b<=a) {
                if(b>=stop[i] ) dif=0;
                else dif=stop[i]-b;
            }
            else dif=abs(a-stop[i])+abs(b-a);
            if(dif<mn) {
                mn=dif;
                num=i;
            }
        }
        cout << ">> " << num  << "\n";
    }
}