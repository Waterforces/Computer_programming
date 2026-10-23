#include<bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    cin.ignore();
    while(N--) {
        string s;
        getline(cin,s);
        vector<string> v;
        stringstream ss(s);
        while(ss >> s) v.push_back(s);
        int cntA=0,cntB=0;
        map<string,vector<int> > mp;
        for(int i=2;i<v.size()-1;i++) {
            int dash=v[i].find('-');
            string a=v[i].substr(0,dash), b=v[i].substr(dash+1,v[i].size());
            int scA=stoi(a),scB=stoi(b);
            mp[v[0]].push_back(scA);
            mp[v[1]].push_back(scB);
            if(scA>scB) cntA++;
            if(scA<scB) cntB++;
        }
        if(cntA>cntB) cout << "*";
        cout << v[0] << " " << cntA << " [ ";
        for(auto x: mp[v[0]]) cout << x << " "; cout << " ]" << endl;
        if(cntA<cntB) cout << "*";
        cout << v[1] << " " << cntB << " [ ";
        for(auto y: mp[v[1]]) cout << y << " "; cout << " ]" << endl;
    }
}