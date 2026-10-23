#include<iostream>
using namespace std;

int main() {
    string s,a="",b="";
    bool ch1=0,ch2=0;
    getline(cin,s);
    int ft=0,lt=0;
    for(int i=0;i<s.size()-1;i++) {
        if(ft>0) {
            if(s[i]==' ') lt=i;
        }
        else {
            if(s[i]==' ') ft=lt=i;
            else {
                if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u') ch1=1;
                if(ch1) a+=s[i];            
            }            
        }
    }
    for(int i=lt+1;i<s.size();i++) {
        if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u') ch2=1;
        if(ch2) b+=s[i];  
    }
    for(int i=0;i<s.size();i++) {
        if(i<ft) {
            if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u') {
                cout << b << " ";
                i=ft;
            }
            else cout << s[i];
        }
        else if(i>lt) {
            if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u') {
                cout << a << " ";
                return 0;
            }
            else cout << s[i];
        }
        else cout << s[i];
    }
}