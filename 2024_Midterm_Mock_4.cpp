#include<iostream>
using namespace std;

int main() {
    int n,m;
    cin >> n >> m;
    int a[n],sum=0;
    for(int i=0;i<n;i++) {
        cin >> a[i];
        sum+=a[i];
    }
    for(int i=0;i<n;i++) {
        for(int j=i+1;j<n;j++) {
            if(sum-a[i]-a[j]==m) {
                cout << i << " " << a[i] << "\n";
                cout << j << " " << a[j];
            }
        }
    }
}