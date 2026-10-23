#include<iostream>
#include<cctype>
using namespace std;

int main() {
    string s,k,q,ch[]={"UUUU","UUUL","UULU","UULL","ULUU","ULUL","ULLU","ULLL","LUUU","LUUL","LULU","LULL"};
    cin >> s;
    while(cin >> k) {
        cin.ignore();
        getline(cin,q);
        if(k=="E") {
            int j=0,t;
            for(int I=0;I<q.size();I++) {
                if(q[I]==' ') continue ;
                if(q[I]=='-') t=10;
                else if(q[I]==',') t=11;
                else t=q[I]-'0';
                int i=0;
                while(i<4) {
                    if(ch[t][i]=='U') cout << char(toupper(s[j]));
                    else cout << char(tolower(s[j]));
                    if((s[j]>='A' && s[j]<='Z') || (s[j]>='a' && s[j]<='z')) i++;
                    j++;
                    if(j==s.size()) j=0;
                }
            }
        }
        else {
            int cnt=0;
            string t="";
            for(int i=0;i<q.size();i++) {
                if((q[i]>='A' && q[i]<='Z') || (q[i]>='a' && q[i]<='z')) {
                    if(q[i]>='A' && q[i]<='Z') t+='U';
                    else if(q[i]>='a' && q[i]<='z') t+='L';
                    cnt++;
                    if(cnt==4) {
                        for(int j=0;j<12;j++) {
                            if(ch[j]==t) {
                                if(j==10) cout << "-";
                                else if(j==11) cout << ",";
                                else cout << j;
                                break ;
                            }
                        }
                        cnt=0;
                        t="";
                    }                    
                }
            }
        }
        cout << "\n";
    }
}