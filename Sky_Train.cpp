#include<iostream>
#include<map>
#include<vector>
using namespace std;

int main() {
    string s;
    int i=0;
    map<string, vector<string> > mp;
    while(getline(cin,s)) {
        if(s.find(' ')==string::npos) {
            for(auto x: mp) {
                cout << x.first << ": ";
                for(auto y: x.second) cout << y << " ";
                cout << endl;
            }
            return 0;
        }
        int sp = s.find(' ');
        string a=s.substr(0,sp), b=s.substr(sp+1,s.size());
        mp[a].push_back(b);
    }
}