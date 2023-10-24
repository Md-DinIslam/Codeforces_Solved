#include <bits/stdc++.h>
using namespace std;
void solve() {
    char ch;
    cin >> ch;
    if (ch >= 48 && ch <= 57) cout << "IS DIGIT";
    else if (ch >= 97 && ch <= 122) cout << "ALPHA\nIS SMALL";
    else cout << "ALPHA\nIS CAPITAL";
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
