#include<iostream>
#include<map>
using namespace std;

int main() {
    int N;
    map<string, string> mp;
    cin >> N;
    for(int i=0;i<N;i++) {
        string n,s,ph;
        cin >> n >> s >> ph;
        n= n + ' ' + s;
        mp[n]=ph;
        mp[ph]=n;
    } 
    int m;
    cin >> m;
    cin.ignore();
    while(m--) {
        string s;
        getline(cin,s);
        cout << s << " --> ";
        if(mp.count(s)) cout << mp[s] << "\n";
        else cout << "Not found\n";
    }
}