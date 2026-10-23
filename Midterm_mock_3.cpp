#include<bits/stdc++.h>
using namespace std;

int main() {
    int mn,bloom,mx;
    cin >> mn >> bloom >> mx;
    double w[4];
    for(int i=0;i<4;i++) cin >> w[i];
    string s;
    while(cin>> s) {
        if(s=="-1") return 0;
        double add;
        int a=0,b=0,c=0,d=0;
        cin >> add;
        if(s=="W") w[0]+=add;
        else if(s=="N") w[1]+=add;
        else if(s=="P") w[2]+=add;
        else if(s=="K") w[3]+=add; 
        for(int i=0;i<4;i++) {
            if(w[i]<=mn) a++;
            else if(w[i]>mx) b++;
            else if(w[i]>bloom) c++;
            else d++;
        }
        if(b>0) {
            cout << "The rose is dead\n";
            return 0;
        }
        else if(a>0) cout << "The rose is wilted\n";
        else if(c==4) cout << "The rose is blooming\n";
        else cout << "Not bloom yet\n";
        for(int i=0;i<4;i++) w[i]=(w[i]*70)/100.0;
    }
}