#include<iostream>
using namespace std;

int main() {
    double p,k=1,t=1;
    cin >> p;
    do {
        t=(t*(365-(k-1)))/365;
        if(1-t>=p) {
            cout << k;
            return 0;
        }
        k++;
    } while(true);
}