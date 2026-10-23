#include<iostream>
#include<string>
using namespace std;

int main() {
    int n,sum=0;
    cin >> n;
    string q;
    while(cin >> q) {
        q.erase(q.begin());
        int a=stoi(q);
        sum+=a;
    }
    cout << sum*n;
}