#include <bits/stdc++.h>
using namespace std;
void solve() {
    string s;
    cin >> s;
    if (s[0] == 'a' || s[1] == 'b' || s[2] == 'c')
        cout << "YES\n";
    else cout << "NO\n";
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