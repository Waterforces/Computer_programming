#include<bits/stdc++.h>
#define ll long long
using namespace std;
int cnt=0,k,n,a[30];

void dice(ll sum) {
    if(sum>=k) {
        cnt++;
        return ;
    }
    for(int i=0;i<n;i++) dice(sum+a[i]);
}

int main() {
    cin >> k >> n;
    for(int i=0;i<n;i++) cin >> a[i];
    dice(0);
    cout << cnt;
} 