#include <bits/stdc++.h>
using namespace std;
void solve() {
    string s;
    cin >> s;
    for (int i = 0; i < s.size(); ++i) {
        int temp = s[i] - '0';
        if (temp > 4) s[i] = (9 - temp) + '0';
    }
    if (s[0] == '0') s[0] = '9';
    cout << s << '\n';
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