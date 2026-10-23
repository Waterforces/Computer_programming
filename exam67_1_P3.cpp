#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

int main() {
    int n;
    cin >> n;
    double a[n+5];
    for(int i=0;i<=n;i++) cin >> a[i];
    double l=-1.0+1e-8,u=1.0;
    while(true) {
        double irr=(l+u)/2,sum=0;
        for(int i=0;i<=n;i++) sum+=a[i]/pow(1+irr,i);
        if(abs(sum)<=pow(10,-8)) break ;
        if(sum>0) l=irr;
        else u=irr;
    }
    cout << setprecision(8) << l;
}