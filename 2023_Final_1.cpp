#include<bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    while(N--) {
        int n,mx=0;
        cin >> n;
        int a[n];
        for(int i=0;i<n;i++) cin >> a[i];
        for(int i=0;i<n;i++) {
            int sum=0;
            for(int j=0;j<n;j++) {
                if(j==i) continue ;
                sum+=a[j];
            }
            mx=max(mx,sum);
        }
        cout << mx << "\n";
    }
}

/*
3
3 2 4 1
4 1 1 1 1 
6 3 1 2 4 5 6
4
3 5 1 6
4 1 3 5 7
5 2 1 4 3 2
6 3 4 2 3 5 1
*/