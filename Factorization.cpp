#include<iostream>
using namespace std;

int main() {
    long long n;
    cin >> n;
    int k=2,firsttime=1;
    while(n>1) {
        while(n%k==0) {
            n/=k;
            if(firsttime) firsttime=0;
            else cout << "*";
            cout << k;
        }
        k++;
    }
}