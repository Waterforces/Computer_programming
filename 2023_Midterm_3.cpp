#include<iostream>
#include<cmath>
using namespace std;

int main() {
    int n;
    double sumc=0,sumgc=0;
    cin >> n;
    for(int i=0;i<n;i++) {
        string s;
        double c,g;
        cin >> s >> c;
        if(s=="A") g=4.0;
        else if(s=="B+") g=3.5;
        else if(s=="B") g=3.0;
        else if(s=="C+") g=2.5;
        else if(s=="C") g=2.0;
        else if(s=="D+") g=1.5;
        else if(s=="D") g=1.0;
        else if(s=="F") g=0.0;
        sumc+=c;
        sumgc+=(g*c);
    }
    cout << round((sumgc/sumc)*100)/100;
}