#include<iostream>
using namespace std;

int main() {
    int d,m,y,ans=0;
    cin >> d >> m >> y;
    y-=543;
    if(m>1) ans+=31;
    if(m>2) ans+=28;
    if((y%4==0 && y%100!=0) || y%400==0) ans++;
    if(m>3) ans+=31;
    if(m>4) ans+=30;
    if(m>5) ans+=31;
    if(m>6) ans+=30;
    if(m>7) ans+=31;
    if(m>8) ans+=31;
    if(m>9) ans+=30;
    if(m>10) ans+=31;
    if(m>11) ans+=30;
    if(m>12) ans+=31;
    cout << d+ans;  
}