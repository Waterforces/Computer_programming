#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    long long a[n];
    unordered_map<long long, int> freq;
    for (int i=0; i<n; i++) {
        cin >> a[i];
        freq[a[i]]++;
    }
    for (int i=0; i<n; i++) {
        long long target=a[i] * 2;
        
        if (target==a[i]) cout << (freq[target] > 1 ? 1 : 0) << " ";
        else cout << (freq.count(target) ? 1 : 0) << " ";
    }
}