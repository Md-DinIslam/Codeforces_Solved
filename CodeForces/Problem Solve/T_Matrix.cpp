#include <bits/stdc++.h>
using namespace std;
void solve() {
    int n;
    cin >> n;
    int v[n][n];
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> v[i][j];
        }
    }
    int i = 0, j = 0, lb = 0, rb = 0;
    while (i != n && j != n) {
        lb += v[i][j];
        ++i, ++j;
    }
    i = 0, j = n - 1;
    while (i != n && j >= 0) {
        rb += v[i][j];
        ++i, --j;
    }
    cout << abs(rb - lb);
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    freopen("Error.txt", "w", stderr);
#endif
    int t = 1;
    // cin >> t;
    while (t--) {
        solve();
    }
    // for (int i = 1; i <= t; ++i) {
    //     cout << "Case " << i << ": ";
    //     solve();
    // }
}
