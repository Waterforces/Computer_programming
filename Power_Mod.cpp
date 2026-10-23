#include<iostream>
using namespace std;

int func(int a,int k,int m) {
    if(k==0) return 1;
    if(k%2==0) return (func(a,k/2,m) *func(a,k/2,m))%m;
    return a*((func(a,k/2,m) *func(a,k/2,m)) )%m;
}

int main() {
    int a,k,m;
    cin >> a >> k >> m;
    cout << func(a,k,m);
}