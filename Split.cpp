#include <iostream> 
#include <vector> 
 
using namespace std; 
 
vector<string> split(string line, char delimiter) { 
    // Add code
    vector<string> v;
    string s="";
    for(auto x: line) {
        if(x==delimiter) {
            if(s!="") v.emplace_back(s);
            s="";
        }
        else s+=x;
    }
    if(s!="") v.emplace_back(s);
    return v;
} 
int main() { 
    string line; 
    getline(cin, line); 
    string delim; 
    getline(cin, delim); 
    for (string e : split(line, delim[0])) { 
        cout << '(' << e << ')'; 
    } 

} 