#include<iostream>
#include<tuple>
#include<set>
using namespace std;

int main() {
    string id;
    set<tuple<double,int,string> > qu, wa;
    set<string> un;
    while(cin >> id) {
        if(id=="END") break ;
        double gx; 
        int hr, pf;
        cin >> gx >> hr >> pf;
        if(gx>=3.75 && pf<=300000) qu.insert({-gx,pf,id});
        else if(gx>=3.5 && hr>=100) wa.insert({-gx,-hr,id});
        else un.insert(id);
    }
    if(qu.size()>0) {
        cout << "Qualified\n";
        for(auto [gx,pf,id]: qu) cout << id << "\n"; 
    }
    if(wa.size()>0) {
        cout << "Waiting List\n";
        for(auto [gx,hr,id]: wa) cout << id << "\n"; 
    }
    if(un.size()>0) {
        cout << "Unqualified\n";
        for(auto id: un) cout << id << "\n";
    }
}