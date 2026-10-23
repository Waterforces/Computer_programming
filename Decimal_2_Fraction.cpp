#include<iostream>
#include<cmath>
long gcd(long a, long b) {
    if(b==0) return a;
    return gcd(b, a%b);
}
using namespace std;

int main() {
    string a, b, c;
    cin >> a >> b >> c;
    int left = stoi(a+b), right = stoi(a+b+c);
    int up = right - left, down = pow(10,b.size()+c.size()) - pow(10,b.size());
    cout << up/gcd(up,down) << " " << down/gcd(up,down);
}