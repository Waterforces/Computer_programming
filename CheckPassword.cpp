#include<iostream>
#include<cstring>
#include<stdbool.h>
using namespace std;

int main() {
    string s;
    while(cin >> s) {
        int sz = s.size();
        bool isBig=0,isSmall=0,isNum=0,isSpe=0;
        for(auto x: s) {
            if(x<='9' && x>='0') isNum=1;
            else if(x>='a' && x<='z') isSmall=1;
            else if(x>='A' && x<='Z') isBig=1;
            else isSpe=1;
        }
        if(sz>=12 && isBig && isSmall && isNum && isSpe) cout << ">> strong\n";
        else if(sz>=8 && isBig && isSmall && isNum) cout << ">> weak\n";
        else cout << ">> invalid\n";
    }
}