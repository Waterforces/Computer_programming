#include<iostream>
#include<cmath>
#define ll long long
using namespace std;

ll Cnt(ll n) {
    ll l=1,a=1,sum=0;
    while(true) {
        ll last = min(n,a*10-1);
        sum+=(l*(last-a+1));
        a*=10;
        l++;
        if(last==n) break ;
    }
    return sum;
}

int main() {
    ll n,m;
    cin >> n >> m;
    cout << Cnt(m)-Cnt(n-1); 
}