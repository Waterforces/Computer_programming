#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    if(n>0) cout << "positive";
    else if(n<0) cout << "negative";
    else cout << "zero";
    if(n%2==0) cout << "\neven";
    else cout << "\nodd";
}