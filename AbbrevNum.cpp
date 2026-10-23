#include<iostream>
#include<cmath>
using namespace std;

int main() {
    double n;
    cin >> n;
    if(n > pow(10,10)) cout << int(round(n/pow(10,9))) << "B";
    else if(n > pow(10,9)) cout << round((n/pow(10,9))*10)/10.0 << "B";
    else if(n > pow(10,7)) cout << int(round(n/pow(10,6))) << "M";
    else if(n > pow(10,6)) cout << round((n/pow(10,6))*10)/10.0 << "M";
    else if(n > 10000) cout << int(round(n/1000)) << "K";
    else if(n > 1000) cout << round((n/1000)*10)/10.0 << "K";
    else cout << n;
}