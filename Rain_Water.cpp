#include<iostream>
#include<cmath>
using namespace std;

int main() {
    int n,sum=0,a[55],b[55],c[55];
    cin >> n;
    for(int i=0;i<n;i++) cin >> a[i];
    b[0]=a[0];
    for(int i=1;i<n;i++) {
        if(a[i]<=b[i-1]) b[i]=b[i-1];
        else b[i]=a[i];
    }
    c[n-1]=a[n-1];
    for(int i=n-2;i>=0;i--) {
        if(a[i]<=c[i+1]) c[i]=c[i+1];
        else c[i]=a[i];
    }
    for(int i=0;i<n;i++) sum+=min(b[i],c[i])-a[i];
    cout << sum;
}