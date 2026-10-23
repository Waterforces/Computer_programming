#include<iostream>
#include<cmath>
using namespace std;

int main() {
    int n,mx=0;
    cin >> n;
    int x1[n],y1[n],x2[n],y2[n];
    for(int i=0;i<n;i++) cin >> x1[i] >> y1[i] >> x2[i] >> y2[i];
    for(int i=0;i<n;i++) {
        for(int j=i+1;j<n;j++) {
            int mxx=max(x1[i],x1[j]), mxy=max(y1[i],y1[j]), mnx=min(x2[i],x2[j]), mny=min(y2[i],y2[j]);
            if((mnx-mxx)>0 && (mny-mxy)>0) mx=max(mx,(mnx-mxx)*(mny-mxy));
        }
    }
    if(mx==0) cout << "No overlaps";
    else {
        cout << "Max overlapping area = " << mx << "\n";
        for(int i=0;i<n;i++) {
            for(int j=i+1;j<n;j++) {
                int mxx=max(x1[i],x1[j]), mxy=max(y1[i],y1[j]), mnx=min(x2[i],x2[j]), mny=min(y2[i],y2[j]);
                if((mnx-mxx)>0 && (mny-mxy)>0 && (mnx-mxx)*(mny-mxy)==mx) cout << "rectangles " << i << " and " << j << "\n"; 
            }
        }
    }
}