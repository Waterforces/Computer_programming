#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int N = n*n,a[n*n],row0,cnt=0;
    for(int i=0;i<N;i++) {
        cin >> a[i];
        if(a[i]==0) row0=a[i];
    }
    for(int i=0;i<N;i++) {
        if(row0==i) continue ; 
        for(int j=i+1;j<N;j++) {
            if(row0==j) continue ;
            if(a[i]>a[j]) cnt++;
        }
    }
    row0%=n;
    if((n%2==1 && cnt%2==0) || (n%2==0 && ((cnt%2==1 && row0%2==1) || (cnt%2==0 && row0%2==0)))) cout << "YES";
    else cout << "NO";
}

// 0 1 2 