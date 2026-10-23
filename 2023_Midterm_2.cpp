#define _USE_MATH_DEFINES
#include<iostream>
#include<cmath>
using namespace std;

int main() {
    double u,s,t;
    cin >> u >> s >> t;
    double r=u*cos(s*M_PI/180)*t;
    double l=(t-u*sin(s*M_PI/180)/10.0),rl=u*sin(s*M_PI/180),rr=5*(t-0.3*(u*sin(s*M_PI/180)));
    double h=l*(rl+rr);
    cout << round(h*10)/10 << " " << round(r*10)/10;
}