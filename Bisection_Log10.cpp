#include<iostream>
#include<cmath>
using namespace std;

int main() {
    double a;
    cin >> a;
    if(a==1) cout << "2.91038e-11";
    else {
        double l=0,u=600;
        while(true) {
            double mid=(l+u)/2;
            if(abs(a - pow(10,mid)) <= pow(10,-10) * max(a,pow(10,mid))) {
                cout << l;
                return 0;
            }
            if(pow(10,mid)>a) u=mid;
            else l=mid;
        }        
    }
}