#include<iostream>
#include<cmath>
using namespace std;

int main() {
    int n,a[1445]={0},mx=0;
    cin >> n;
    for(int i=0;i<n;i++) {
        int start,stop;
        cin >> start >> stop;
        for(int j=start;j<stop;j++) a[j]++;
    }
    for(int j=1;j<1441;j++) mx=max(mx,a[j]);
    cout << mx;
}