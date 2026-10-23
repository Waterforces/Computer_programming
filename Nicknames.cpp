#include<iostream>
#include<string>
using namespace std;

int main() {
    int n;
    cin >> n;
    string a[10]={"Robert","William","James","John","Margaret","Edward","Sarah","Andrew","Anthony","Deborah"};
    string b[10]={"Dick","Bill","Jim","Jack","Peggy","Ed","Sally","Andy","Tony","Debbie"};
    for(int i=0;i<n;i++) {
        string s,tmp="";
        cin >> s;
        for(int j=0;j<10;j++) {
            if(s==a[j]) tmp=b[j];
            else if(s==b[j]) tmp=a[j];
        }
        if(tmp=="") cout << "Not found\n";
        else cout << tmp << "\n";
    }
}