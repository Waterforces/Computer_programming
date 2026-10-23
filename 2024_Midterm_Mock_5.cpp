#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int cnt=0,all=0;
    bool b[n];
    for(int i=0;i<n;i++) {
        int a;
        cin >> a;
        if(!b[a]) cnt++;
        b[a]=1;
    }
    cout << pow(2,cnt)-1+(n-cnt);
}