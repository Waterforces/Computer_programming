#include<iostream>
#include<map>
using namespace std;

int main() {
    int n;
    cin >> n;
    map<string,string> mp;
    for(int i=0;i<n;i++) {
        string name, sur;
        cin >> name >> sur;
        mp[name]=sur;
        mp[sur]=name;
    }
    int m;
    cin >> m;
    while(m--) {
        string s;
        cin >> s;
        if(mp.count(s)) cout << mp[s] << "\n";
        else cout << "Not found\n";
    }
}