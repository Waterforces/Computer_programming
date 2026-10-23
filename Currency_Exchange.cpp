#include<iostream>
#include<map>
using namespace std;

int main() {
    int n;
    cin >> n;
    map<string,double> mp;
    for(int i=0;i<n;i++) {
        string s;
        double fl;
        cin >> s >> fl;
        mp[s]=fl;
    }
    mp["THB"]=1;
    int cost;
    string ex,t="";
    cin >> cost >> ex;
    cout << cost << " " << ex << " ";
    t=ex;
    while(cin >> ex) {
        cost = cost*(mp[t]/mp[ex]);
        cout << "-> " << cost << " " << ex << " ";
        t=ex;
    }
}