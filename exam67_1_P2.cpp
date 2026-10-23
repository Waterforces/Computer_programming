#include<iostream>
using namespace std;

int main() {
    int a,b,suma=0,sumb=0,cnta=0,cntb=0;
    cin >> a >> b;
    string sa[a],sb[b];
    for(int i=0;i<a;i++) cin >> sa[i];
    for(int i=0;i<b;i++) cin >> sb[i];
    for(int i=0;i<a;i++) {
        if(sa[i]=="A") cnta++;
        else if(sa[i]=="10" || sa[i]=="J" || sa[i]=="Q" || sa[i]=="K") suma+=10;
        else suma+=sa[i][0]-'0';
    }
    if(cnta>0) {
        suma+=cnta-1;
        if(suma+11>21) suma++;
        else suma+=11;
    }
    for(int i=0;i<b;i++) {
        if(sb[i]=="A") cntb++;
        else if(sb[i]=="10" || sb[i]=="J" || sb[i]=="Q" || sb[i]=="K") sumb+=10;
        else sumb+=sb[i][0]-'0';
    }
    if(cntb>0) {
        sumb+=cntb-1;
        if(sumb+11>21) sumb++;
        else sumb+=11;
    }
    if(suma>21 && sumb>21) cout << "Draw";
    else if(suma>21) cout << "B";
    else if(sumb>21) cout << "A";
    else if(suma>sumb) cout << "A";
    else if(sumb>suma) cout << "B";
    else cout << "Draw";
    cout << "\n" << suma << " " << sumb;
}