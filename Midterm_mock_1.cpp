// #define M_PI 3.14159265
#include<bits/stdc++.h>
using namespace std;

int main() {
    double a,b,c;
    int n;
    cin >> a >> b >> c >> n;
    //
    while(a<=b) {
        if(b>c) {
            a=exp(b/a) + a/b;
            b=b + c/b;
        }
        else {
            if(a>c) {
                b=b * sin(b*M_PI/180);
                c=c - log(a);
            }
            else {
                c=c - b/a;
                a=(1 / cos(b*M_PI/180)) + a/b;
            }
        }
    }
    //

    //
    a=abs(a);
    if(a<1) a=1 / a;
    //

    //
    double l=0,r=a;
    do {
        double x=(l + r) / 2;
        // cout << l << " " << r << " " << pow(x,n) << " " << r-l << " " << 1/(double)1e5  << endl;
        if((pow(x,n)) < a) l=x;
        else r=x;
        if(r-l < 1/(double)1e5) {
            cout << fixed << setprecision(5) << "a: " << a << "\n";
            cout << fixed << setprecision(5) << "b: " << b << "\n";
            cout << fixed << setprecision(5) << "c: " << c << "\n";
            cout << fixed << setprecision(5) << "x: " << x << "\n";
            return 0;
        }
    }
    while(1);
    //

    

}