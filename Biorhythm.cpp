#define _USE_MATH_DEFINES
#include<iostream>
#include<cmath>
using namespace std;

int main() {
    int bd,bm,by,d,m,y,mon[13]={0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
    cin >> bd >> bm >> by >> d >> m >> y;
    by-=543;
    y-=543;
    int t=(y-by-1)*365;
    t+=mon[bm]-bd+1;
    for(int i=bm+1;i<=12;i++) t+=mon[i];
    if((by%400==0 || (by%100!=0 && by%4==0)) && bm <= 2) t++;
    t+=d-1;
    for(int i=1;i<m;i++) t+=mon[i];
    if((y%400==0 || (y%100!=0 && y%4==0)) && m > 2) t++;
    cout << t << " " << round((sin((2*M_PI*t)/23))*100.0)/100.0 << " " << round((sin((2*M_PI*t)/28))*100.0)/100.0 << " " << round((sin((2*M_PI*t)/33))*100.0)/100.0;
}
