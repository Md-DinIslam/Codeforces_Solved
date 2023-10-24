#include <bits/stdc++.h>
using namespace std;
const int mxN = 2e8 + 10;
bool isPerfectSQ[mxN];
void solve() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; ++i) {
        isPerfectSQ[i * i] = true;
    }
    int ans = 0;
    for (int a = 1; a <= n; ++a) {
        for (int b = a; b <= n; ++b) {
            int c = (a * a) + (b * b);
            if (isPerfectSQ[c]) ans++;
        }
    }
    cout << ans;
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
