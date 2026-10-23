#include<iostream>
#include <climits>
#include<cmath>
using namespace std;

int main() {
    int x,y,_min1=INT_MAX,_max1=INT_MIN,_min2=INT_MAX,_max2=INT_MIN,ch1=1,ch2=1;
    while(cin >> x) {
        if(x==-998) {
            cout << _min1 << " " << _max1;
            return 0;
        }
        if(x==-999) {
            cout << _min2 << " " << _max2;
            return 0;
        }
        cin >> y;
        if(ch1==1) {
            _min1=min(_min1,x);
            _max1=max(_max1,y);
            ch1=2;
        } 
        else if(ch1==2) {
            _min1=min(_min1,y);
            _max1=max(_max1,x);
            ch1=1;
        }
        if(ch2==1) {
            _min2=min(_min2,y);
            _max2=max(_max2,x);
            ch2=2;
        }
        else if(ch2==2) {
            _min2=min(_min2,x);
            _max2=max(_max2,y);
            ch2=1;
        }
    } 
}