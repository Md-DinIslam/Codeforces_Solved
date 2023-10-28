#include <bits/stdc++.h>
using namespace std;
const int mxN = 3e3 + 10;
bool preCal[mxN];
void solve() {
    int n;
    cin >> n;
    int v[n];
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
        preCal[v[i]] = 1;
    }
    for (int i = 1; i < mxN; ++i) {
        if (!preCal[i]) {
            cout << i;
            break;
        }
    }
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