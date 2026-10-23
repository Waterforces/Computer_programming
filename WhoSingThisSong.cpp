#include<iostream>
#include<map>
#include<vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    cin.ignore(1000, '\n');
    map<string, vector<string> > mp;
    for(int i=0;i<n;i++) {
        string s;
        getline(cin,s);
        int cm=s.find(", ");
        string a=s.substr(0,cm), b=s.substr(cm+2);
        mp[a].push_back(b);
    }
    string q;
    getline(cin,q);
    q+=", ";
    int a=0, b=q.find(", ");
    while(b!=string::npos) {
        string t=q.substr(a,(b-a));
        a=b+2;
        b=q.find(", ",a+1);
        cout << t << " -> ";
        if(mp.count(t)) {
            bool ch=0;
            for(auto x: mp[t]) {
                if(ch) cout << ", ";
                cout << x;
                ch=1;
            }
            cout << "\n";
        }
        else cout << "Not found\n";
    }
}