#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void solve() {
    int n;
    cin >> n;
    ll ans = 0;
    vector<vector<int>> cnt(12, vector<int> (12, 0));
    for (int i = 0; i < n; ++i) {
        string s; cin >> s;
        for (int j = 0; j < 2; ++j) {
            for (char ch = 'a'; ch <= 'k'; ++ch) {
                if (ch == s[j]) continue;
                string tm = s;
                tm[j] = ch;
                ans += cnt[tm[0] - 'a'][tm[1] - 'a'];
            }
        }
        ++cnt[s[0] - 'a'][s[1] - 'a'];
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