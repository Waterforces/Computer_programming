#include<iostream>
#include<cmath>

using namespace std;

int main() {
    double a, b, c, d;
    cin >> a >> b >> c >> d;
    double _min = min(a,min(b,min(c,d))), _max = max(a,max(b,max(c,d)));
    double ans = (a + b + c + d-_min-_max)/2.0;
    cout << round(ans*100.0)/100.0;
}