#include<iostream>
#include<vector>
#include<algorithm>
#include<tuple>
using namespace std;

vector<tuple<string,int,string> > v;

int main() {
    int n;
    cin >> n;
    for(int i=0;i<n;i++) {
        string id,gr;
        cin >> id >> gr;
        v.emplace_back(gr,i,id);
    }
    string q;
    while(cin >> q) {
        char o = q[q.size()-1];
        q.pop_back();
        for(auto& [gr,idx,id]: v) {
            if(id==q) {
                if(o=='+') {
                    if(gr=="B+") gr="A";
                    else if(gr=="B") gr="B+";
                    else if(gr=="C+") gr="B";
                    else if(gr=="C") gr="C+";
                    else if(gr=="D+") gr="C";
                    else if(gr=="D") gr="D+";
                    else if(gr=="F") gr="D";
                }
                else {
                    if(gr=="A") gr="B+";
                    else if(gr=="B+") gr="B";
                    else if(gr=="B") gr="C+";
                    else if(gr=="C+") gr="C";
                    else if(gr=="C") gr="D+";
                    else if(gr=="D+") gr="D";
                    else if(gr=="D") gr="F";
                }
            }
        }
    }
    sort(v.begin(),v.end(),[](const tuple<string,int,string> A, const tuple<string,int,string> B){
        auto [grA,idxA,idA] = A;
        auto [grB,idxB,idB] = B;
        double a=grA.size()==2 ? grA[0]-'A'-0.5: grA[0]-'A';
        double b=grB.size()==2 ? grB[0]-'A'-0.5: grB[0]-'A';
        if(a==b) return idxA<idxB;
        return a<b;
    });
    for(auto [gr,idx,id]: v) cout << id << " " << gr << "\n";
}