#include<iostream>
#include<cmath>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n],b[n];
    for(int i=0;i<n;i++) cin >> a[i] >> b[i];
    string s;
    cin >> s;
    if(s=="Zig-Zag") {
        int _min=a[0],_max=b[0],t=2;
        for(int i=1;i<n;i++) {
            if(t==1) {
                _min=min(_min,a[i]);
                _max=max(_max,b[i]);
                t=2;
            }
            else {
                _min=min(_min,b[i]);
                _max=max(_max,a[i]);
                t=1;
            }
        }
        cout << _min << " " << _max;
    }
    else {
        int _min=b[0],_max=a[0],t=2;
        for(int i=1;i<n;i++) {
            if(t==1) {
                _min=min(_min,b[i]);
                _max=max(_max,a[i]);
                t=2;
            }
            else {
                _min=min(_min,a[i]);
                _max=max(_max,b[i]);
                t=1;
            }
        }
        cout << _min << " " << _max;
    }
}