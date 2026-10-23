#include<iostream>
#include<set>
using namespace std;

int main() {
    set<string> win, lose;
    string w,l;
    bool b=0;
    while(cin >> w >> l) {
        win.insert(w);
        lose.insert(l);
    }
    for(auto x: win) {
        if(!lose.count(x)) {
            cout << x << " ";
            b=1;
        }
    }
    if(!b) cout << "None";
}