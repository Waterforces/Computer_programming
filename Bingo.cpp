#include<iostream>
#include<vector>
using namespace std;

int main() {
    string p[5]; cin >> p[0] >> p[1] >> p[2] >> p[3] >> p[4];
    string s[5][5];
    bool b[5][5]={0};
    b[2][2]=1;
    for(int i=0;i<5;i++) {
        for(int j=0;j<5;j++) {
            cin >> s[i][j];
            s[i][j] = p[j]+s[i][j];
        }
    }
    string q;
    int cnt=0;
    while(cin >> q) {
        cnt++;
        for(int i=0;i<5;i++) {
            for(int j=0;j<5;j++) {
                if(q==s[i][j]) {
                    b[i][j]=1;
                    break ;
                }
            }
        }
        vector<string> r,c,up,down;
        for(int i=0;i<5;i++) {
            if(b[i][i]) up.push_back(s[i][i]);
            if(b[i][4-i]) down.push_back(s[i][4-i]);
            for(int j=0;j<5;j++) {
                if(b[i][j] && r.size()<5) r.push_back(s[i][j]);
                if(b[j][i] && c.size()<5) c.push_back(s[j][i]);
            }
            if(r.size()<5) r.clear();
            if(c.size()<5) c.clear();
        }

        if(r.size()==5 || c.size()==5 || up.size()==5 || down.size()==5) {
            cout << cnt << "\n";
            if(r.size()==5) {
                for(int i=0;i<5;i++) {
                    if(r[i]=="N*") continue ;
                    cout << r[i];
                    if(i<4) cout << ", ";
                }
                cout << "\n";
            }
            if(c.size()==5) {
                for(int i=0;i<5;i++) {
                    if(c[i]=="N*") continue ;
                    cout << c[i];
                    if(i<4) cout << ", ";
                }
                cout << "\n";
            }
            if(up.size()==5) {
                for(int i=0;i<5;i++) {
                    if(up[i]=="N*") continue ;
                    cout << up[i];
                    if(i<4) cout << ", ";
                }
                cout << "\n";
            }
            if(down.size()==5) {
                for(int i=4;i>=0;i--) {
                    if(down[i]=="N*") continue ;
                    cout << down[i];
                    if(i>0) cout << ", ";
                }
            }
            return 0;
        }

    }
}