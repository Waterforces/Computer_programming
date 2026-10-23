#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    string s;
    cin >> n >> s;
    float x[n],y[n];
    for(int i=0;i<n;i++) cin >> x[i] >> y[i];
    float sumx=0,sumy=0,sumxy=0,sumxx=0;
    for(int i=0;i<n;i++) {
        sumx+=x[i];
        sumy+=y[i];
        sumxx+=x[i]*x[i];
        sumxy+=x[i]*y[i];
    }
    float m=((n*sumxy)-(sumx*sumy)) / (n*sumxx - sumx*sumx);
    float b=(sumy-m*sumx)/n;
    m=round(m*1e3)/1e3;
    b=round(b*1e3)/1e3;
    if(s=="mb") cout << m << "\n" << b;
    else {
        cout << "y = ";
        if(m==0 && b==0) cout << 0;
        else if(m==0) cout << b;
        else {
            if(m==1) cout << "x";
            else if(m==-1) cout << "-x";
            else cout << m << "x ";
            if(b>0) cout << "+ " << b;
            else cout << "- " << abs(b);
        }
    }
}