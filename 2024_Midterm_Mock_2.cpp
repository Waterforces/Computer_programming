#define _USE_MATH_DEFINES
#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

int main() {
    double x;
    cin >> x;
    double up=sqrt(x*x+pow(cos(x*M_PI/180),2)), down=sin(x*M_PI/180)+cos(x*M_PI/180)/(x*x+1);
    cout << fixed << setprecision(1) << up/down;
}