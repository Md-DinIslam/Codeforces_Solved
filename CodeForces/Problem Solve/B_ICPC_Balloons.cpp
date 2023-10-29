#include <bits/stdc++.h>
using namespace std;
void solve() {
    int n, ans = 0;
    cin >> n;
    string s;
    cin >> s;
    map<char, int> hsh;
    for (auto &x : s) hsh[x]++;
    for (auto &x : hsh) ans += x.second + 1;
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