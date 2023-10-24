#include <bits/stdc++.h>
using namespace std;
void solve() {
    int n, m;
    cin >> n >> m;
    vector<string> s;
    string temp;
    for (int i = 0; i < n; ++i) {
        // cin >> s[i];
        cin >> temp;
        s.push_back(temp);
    }
    // for (int i = 0; i < n; ++i) {
    //     cout << s[i] << '\n';
    // }
    int x, y, ok = 1;
    cin >> x >> y;
    --x, --y;
    int i = x, j = y;
    if (y - 1 >= 0 && y + 1 < m && (s[x][y - 1] != 'x' || s[x][y + 1] != 'x')) ok = 0;
    if (x - 1 >= 0 && x + 1 < n && (s[x - 1][y] != 'x' || s[x + 1][y] != 'x') ) ok = 0;
    if ( x - 1 >= 0 && x + 1 < n && y - 1 >= 0 && y + 1 < m && (s[x - 1][y - 1] != 'x' || s[x + 1][y + 1] != 'x')) ok = 0;
    if ( x - 1 >= 0 && x + 1 < n && y - 1 >= 0 && y + 1 < m && (s[x - 1][y + 1] != 'x' || s[x + 1][y - 1] != 'x') ) ok = 0;
    if (ok) cout << "yes\n";
    else cout << "no\n";
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
