#include <bits/stdc++.h>
using namespace std;
void solve() {
    int a, b, c;
    cin >> a >> b >> c;
    int mn = min(a, min(b,c)), mx = max(a,max(b,c));
    cout << mn << " " << mx;
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
