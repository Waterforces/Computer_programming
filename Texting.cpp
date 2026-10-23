#include<iostream>
#include<sstream>
#include<cctype>
#include<map>
using namespace std;

int main() {
    string q;
    map<string,char> mp={{"0",' '},{"2",'a'},{"22",'b'},{"222",'c'},{"3",'d'},{"33",'e'},{"333",'f'},{"4",'g'},{"44",'h'},{"444",'i'},{"5",'j'},{"55",'k'},{"555",'l'},{"6",'m'},{"66",'n'},{"666",'o'},{"7",'p'},{"77",'q'},{"777",'r'},{"7777",'s'},{"8",'t'},{"88",'u'},{"888",'v'},{"9",'w'},{"99",'x'},{"999",'y'},{"9999",'z'}};
    int num[]={2,2,2,3,3,3,4,4,4,5,5,5,6,6,6,7,7,7,7,8,8,8,9,9,9,9,0};
    while(cin >> q) {
        string s;
        cin.ignore();
        getline(cin,s);
        stringstream ss(s);
        bool ch=0;
        cout << ">> ";
        while(ss >> s) {
            if(q=="T2K") {
                if(ch) cout << 0 << " ";
                for(auto& x: s) {
                    if(tolower(x)>='a' && tolower(x)<='z') {
                        int c = tolower(x)-'a';
                        for(int i=c;i>=0 && num[i]==num[c];i--) cout << num[c];
                        cout << " ";                        
                    }
                }
            }
            else {
                if(s=="0") cout << " ";
                else cout << mp[s];
            }
            ch=1;
        }        
        cout << "\n";
    }
}