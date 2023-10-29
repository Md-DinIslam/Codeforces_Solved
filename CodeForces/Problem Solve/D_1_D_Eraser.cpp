#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void solve() {
    int n, k;
    string s;
    cin >> n >> k >> s;
    int j = 0, ans = 0;
    for (int i = 0; i < n; ++i) {
        if (s[i] == 'B') {
            ++ans, i += k - 1;
        }
    }
    cout << ans << '\n';
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
    cin >> t;
    while (t--) {
        solve();
    }
    // for (int i = 1; i <= t; ++i) {
    //     cout << "Case " << i << ": ";
    //     solve();
    // }
}