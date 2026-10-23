#include<iostream>
#include<cmath>
using namespace std;

int main() {
    int n;
    cin >> n;
    int ad = (n-=543)%100;
    ad = (ad + (ad/4) + 11)%7;
    cout << ad; 
}