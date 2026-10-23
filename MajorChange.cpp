#include<iostream>
using namespace std;

int main() {
    string sA,sB;
    char cpA,cal1A,cal2A,cpB,cal1B,cal2B;
    double gpaA,gpaB,cnt=0;
    cin >> sA >> gpaA >> cpA >> cal1A >> cal2A;
    cin >> sB >> gpaB >> cpB >> cal1B >> cal2B;
    if(cpA == 'A' && cal1A <='C' && cal2A <='C') cnt++;
    if(cpB == 'A' && cal1B <='C' && cal2B <= 'C') cnt++;
    if(cnt == 1) {
        if(cpA == 'A' && cal1A <='C' && cal2A <='C') cout << sA;
        if(cpB == 'A' && cal1B <='C' && cal2B <= 'C') cout << sB;
    }
    else if(cnt==2) {
        if(gpaA == gpaB) {
            if(cal1A == cal1B) {
                if(cal2A == cal2B) cout << "Both";
                else {
                    if(cal2A < cal2B) cout << sA;
                    else cout << sB;
                }
            }
            else {
                if(cal1A < cal1B) cout << sA;
                else cout << sB;
            }
        }
        else if(gpaA > gpaB) cout << sA;
        else if(gpaB > gpaA) cout << sB;
        else cout << "None";        
    }
    else cout << "None";
}