    #include<iostream>
    #include<vector>
    #include<algorithm>
    using namespace std;

    int main() {
        string s;
        vector<string> v;
        cin >> s;
        s+="$";
        for(int i=0;i<s.size();i++) {
            char tmp = s[0];
            s.erase(s.begin());
            s+=tmp;
            v.push_back(s);
        }
        sort(v.begin(),v.end());
        for(auto x: v) cout << x[x.size()-1];
    }