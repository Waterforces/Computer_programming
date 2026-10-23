#include<iostream>
#include<set>
using namespace std;
set<string> se;

void ana(string s,string q,bool ch[]) {
    if(q.size()==s.size()) {
        se.insert(q);
        return ;
    }
    for(int i=0;i<s.size();i++) {
        if(!ch[i]) {
            ch[i]=1;
            ana(s,q+s[i],ch);
            ch[i]=0;
        }
    }
}

int main() {
    string s;
    cin >> s;
    bool check[s.size()]={0};
    ana(s,"",check);
    for(auto x: se) cout << x << " ";
}