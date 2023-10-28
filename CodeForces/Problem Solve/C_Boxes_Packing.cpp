#include <bits/stdc++.h>
using namespace std;
void solve() {
    int n;
    cin >> n;
    map<int, int> freq;
    int ans = 0;
    for (int i = 0; i < n; ++i) {
        int x;
        cin >> x;
        freq[x]++;
        ans = max(ans, freq[x]);
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