#include <iostream>

using namespace std;

int n, m, cnt;
int v[1005], c[1005];

void solve(int idx, int val) {
    if (val == n) {
        cnt++;
        return;
    }
    if (idx >= m || val > n) return;

    for (int i = 0; i <= c[idx]; i++) { 
        int nxt = val + (i * v[idx]);   
        if (nxt > n) break;
        solve(idx + 1, nxt);
    }
}

int main() {
    cin >> m >> n;
    for (int i = 0; i < m; i++) {
        cin >> v[i] >> c[i];
    }
    if (n == 0) {
        cout << 1;
        return 0;
    }
    solve(0, 0);
    cout << cnt;
}