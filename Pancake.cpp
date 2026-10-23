#include<iostream>
#include<algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n],lt=n-1,cnt=0;
    for(int i=0;i<n;i++) cin >> a[i];
    for(int i=1;i<n;i++) {
        if(a[i-1]<a[i]) cnt++;
    }
    for(int i=0;i<n;i++) cout << a[i] << " ";
    cout << "\n";
    if(cnt<n-1) {
        while(true) {
            cnt=0;
            for(int i=1;i<n;i++) {
                if(a[i-1]<a[i]) cnt++;
            }
            if(cnt==n-1) break ;
            int _max=0,j=0;
            for(int i=0;i<=lt;i++) {
                if(_max<a[i]) {
                    _max=a[i];
                    j=i;
                }
            }
            if(j==0) {
                for(int i=0;i<=lt/2;i++) swap(a[i],a[lt-i]);
                lt--;
            }
            else if(j==lt) {
                lt--;
                continue ;
            }
            else {
                for(int i=0;i<=j/2;i++) swap(a[i],a[j-i]);
            }
            for(int i=0;i<n;i++) cout << a[i] << " ";
            cout << "\n";
        }        
    }
}