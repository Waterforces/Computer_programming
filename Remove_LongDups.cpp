#include<iostream>
using namespace std;

int main() {
    string s;
    int k;
    cin >> s >> k;
    int i=0;
    while(i<s.size()) {
        if(s[i]==s[i+1]) {
            int cnt=2,j=i+1;
            while(s[j]==s[j+1]) {
                cnt++;
                j++;
            }
            if(cnt<k) {
                for(int k=i;k<=j;k++) cout << s[k];
            }
            i=j+1;
        }
        else {
            cout << s[i];
            i++;
        }
    }
}