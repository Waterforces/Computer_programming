#include<iostream>
#include<queue>
#include<cmath>
using namespace std;

int main() {
    string s;
    int st,n,lnex,ltime,cnt=0;
    double avg=0;
    queue<pair<int,int> > q;
    while(cin >> s) {
        if(s=="reset") cin >> st;
        else if(s=="new") {
            cin >> n;
            cout << ">> ticket " << st << "\n";
            q.push({n,st});
            st++;
        }
        else if(s=="next") {
            auto& [t,id] = q.front(); q.pop();
            cout << ">> call " << id << "\n";
            lnex=id;
            ltime=t;
        }
        else if(s=="order") {
            cin >> n;
            avg+=(n-ltime);
            cnt++;
            cout << ">> qtime " << lnex << " " << n-ltime << "\n";
        }
        else if(s=="avg_qtime") cout << ">> avg_qtime " << round((avg/double(cnt))*100.0)/100.0 << "\n";
    }
}