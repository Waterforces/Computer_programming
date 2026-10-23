#include<iostream>
#include<cmath>
using namespace std;

int main() {
    int xe,ye,re,rp,xm,ym;
    cin >> xe >> ye >> re >> rp >> xm >> ym;
    int r = re-rp, x = abs(xm-xe), y = abs(ym-ye);
    double z = sqrt((x*x)+(y*y));
    double a = (r*x)/z, b = (r*y)/z;
    if(xm > xe) cout << round(xe + a) << " ";
    else cout << round(ye - a) << " ";
    if(ym > ye) cout << round(ye + b) << " ";
    else cout << round(ye - b);
}