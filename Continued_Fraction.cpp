#include<iostream>
#include<iomanip>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n];
    double ans[n];
    for(int i=0;i<n;i++) cin >> a[i];
    for(int i=n-1;i>=0;i--) {
        double fac=a[i];
        for(int j=i-1;j>=0;j--) fac=a[j]+1/fac;
        ans[i]=fac;
    }
    for(int i=0;i<n;i++) cout << setprecision(10) << ans[i] << "\n";
}