#include<iostream>
using namespace std;

int main() {
    string s;
    cin >> s;
    int last = 0;
    for(int i=0;i<12;i++) last+=((13-i)*(s[i]-'0'));
    last = (11-(last%11))%10;
    s = s + char(last+'0');
    for(int i=0;i<13;i++) {
        if(i==1 || i==5 || i==10 || i==12) cout << "-";
        cout << s[i];
    }
}