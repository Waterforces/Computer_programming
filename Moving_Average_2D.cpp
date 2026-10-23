#include<iostream>
#include<cmath>
using namespace std;

int main() {
    int n,m;
    double a[35][35];
    cin >> n >> m;
    for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++) cin >> a[i][j];
    }
    for(int i=0;i<=n-3;i++) {
        for(int j=0;j<=m-3;j++) {
            double avg=0;
            for(int l=0;l<3;l++) {
                for(int k=0;k<3;k++) {
                    avg+=a[i+l][j+k];
                }
            } 
            cout << round((avg/9)*100)/100.0 << " ";
        }
        cout << "\n";
    }
}