#include<iostream>
#include<cmath>
using namespace std;

int main() {
    double n,sum=0,cnt=0;
    while(cin >> n) {
        if(n==-1) break ;
        cnt++;
        sum+=n;
    }
    if(cnt==0) cout << "No Data";
    else cout << round((sum/cnt)*100)/100;
}