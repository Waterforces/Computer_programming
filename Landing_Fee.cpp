#include<iostream>
using namespace std;

int main() {
    int n,sum=0;
    cin >> n;
    string con[n],q,tmp="";
    int cost[n];
    for(int i=0;i<n;i++) cin >> con[i] >> cost[i];
    cin.ignore();
    getline(cin,q);
    for(int i=4;i<q.size();i+=7) {
        string s = q.substr(i,2);
        if(tmp=="" || tmp==s) tmp = s;
        else {
            for(int j=0;j<n;j++) {
                if(con[j]==s) {
                    sum+=cost[j];
                    break ;
                }
            }
            tmp=s;
        }
    }
    cout << sum;
}