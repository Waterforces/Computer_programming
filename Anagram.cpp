#include <iostream> 
#include <set> 
using namespace std; 
int main() { 
    multiset<char> a,b;
    string s1,s2;
    getline(cin,s1);
    getline(cin,s2);
    for(auto x: s1) {
        if(x==' ') continue ;
        a.insert(toupper(x));
    }
    for(auto x: s2) {
        if(x==' ') continue ;
        b.insert(toupper(x));
    }
    if(a==b) cout << "YES";
    else cout << "NO";
} 